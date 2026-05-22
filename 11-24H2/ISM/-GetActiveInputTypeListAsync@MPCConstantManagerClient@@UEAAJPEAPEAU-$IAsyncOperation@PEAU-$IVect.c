/*
 * XREFs of ?GetActiveInputTypeListAsync@MPCConstantManagerClient@@UEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@Windows@@@Z @ 0x18016EFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAsyncOperationHelper@V?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@Windows@@PEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@3@VComTaskPoolHandler@23@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAU?$IAsyncOperation@PEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@1@W4TrustLevel@@PEAV?$AsyncCallbackBase@V?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@Windows@@@01@@Z @ 0x18016A0A4 (--$MakeAsyncOperationHelper@V-$CMarshaledInterfaceResult@U-$IVector@PEAUHSTRING__@@@Collections@.c)
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVector_HSTRING_________lambda_de6bcc426287dbdda407399e3f0c7994___ @ 0x18016A160 (Windows--Internal--MakeOpLambda_0_Windows--Internal--CMarshaledInterfaceResult_Wind_ea_18016A160.c)
 */

__int64 __fastcall MPCConstantManagerClient::GetActiveInputTypeListAsync(__int64 a1, __int64 *a2)
{
  char *v4; // rax
  __int64 v5; // r8
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 248LL) )
  {
    v9 = a1;
    v6 = 4LL;
    v7 = 0;
    v4 = Windows::Internal::MakeOpLambda_0_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVector_HSTRING_________lambda_de6bcc426287dbdda407399e3f0c7994___(&v9);
    return Windows::Internal::MakeAsyncOperationHelper<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVector<HSTRING__ *>>,Windows::Foundation::Collections::IVector<HSTRING__ *> *,Windows::Internal::ComTaskPoolHandler>(
             (__int64)&v6,
             a2,
             v5,
             (__int64)v4);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)0x80010103LL);
    return 2147549443LL;
  }
}
