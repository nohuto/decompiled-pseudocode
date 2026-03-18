/*
 * XREFs of UserIsTtmEnabled @ 0x1401BEA60
 * Callers:
 *     ?DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z @ 0x1400137A0 (-DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall UserIsTtmEnabled(__int64 a1)
{
  return *(_BYTE *)W32GetUserGdiSessionState(a1) != 0;
}
