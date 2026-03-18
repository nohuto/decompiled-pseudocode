/*
 * XREFs of IsMFMWFPWindow @ 0x1C0215E88
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0213518 (xxxHandleMenuMessages.c)
 *     LockMFMWFPWindow @ 0x1C0215EAC (LockMFMWFPWindow.c)
 *     UnlockMFMWFPWindow @ 0x1C0216164 (UnlockMFMWFPWindow.c)
 *     xxxMNFindWindowFromPoint @ 0x1C02173E0 (xxxMNFindWindowFromPoint.c)
 *     xxxMNMouseMove @ 0x1C02180A0 (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x1C0219F60 (xxxMenuWindowProc.c)
 *     xxxMNDragOver @ 0x1C0230FB8 (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C0231154 (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C023134C (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsMFMWFPWindow(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( a1 )
  {
    if ( a1 != 4294967291LL )
      return a1 != 0xFFFFFFFFLL;
  }
  return result;
}
