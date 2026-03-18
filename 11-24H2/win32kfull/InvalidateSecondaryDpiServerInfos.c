/*
 * XREFs of InvalidateSecondaryDpiServerInfos @ 0x1402877B4
 * Callers:
 *     xxxSetNCFonts @ 0x140112490 (xxxSetNCFonts.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x140152AA8 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 * Callees:
 *     ?ClearDpiServerInfo@@YAXPEAUtagDPISERVERINFO@@@Z @ 0x140287260 (-ClearDpiServerInfo@@YAXPEAUtagDPISERVERINFO@@@Z.c)
 */

void __fastcall InvalidateSecondaryDpiServerInfos(struct HLFONT__ **a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi

  v2 = 5304LL;
  v3 = 16LL;
  do
  {
    a1 = (struct HLFONT__ **)(v2 + *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19928));
    if ( *(_DWORD *)a1 )
      ClearDpiServerInfo(a1);
    v2 += 104LL;
    --v3;
  }
  while ( v3 );
}
