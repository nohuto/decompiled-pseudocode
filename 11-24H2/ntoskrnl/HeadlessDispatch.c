/*
 * XREFs of HeadlessDispatch @ 0x140653C90
 * Callers:
 *     BgkDisplayStringEx @ 0x14058FD04 (BgkDisplayStringEx.c)
 *     BvgaDisplayString @ 0x140590590 (BvgaDisplayString.c)
 *     BvgaSetTextColor @ 0x140590910 (BvgaSetTextColor.c)
 *     BvgaSolidColorFill @ 0x140590970 (BvgaSolidColorFill.c)
 *     KiBugCheckDebugBreak @ 0x1405B2D70 (KiBugCheckDebugBreak.c)
 *     KiDisplayBlueScreen @ 0x1405B38C0 (KiDisplayBlueScreen.c)
 *     KiHeadlessDisplayString @ 0x1405B3EC4 (KiHeadlessDisplayString.c)
 *     EtwpInitializeActivityIdSeed @ 0x1407A80C4 (EtwpInitializeActivityIdSeed.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     HdlspDispatch @ 0x140BAD320 (HdlspDispatch.c)
 */

__int64 __fastcall HeadlessDispatch(__int64 a1, __int64 a2, __int64 a3, void *a4, size_t *a5)
{
  int v6; // eax

  if ( HeadlessGlobals && HeadlessGlobals[1] )
    return HdlspDispatch(a1);
  if ( (_DWORD)a1 == 1 || (_DWORD)a1 == 21 )
    return 3221225473LL;
  if ( (unsigned int)a1 > 0x10 )
    return 0LL;
  v6 = 79876;
  if ( !_bittest(&v6, a1) )
    return 0LL;
  if ( a4 && a5 )
  {
    memset_0(a4, 0, *a5);
    return 0LL;
  }
  return 3221225485LL;
}
