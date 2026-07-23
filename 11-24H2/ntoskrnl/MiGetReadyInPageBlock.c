/*
 * XREFs of MiGetReadyInPageBlock @ 0x140A9E628
 * Callers:
 *     MiSwitchToTransition @ 0x1404EEE28 (MiSwitchToTransition.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x14026757C (MiLocateLockedVadEvent.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     MiGetInPageSupportBlock @ 0x1403DC710 (MiGetInPageSupportBlock.c)
 *     MiInitializeInPageSupport @ 0x1403DC938 (MiInitializeInPageSupport.c)
 *     MiFreeInPageSupportBlock @ 0x140427430 (MiFreeInPageSupportBlock.c)
 */

__int64 __fastcall MiGetReadyInPageBlock(__int64 a1)
{
  unsigned __int64 LockedVadEvent; // rsi
  __int64 v2; // rbx
  PSLIST_ENTRY v3; // rdi

  LockedVadEvent = MiLocateLockedVadEvent(a1, 8);
  v2 = *(_QWORD *)(LockedVadEvent + 8);
  while ( *(_DWORD *)(v2 + 176) != 1 )
  {
    v3 = MiGetInPageSupportBlock(0, 0LL);
    if ( v3 )
    {
      MiFreeInPageSupportBlock((PSLIST_ENTRY)v2);
      *(_QWORD *)(LockedVadEvent + 8) = v3;
      v2 = (__int64)v3;
      break;
    }
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  }
  MiInitializeInPageSupport(v2, 0, 0LL);
  return v2;
}
