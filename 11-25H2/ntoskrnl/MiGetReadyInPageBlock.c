/*
 * XREFs of MiGetReadyInPageBlock @ 0x140A9EAE8
 * Callers:
 *     MiSwitchToTransition @ 0x1404AC960 (MiSwitchToTransition.c)
 * Callees:
 *     MiFreeInPageSupportBlock @ 0x14023B4B0 (MiFreeInPageSupportBlock.c)
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     MiLocateLockedVadEvent @ 0x1402A57D4 (MiLocateLockedVadEvent.c)
 *     MiGetInPageSupportBlock @ 0x140387260 (MiGetInPageSupportBlock.c)
 *     MiInitializeInPageSupport @ 0x140387488 (MiInitializeInPageSupport.c)
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
