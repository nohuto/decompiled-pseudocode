/*
 * XREFs of EditionHandleAltTabCancel @ 0x1C0094720
 * Callers:
 *     <none>
 * Callees:
 *     ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x1C00841F8 (-IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
 *     xxxCancelCoolSwitch @ 0x1C0152EF2 (xxxCancelCoolSwitch.c)
 */

_BOOL8 __fastcall EditionHandleAltTabCancel(
        __int64 a1,
        int a2,
        const struct tagTHREADINFO *a3,
        int a4,
        unsigned __int8 a5,
        int a6,
        char a7)
{
  int v11; // ecx

  if ( !gspwndAltTab )
    return 0LL;
  if ( a4 )
    return 0LL;
  if ( a5 <= 0x12u )
  {
    v11 = 328192;
    if ( _bittest(&v11, a5) )
      return 0LL;
  }
  xxxCancelCoolSwitch();
  if ( (unsigned int)IsGpqForegroundAccessibleExplicit(a6, a3, a1, a2) )
  {
    if ( a5 == 27 )
      return (a7 & 2) == 0;
    return 0LL;
  }
  return 1LL;
}
