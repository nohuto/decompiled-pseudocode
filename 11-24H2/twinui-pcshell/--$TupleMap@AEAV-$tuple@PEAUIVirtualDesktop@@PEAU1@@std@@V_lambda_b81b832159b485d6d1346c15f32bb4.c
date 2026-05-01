/*
 * XREFs of ??$TupleMap@AEAV?$tuple@PEAUIVirtualDesktop@@PEAU1@@std@@V_lambda_b81b832159b485d6d1346c15f32bb4cd_@@@@YA?A_PAEAV?$tuple@PEAUIVirtualDesktop@@PEAU1@@std@@AEBV_lambda_b81b832159b485d6d1346c15f32bb4cd_@@@Z @ 0x18054D12C
 * Callers:
 *     ??$AddRefCountWrappers@PEAUIVirtualDesktop@@PEAU1@@@YAJV?$tuple@PEAUIVirtualDesktop@@PEAU1@@std@@PEAV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V123@@1@@Z @ 0x18054CCBC (--$AddRefCountWrappers@PEAUIVirtualDesktop@@PEAU1@@@YAJV-$tuple@PEAUIVirtualDesktop@@PEAU1@@std@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$?RPEAUIVirtualDesktop@@@_lambda_b81b832159b485d6d1346c15f32bb4cd_@@QEBA?A_PPEAUIVirtualDesktop@@@Z @ 0x18054CB34 (--$-RPEAUIVirtualDesktop@@@_lambda_b81b832159b485d6d1346c15f32bb4cd_@@QEBA-A_PPEAUIVirtualDeskto.c)
 */

__int64 *__fastcall TupleMap<std::tuple<IVirtualDesktop *,IVirtualDesktop *> &,_lambda_b81b832159b485d6d1346c15f32bb4cd_>(
        __int64 *a1,
        __int64 *a2,
        int **a3)
{
  __int64 *v6; // r14
  __int64 *v7; // rax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v6 = _lambda_b81b832159b485d6d1346c15f32bb4cd_::operator()<IVirtualDesktop *>(a3, &v10, *a2);
  v7 = _lambda_b81b832159b485d6d1346c15f32bb4cd_::operator()<IVirtualDesktop *>(a3, &v9, a2[1]);
  *a1 = 0LL;
  if ( a1 != v6 )
  {
    *a1 = *v6;
    *v6 = 0LL;
  }
  a1[1] = 0LL;
  if ( a1 + 1 != v7 )
  {
    a1[1] = *v7;
    *v7 = 0LL;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  return a1;
}
