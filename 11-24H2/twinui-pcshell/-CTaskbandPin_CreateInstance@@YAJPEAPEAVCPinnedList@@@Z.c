/*
 * XREFs of ?CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z @ 0x1802C41F0
 * Callers:
 *     _lambda_02d18896a6f04e84a63129cc1fd81310_::operator() @ 0x1805E3CCC (_lambda_02d18896a6f04e84a63129cc1fd81310_--operator().c)
 *     ??R_lambda_037aa076caca4eb578368a6543edcedb_@@QEBA@XZ @ 0x1805E3DBC (--R_lambda_037aa076caca4eb578368a6543edcedb_@@QEBA@XZ.c)
 *     _lambda_0b18bae158eb7b112561ba3eda31e137_::operator() @ 0x1805E3E70 (_lambda_0b18bae158eb7b112561ba3eda31e137_--operator().c)
 *     ??R_lambda_3de5d145e6ce0c9b4d563a35329ea675_@@QEBA@XZ @ 0x1805E3F1C (--R_lambda_3de5d145e6ce0c9b4d563a35329ea675_@@QEBA@XZ.c)
 *     ??R_lambda_5724e9f0897f2fd11b6a24af4b09628e_@@QEBA@XZ @ 0x1805E3FBC (--R_lambda_5724e9f0897f2fd11b6a24af4b09628e_@@QEBA@XZ.c)
 *     ??R_lambda_a35eeb229c7164fc066a4b8a11da43cb_@@QEBA@XZ @ 0x1805E4260 (--R_lambda_a35eeb229c7164fc066a4b8a11da43cb_@@QEBA@XZ.c)
 *     ?IsItemPinned@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@0@Z @ 0x1805E6FE0 (-IsItemPinned@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@0@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CTaskbandPin@@QEAA@XZ @ 0x180687D94 (--0CTaskbandPin@@QEAA@XZ.c)
 */

__int64 __fastcall CTaskbandPin_CreateInstance(struct CPinnedList **a1)
{
  CTaskbandPin *v2; // rax

  v2 = (CTaskbandPin *)operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
    v2 = CTaskbandPin::CTaskbandPin(v2);
  *a1 = v2;
  return v2 == 0LL ? 0x8007000E : 0;
}
