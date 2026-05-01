/*
 * XREFs of ?get_Description@TileAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18003C9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008BC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::TileAppDisplayInfoServer::get_Description(
        Windows::Gaming::Preview::GamesEnumeration::TileAppDisplayInfoServer *this,
        HSTRING *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    *a2 = 0LL;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
