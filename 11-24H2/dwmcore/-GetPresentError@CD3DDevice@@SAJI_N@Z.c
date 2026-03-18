/*
 * XREFs of ?GetPresentError@CD3DDevice@@SAJI_N@Z @ 0x18027E8AC
 * Callers:
 *     ?Present@CDDisplayRenderTarget@@IEAAJXZ @ 0x18009912C (-Present@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?GetPresentError@CLegacyRenderTarget@@AEBAJXZ @ 0x180243D5C (-GetPresentError@CLegacyRenderTarget@@AEBAJXZ.c)
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
