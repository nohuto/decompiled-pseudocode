/*
 * XREFs of IsMFMWFPWindow @ 0x14006DE58
 * Callers:
 *     xxxHandleMenuMessages @ 0x14006D0F0 (xxxHandleMenuMessages.c)
 *     xxxMNMouseMove @ 0x14006DA24 (xxxMNMouseMove.c)
 *     xxxMNFindWindowFromPoint @ 0x14006DE80 (xxxMNFindWindowFromPoint.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     UnlockMFMWFPWindow @ 0x140269060 (UnlockMFMWFPWindow.c)
 *     LockMFMWFPWindow @ 0x1402BD81C (LockMFMWFPWindow.c)
 *     xxxMNDragOver @ 0x1402E7CF0 (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1402E7E6C (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1402E8064 (xxxMNUpdateDraggingInfo.c)
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
