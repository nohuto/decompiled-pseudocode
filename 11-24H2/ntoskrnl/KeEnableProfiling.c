/*
 * XREFs of KeEnableProfiling @ 0x140AB0F18
 * Callers:
 *     NtSetInformationThread @ 0x1408E8B60 (NtSetInformationThread.c)
 * Callees:
 *     KeUpdateTotalCyclesCurrentThread @ 0x1403693A0 (KeUpdateTotalCyclesCurrentThread.c)
 *     KiBeginCounterAccumulation @ 0x14048D030 (KiBeginCounterAccumulation.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall KeEnableProfiling(_KTHREAD *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 Pool2; // rax

  if ( (a2 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  if ( a1->WaitBlock[0].SparePtr )
    return 3221226243LL;
  Pool2 = ExAllocatePool2(0x41uLL, 0x1A8uLL, 0x666F7250u);
  if ( !Pool2 )
    return 3221225495LL;
  *(_QWORD *)(Pool2 + 8) = a4;
  *(_DWORD *)(Pool2 + 16) = a2;
  *(_QWORD *)(Pool2 + 32) = a3;
  a1->WaitBlock[0].SparePtr = (PVOID)Pool2;
  _interlockedbittestandset(&a1->Header.Lock, 0x10u);
  *(_QWORD *)(Pool2 + 24) = KeUpdateTotalCyclesCurrentThread(a1, 0LL);
  if ( (a2 & 1) != 0 || a3 )
  {
    KiBeginCounterAccumulation((__int64)a1, 0);
    _interlockedbittestandset(&a1->Header.Lock, 0x11u);
  }
  return 0LL;
}
