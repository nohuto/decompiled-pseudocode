/*
 * XREFs of ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x1403396B0
 * Callers:
 *     ?KiIdealProcessorRebalancerWorker@@YAXPEAX@Z @ 0x140474920 (-KiIdealProcessorRebalancerWorker@@YAXPEAX@Z.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 *     ?KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z @ 0x14033997C (-KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     KiReleaseProcessLockExclusive @ 0x1403A2318 (KiReleaseProcessLockExclusive.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14046C954 (MmAdjustWorkingSetSizeEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PsGetNextProcess @ 0x1408603A0 (PsGetNextProcess.c)
 */

void KiUpdateProcessConcurrencyCounts(void)
{
  __int64 i; // rdi
  LARGE_INTEGER v1; // rbx
  unsigned __int64 v2; // rsi
  ULONG ActiveProcessorCount; // eax
  __int64 v4; // r11
  __int64 v5; // rbp
  __int64 v6; // r10
  unsigned int v7; // r9d
  unsigned int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  LONGLONG v13; // rax
  unsigned int *v14; // rbx
  LONGLONG v15; // rcx
  unsigned int v16; // esi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v18; // eax
  unsigned int v19; // edx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int8 v22[8]; // [rsp+30h] [rbp-68h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-60h] BYREF
  _OWORD v24[3]; // [rsp+48h] [rbp-50h] BYREF

  for ( i = PsGetNextProcess(0LL); i; i = PsGetNextProcess((PVOID)i) )
  {
    PerformanceFrequency.QuadPart = 0LL;
    if ( *(_QWORD *)(i + 400) )
    {
      v1 = KeQueryPerformanceCounter(&PerformanceFrequency);
      v2 = 0LL;
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
      if ( ActiveProcessorCount )
      {
        v4 = 0LL;
        v5 = ActiveProcessorCount;
        do
        {
          ++v4;
          v6 = (*(_DWORD *)(i + 400) >> 4) & 0x1FF;
          v7 = (*(_DWORD *)(i + 400) >> 13) & 0x3FFFF;
          _BitScanReverse(&v8, v7);
          v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 * 8 + ExSaPageArrays - 8) + 8LL * (v8 - 2))
                         + 8LL * (v7 ^ (1 << v8))
                         + 8);
          v10 = *(_QWORD *)(v9 + 8 * v6);
          v11 = *(_QWORD *)(v9 + 8 * v6 + 8);
          *(_QWORD *)(v9 + 8 * v6 + 8) = v10;
          v2 += 10000000 * (v10 - v11) / (1000000 * (unsigned __int64)*(unsigned int *)(KiProcessorBlock[v4 - 1] + 68));
          --v5;
        }
        while ( v5 );
      }
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v22[0] = 0;
      v13 = v1.QuadPart + (PerformanceCounter.QuadPart - v1.QuadPart) / 2;
      v14 = *(unsigned int **)(i + 184);
      v15 = v13 - *(_QWORD *)(i + 392);
      *(_QWORD *)(i + 392) = v13;
      v16 = v2 / ((unsigned __int64)(10000000 * v15) / PerformanceFrequency.QuadPart + 1);
      if ( (v14[3] & 1) == 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(i + 64));
        if ( (v14[3] & 1) != 0 )
        {
          KiReleaseProcessLockExclusive(i, CurrentIrql);
        }
        else
        {
          v18 = *v14;
          if ( v16 > KeMaximumProcessors )
            v19 = (KeMaximumProcessors << 18) - 1;
          else
            v19 = v16 << 18;
          if ( v19 < v18 )
            v19 = v18 - ((v18 - v19) >> 4);
          KiSetProcessConcurrencyCount((struct _KPROCESS *)i, (union _KI_PROCESS_CONCURRENCY_COUNT)v19, v22);
          KiReleaseProcessLockExclusive(i, CurrentIrql);
          if ( v22[0] )
          {
            memset(v24, 0, sizeof(v24));
            KiStackAttachProcess((_KPROCESS *)i, 0, (__int64)v24);
            v22[0] = 0;
            MmAdjustWorkingSetSizeEx(-1, -1, 0, 0, 0, (__int64)v22);
            KiUnstackDetachProcess((__int64)v24, 0, v20, v21);
          }
        }
      }
    }
  }
}
