/*
 * XREFs of MiSetZeroPageThreadPriority @ 0x140331968
 * Callers:
 *     MiZeroThreadContextSetExiting @ 0x140331384 (MiZeroThreadContextSetExiting.c)
 *     MiBackgroundZeroLocalPages @ 0x140332260 (MiBackgroundZeroLocalPages.c)
 *     MiFlushZeroPageHeatBatch @ 0x140462F20 (MiFlushZeroPageHeatBatch.c)
 *     MiZeroPageMakeHot @ 0x1406914C8 (MiZeroPageMakeHot.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     KeSetActualBasePriorityThread @ 0x140331740 (KeSetActualBasePriorityThread.c)
 */

__int64 __fastcall MiSetZeroPageThreadPriority(__int64 a1, int a2, int a3)
{
  struct _KTHREAD *CurrentThread; // r15
  KIRQL v7; // di
  __int64 v8; // rsi
  unsigned int v9; // ebx

  CurrentThread = KeGetCurrentThread();
  v7 = 17;
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 336) + 176LL) + 48LL) + 16LL)
     + 57216LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 336) + 176LL) + 56LL);
  if ( !a3 )
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 15280));
  if ( (*(_DWORD *)(a1 + 384) & 8) != 0 )
    v9 = 32;
  else
    v9 = KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, a2);
  if ( !a3 )
    MiReleaseSpinLockExclusive((_DWORD *)(v8 + 15280), v7);
  return v9;
}
