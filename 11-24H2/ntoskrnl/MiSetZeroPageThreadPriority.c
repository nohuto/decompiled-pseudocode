/*
 * XREFs of MiSetZeroPageThreadPriority @ 0x14020A388
 * Callers:
 *     MiZeroThreadContextSetExiting @ 0x140209DA4 (MiZeroThreadContextSetExiting.c)
 *     MiBackgroundZeroLocalPages @ 0x14020A480 (MiBackgroundZeroLocalPages.c)
 *     MiFlushZeroPageHeatBatch @ 0x140469FF0 (MiFlushZeroPageHeatBatch.c)
 *     MiZeroPageMakeHot @ 0x1406903F8 (MiZeroPageMakeHot.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14020A160 (KeSetActualBasePriorityThread.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiSetZeroPageThreadPriority(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  int v4; // ebp
  int v5; // r14d
  KIRQL v7; // di
  __int64 v8; // rsi
  unsigned int v9; // ebx

  CurrentThread = KeGetCurrentThread();
  v4 = a3;
  v5 = a2;
  v7 = 17;
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 336) + 176LL) + 48LL) + 16LL)
     + 57216LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 336) + 176LL) + 56LL);
  if ( !(_DWORD)a3 )
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 15280));
  if ( (*(_DWORD *)(a1 + 384) & 8) != 0 )
    v9 = 32;
  else
    v9 = KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, v5, a3);
  if ( !v4 )
  {
    LOBYTE(a2) = v7;
    MiReleaseSpinLockExclusive(v8 + 15280, a2);
  }
  return v9;
}
