/*
 * XREFs of ?DragCancel@CAppViewManager@@UEAAJAEBU_GUID@@@Z @ 0x1802F7310
 * Callers:
 *     <none>
 * Callees:
 *     ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x1802FC350 (-_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z.c)
 */

__int64 __fastcall CAppViewManager::DragCancel(CAppViewManager *this, const struct _GUID *a2)
{
  CAppViewManager::_ObliterateOperation((CAppViewManager *)((char *)this - 56), a2);
  return 0LL;
}
