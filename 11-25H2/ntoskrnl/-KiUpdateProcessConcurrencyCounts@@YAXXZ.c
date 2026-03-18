/*
 * XREFs of ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x1403AE380
 * Callers:
 *     ?KiIdealProcessorRebalancerWorker@@YAXPEAX@Z @ 0x140478820 (-KiIdealProcessorRebalancerWorker@@YAXPEAX@Z.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeQueryActiveProcessorCountEx @ 0x1403AE660 (KeQueryActiveProcessorCountEx.c)
 *     KiReleaseProcessLockExclusive @ 0x1403AE69C (KiReleaseProcessLockExclusive.c)
 *     ?KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z @ 0x1403AE6F4 (-KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403C5254 (MmAdjustWorkingSetSizeEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PsGetNextProcess @ 0x1408DF760 (PsGetNextProcess.c)
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
  unsigned __int8 v20[8]; // [rsp+30h] [rbp-68h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-60h] BYREF
  _OWORD v22[3]; // [rsp+48h] [rbp-50h] BYREF

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
      v20[0] = 0;
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
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
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
          KiSetProcessConcurrencyCount((struct _KPROCESS *)i, (union _KI_PROCESS_CONCURRENCY_COUNT)v19, v20);
          KiReleaseProcessLockExclusive(i, CurrentIrql);
          if ( v20[0] )
          {
            memset(v22, 0, sizeof(v22));
            KiStackAttachProcess((_KPROCESS *)i, 0, (__int64)v22);
            v20[0] = 0;
            MmAdjustWorkingSetSizeEx(-1, -1, 0, 0, 0, (__int64)v20);
            KiUnstackDetachProcess((__int64)v22, 0LL);
          }
        }
      }
    }
  }
}
