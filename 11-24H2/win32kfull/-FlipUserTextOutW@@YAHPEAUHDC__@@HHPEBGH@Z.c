/*
 * XREFs of ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x14007A904
 * Callers:
 *     ?DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z @ 0x140039270 (-DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x14007A41C (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 * Callees:
 *     GreGetLayout @ 0x140037748 (GreGetLayout.c)
 *     GreSetTextAlign @ 0x140038C8C (GreSetTextAlign.c)
 *     GreSetGraphicsMode @ 0x140038D44 (GreSetGraphicsMode.c)
 *     GreExtTextOutW @ 0x14007A7F4 (GreExtTextOutW.c)
 *     GreGetTextAlign @ 0x1401F1C90 (GreGetTextAlign.c)
 */

__int64 __fastcall FlipUserTextOutW(HDC a1, unsigned int a2, unsigned int a3, const unsigned __int16 *a4)
{
  unsigned int v8; // ebx
  int v10; // r14d
  int TextAlign; // eax
  int v12; // ebp

  if ( (GreGetLayout(a1) & 1) != 0 && (unsigned __int16)(*a4 - 97) <= 1u )
  {
    v8 = 0;
    v10 = GreSetGraphicsMode(a1, 1);
    if ( v10 )
    {
      TextAlign = GreGetTextAlign(a1);
      v12 = TextAlign;
      if ( (TextAlign & 6) != 6 )
        GreSetTextAlign(a1, TextAlign ^ 2);
      v8 = GreExtTextOutW(a1, a2, a3, 0, 0LL, (__int64)a4, 1);
      GreSetGraphicsMode(a1, v10);
      GreSetTextAlign(a1, v12);
    }
  }
  else
  {
    return (unsigned int)GreExtTextOutW(a1, a2, a3, 0, 0LL, (__int64)a4, 1);
  }
  return v8;
}
