/*
 * XREFs of ?AreWindowsInSameCompositeApp@CUIHierarchy@@AEAA_N_K0@Z @ 0x1800AA48C
 * Callers:
 *     _lambda_e08e03aa5b167d5be50e1fd6214815c7_::operator() @ 0x1800AA1C4 (_lambda_e08e03aa5b167d5be50e1fd6214815c7_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?FindTopLevelWindow@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z @ 0x1800AA524 (-FindTopLevelWindow@CUIHierarchy@@AEAA-AV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z.c)
 */

char __fastcall CUIHierarchy::AreWindowsInSameCompositeApp(CUIHierarchy *this, __int64 a2, __int64 a3)
{
  bool v6; // bl
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  if ( a2 == a3 )
    return 1;
  CUIHierarchy::FindTopLevelWindow(this, &v8, a2);
  CUIHierarchy::FindTopLevelWindow(this, &v7, a3);
  if ( v8 && v7 )
  {
    v6 = *(_QWORD *)(v8 + 16) == *(_QWORD *)(v7 + 16);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
    return v6;
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
    return 0;
  }
}
