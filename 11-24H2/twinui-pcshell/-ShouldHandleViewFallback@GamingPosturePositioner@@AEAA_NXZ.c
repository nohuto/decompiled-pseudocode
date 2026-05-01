/*
 * XREFs of ?ShouldHandleViewFallback@GamingPosturePositioner@@AEAA_NXZ @ 0x180507008
 * Callers:
 *     _lambda_5997640efe376a9387473cba5853814f_::operator() @ 0x1804F9900 (_lambda_5997640efe376a9387473cba5853814f_--operator().c)
 *     ?HandleViewFallback@GamingPosturePositioner@@AEAAX_N@Z @ 0x180500B10 (-HandleViewFallback@GamingPosturePositioner@@AEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall GamingPosturePositioner::ShouldHandleViewFallback(GamingPosturePositioner *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_BYTE *)this + 784) )
    return GetSystemMetrics(0x2000) == 0;
  return v1;
}
