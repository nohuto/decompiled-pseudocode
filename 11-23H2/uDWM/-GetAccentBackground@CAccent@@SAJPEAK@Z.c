/*
 * XREFs of ?GetAccentBackground@CAccent@@SAJPEAK@Z @ 0x1800523A0
 * Callers:
 *     ?GetCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x18001AB94 (-GetCaptionColor@CTopLevelWindow@@AEBAKXZ.c)
 *     ?CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z @ 0x180050E14 (-CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAccent::GetAccentBackground(unsigned int *a1)
{
  __int64 result; // rax

  result = 2147500037LL;
  if ( CAccent::s_clrCurrentAccentBackground != 0xFFFFFF )
  {
    result = 0LL;
    *a1 = CAccent::s_clrCurrentAccentBackground;
  }
  return result;
}
