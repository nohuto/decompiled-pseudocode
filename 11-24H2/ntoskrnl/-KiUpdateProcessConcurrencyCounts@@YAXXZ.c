/*
 * XREFs of ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x140210350
 * Callers:
 *     ?KiIdealProcessorRebalancerWorker@@YAXPEAX@Z @ 0x140478EA0 (-KiIdealProcessorRebalancerWorker@@YAXPEAX@Z.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402105E0 (KeQueryActiveProcessorCountEx.c)
 *     ?KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z @ 0x14021061C (-KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     KiReleaseProcessLockExclusive @ 0x1403B3B08 (KiReleaseProcessLockExclusive.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403CD164 (MmAdjustWorkingSetSizeEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PsGetNextProcess @ 0x1408EEB70 (PsGetNextProcess.c)
 */

void KiUpdateProcessConcurrencyCounts(void)
{
  ULONG_PTR i; // rdi
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
  LARGE_INTEGER v13; // r8
  LONGLONG v14; // rax
  unsigned int *v15; // rbx
  LONGLONG v16; // rcx
  unsigned __int64 v17; // rsi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v19; // eax
  unsigned int v20; // edx
  unsigned __int8 v21[8]; // [rsp+30h] [rbp-68h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-60h] BYREF
  _OWORD v23[3]; // [rsp+48h] [rbp-50h] BYREF

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
      v21[0] = 0;
      v14 = v1.QuadPart + (PerformanceCounter.QuadPart - v1.QuadPart) / 2;
      v15 = *(unsigned int **)(i + 184);
      v16 = v14 - *(_QWORD *)(i + 392);
      *(_QWORD *)(i + 392) = v14;
      v17 = v2 / ((unsigned __int64)(10000000 * v16) / PerformanceFrequency.QuadPart + 1);
      if ( (v15[3] & 1) == 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))KiRaiseIrqlProcessIrqlFlags)(
            CurrentIrql,
            2LL,
            (LARGE_INTEGER)v13.QuadPart);
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(i + 64));
        if ( (v15[3] & 1) != 0 )
        {
          KiReleaseProcessLockExclusive(i, CurrentIrql);
        }
        else
        {
          v19 = *v15;
          if ( (unsigned int)v17 > KeMaximumProcessors )
            v20 = (KeMaximumProcessors << 18) - 1;
          else
            v20 = (_DWORD)v17 << 18;
          if ( v20 < v19 )
            v20 = v19 - ((v19 - v20) >> 4);
          KiSetProcessConcurrencyCount((struct _KPROCESS *)i, (union _KI_PROCESS_CONCURRENCY_COUNT)v20, v21);
          KiReleaseProcessLockExclusive(i, CurrentIrql);
          if ( v21[0] )
          {
            memset(v23, 0, sizeof(v23));
            KiStackAttachProcess(i);
            v21[0] = 0;
            MmAdjustWorkingSetSizeEx(-1, -1, 0, 0, 0, (__int64)v21);
            KiUnstackDetachProcess(v23, 0LL);
          }
        }
      }
    }
  }
}
