/*
 * XREFs of MiSetZeroPageThreadPriority @ 0x14020EE0C
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x14020F1F0 (MiBackgroundZeroLocalPages.c)
 *     MiZeroThreadContextSetExiting @ 0x140440974 (MiZeroThreadContextSetExiting.c)
 *     MiFlushZeroPageHeatBatch @ 0x14046B9E4 (MiFlushZeroPageHeatBatch.c)
 *     MiZeroPageMakeHot @ 0x140684F98 (MiZeroPageMakeHot.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14020E620 (KeSetActualBasePriorityThread.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 */

__int64 __fastcall MiSetZeroPageThreadPriority(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // r15
  int v5; // r14d
  KIRQL v7; // di
  __int64 v8; // rsi
  unsigned int v9; // ebx

  CurrentThread = KeGetCurrentThread();
  v5 = a2;
  v7 = 17;
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 336) + 176LL) + 48LL) + 16LL)
     + 57216LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 336) + 176LL) + 56LL);
  if ( !a3 )
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 15280));
  if ( (*(_DWORD *)(a1 + 384) & 8) != 0 )
    v9 = 32;
  else
    v9 = KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, v5);
  if ( !a3 )
  {
    LOBYTE(a2) = v7;
    MiReleaseSpinLockExclusive(v8 + 15280, a2);
  }
  return v9;
}
