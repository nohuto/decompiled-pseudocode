/*
 * XREFs of ??$?RPEAUIVirtualDesktop@@@_lambda_b81b832159b485d6d1346c15f32bb4cd_@@QEBA?A_PPEAUIVirtualDesktop@@@Z @ 0x18054CB34
 * Callers:
 *     ??$TupleMap@AEAV?$tuple@PEAUIVirtualDesktop@@PEAU1@@std@@V_lambda_b81b832159b485d6d1346c15f32bb4cd_@@@@YA?A_PAEAV?$tuple@PEAUIVirtualDesktop@@PEAU1@@std@@AEBV_lambda_b81b832159b485d6d1346c15f32bb4cd_@@@Z @ 0x18054D12C (--$TupleMap@AEAV-$tuple@PEAUIVirtualDesktop@@PEAU1@@std@@V_lambda_b81b832159b485d6d1346c15f32bb4.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 */

__int64 *__fastcall _lambda_b81b832159b485d6d1346c15f32bb4cd_::operator()<IVirtualDesktop *>(
        int **a1,
        __int64 *a2,
        __int64 a3)
{
  int *v3; // rax

  v3 = *a1;
  *a2 = 0LL;
  if ( *v3 >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(a2, a3);
    **a1 = 0;
  }
  return a2;
}
