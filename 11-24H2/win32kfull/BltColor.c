/*
 * XREFs of BltColor @ 0x14003BFF0
 * Callers:
 *     xxxDrawState @ 0x14003A7F0 (xxxDrawState.c)
 *     xxxRealDrawMenuItem @ 0x14003B17C (xxxRealDrawMenuItem.c)
 *     xxxDrawMenuItem @ 0x140069860 (xxxDrawMenuItem.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1402E8A4C (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 * Callees:
 *     GreBitBltInternal @ 0x14001970C (GreBitBltInternal.c)
 *     GreSetTextColor @ 0x14007A278 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x14007A308 (GreSetBkColor.c)
 */

__int64 __fastcall BltColor(
        HDC a1,
        __int64 a2,
        HDC a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        unsigned int a10)
{
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // rcx
  int v17; // edi
  __int64 v18; // r8

  v14 = 0LL;
  GreSetTextColor(a1);
  GreSetBkColor(a1);
  if ( a2 )
    v14 = GreSelectBrush(a1, a2, v15);
  v16 = a10;
  v17 = ((a10 & 1) != 0 ? 12060490 : 14812998) | 0x80000000;
  if ( (a10 & 2) == 0 )
    v17 = (a10 & 1) != 0 ? 12060490 : 14812998;
  if ( !a3 )
  {
    LOBYTE(v16) = -(a10 & 1);
    a3 = *(HDC *)(*(_QWORD *)(W32GetUserSessionState(v16, (a10 & 1) != 0 ? 12060490 : 14812998) + 57008) + 80LL);
  }
  GreBitBltInternal(a1, a4, a5, a6, a7, a3, a8, a9, v17, 0xFFFFFFu, 0);
  if ( a2 )
    GreSelectBrush(a1, v14, v18);
  GreSetTextColor(a1);
  return GreSetBkColor(a1);
}
