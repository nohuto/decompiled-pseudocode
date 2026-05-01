/*
 * XREFs of ?GetRectFromContactId@PeoplePaneViewManager@@UEAAJPEBGPEAUtagRECT@@@Z @ 0x180411250
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRectFromPropertySet@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z @ 0x180411298 (-GetRectFromPropertySet@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall PeoplePaneViewManager::GetRectFromContactId(
        HWND *this,
        const unsigned __int16 *a2,
        struct tagRECT *a3)
{
  if ( PeoplePaneViewManager::GetRectFromPropertySet((PeoplePaneViewManager *)(this - 11), a2, a3) < 0 )
    GetWindowRect(this[61], a3);
  return 0LL;
}
