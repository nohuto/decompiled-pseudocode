/*
 * XREFs of ?GetInstance@CDesktopInputSink@@CAAEAV1@XZ @ 0x1C00B72C0
 * Callers:
 *     InitializeInputComponents @ 0x1C00821D8 (InitializeInputComponents.c)
 *     UnInitializeInputComponents @ 0x1C00B6FA4 (UnInitializeInputComponents.c)
 *     ?SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z @ 0x1C00B7224 (-SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z.c)
 *     ?GetTransform@CDesktopInputSink@@SA_NPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01E4C70 (-GetTransform@CDesktopInputSink@@SA_NPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?IsEqualByLuid@CDesktopInputSink@@SA_NPEBU_LUID@@@Z @ 0x1C01E4ED4 (-IsEqualByLuid@CDesktopInputSink@@SA_NPEBU_LUID@@@Z.c)
 * Callees:
 *     <none>
 */

struct CDesktopInputSink *CDesktopInputSink::GetInstance(void)
{
  if ( (dword_1C0291C60 & 1) == 0 )
  {
    qword_1C0291C68 = 0LL;
    qword_1C0291C70 = 0LL;
    dword_1C0291C60 |= 1u;
    xmmword_1C0291C78 = 0LL;
  }
  return (struct CDesktopInputSink *)&qword_1C0291C68;
}
