/*
 * XREFs of ?GetPresentError@CD3DDevice@@SAJI_N@Z @ 0x1802898EC
 * Callers:
 *     ?Present@CDDisplayRenderTarget@@IEAAJXZ @ 0x1800C6E9C (-Present@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?GetPresentError@CLegacyRenderTarget@@AEBAJXZ @ 0x18024CC94 (-GetPresentError@CLegacyRenderTarget@@AEBAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DDevice::GetPresentError(int a1, char a2)
{
  __int64 result; // rax

  if ( a2 )
    return 2291663061LL;
  switch ( a1 )
  {
    case 4098:
      return 2291663058LL;
    case 4318:
      return 2291663059LL;
    case 32902:
      return 2291663057LL;
  }
  result = 2291663060LL;
  if ( a1 != 1297040209 )
    return 2291663056LL;
  return result;
}
