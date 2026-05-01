/*
 * XREFs of _lambda_f58beaf1c957ff853694186b2dae5080_::_lambda_f58beaf1c957ff853694186b2dae5080_ @ 0x18030F8EC
 * Callers:
 *     ?v_RefreshEnterpriseIdIfNeeded@CWin32ApplicationView@@EEAAJXZ @ 0x1801D0070 (-v_RefreshEnterpriseIdIfNeeded@CWin32ApplicationView@@EEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18022B7C4 (-InternalAddRef@-$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall lambda_f58beaf1c957ff853694186b2dae5080_::_lambda_f58beaf1c957ff853694186b2dae5080_(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // r8

  *a1 = *a2;
  Microsoft::WRL::ComPtr<CWin32ApplicationView>::InternalAddRef(a1);
  return v2;
}
