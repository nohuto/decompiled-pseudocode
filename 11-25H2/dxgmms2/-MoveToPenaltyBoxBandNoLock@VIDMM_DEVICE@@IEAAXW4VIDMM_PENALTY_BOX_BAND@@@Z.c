/*
 * XREFs of ?MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x140101B10
 * Callers:
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1400E0408 (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1400E0C88 (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1400E0F9C (-MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 * Callees:
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14003C2C8 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x140040244 (-InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 */

char __fastcall VIDMM_DEVICE::MoveToPenaltyBoxBandNoLock(_DWORD **a1, unsigned __int8 a2)
{
  char result; // al

  if ( ((_BYTE)a1[39] & 7) != 0 )
  {
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry((VIDMM_GLOBAL *)a1, (struct _LIST_ENTRY *)(a1 + 23));
    *((_BYTE *)a1 + 312) &= 0xF8u;
  }
  VIDMM_GLOBAL::InsertToPenaltyBox(*a1, (__int64)a1, a2);
  result = *((_BYTE *)a1 + 312);
  *((_BYTE *)a1 + 312) = result ^ (a2 ^ result) & 7;
  return result;
}
