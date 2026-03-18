/*
 * XREFs of _lambda_2f1d6853485b5d874e628a4c686a9f7b_::_lambda_invoker_cdecl_ @ 0x14006E820
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14001EE2C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?CheckPendingReleaseVidPnOwner@ADAPTER_DISPLAY@@QEAAXXZ @ 0x140063178 (-CheckPendingReleaseVidPnOwner@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?ReleasePendingVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1401885C0 (-ReleasePendingVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z @ 0x140250DCC (-DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall lambda_2f1d6853485b5d874e628a4c686a9f7b_::_lambda_invoker_cdecl_(ADAPTER_DISPLAY **a1)
{
  unsigned int v2; // r8d
  _BYTE v4[144]; // [rsp+20h] [rbp-A8h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v4, (struct DXGADAPTER *const)a1, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v4, v2 + 2, v2) >= 0 )
  {
    ADAPTER_DISPLAY::CheckPendingReleaseVidPnOwner(a1[390]);
    DmmClearDisplayManagerReferencesForAdapter((const struct DXGADAPTER *)a1);
    ADAPTER_DISPLAY::ReleasePendingVidPnSourceOwner(a1[390]);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v4);
  return 0LL;
}
