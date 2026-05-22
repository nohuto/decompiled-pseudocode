/*
 * XREFs of ?RuntimeClassInitialize@NonBamoInputDeliveryServer@@UEAAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@@Z @ 0x18005B510
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InitConversation@NonBamoInputDeliveryServer@@AEAAXPEBG@Z @ 0x18005B648 (-InitConversation@NonBamoInputDeliveryServer@@AEAAXPEBG@Z.c)
 *     ?InitPort@NonBamoInputDeliveryServer@@AEAAXXZ @ 0x18005B81C (-InitPort@NonBamoInputDeliveryServer@@AEAAXXZ.c)
 *     ?Initialize@?$KernelInputConnection@UtagQMSGINPUTREPORT@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBUtagQMSGINPUTREPORT@@@Z@std@@@Z @ 0x18007B9B0 (-Initialize@-$KernelInputConnection@UtagQMSGINPUTREPORT@@@@QEAAXAEBV-$ComPtr@UIMessageSession@@@.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreateInputServiceProxy @ 0x18008F078 (CreateInputServiceProxy.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall NonBamoInputDeliveryServer::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        const unsigned __int16 *a3,
        int a4)
{
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // r8
  int InputServiceProxy; // eax
  int v13[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+28h] [rbp-40h]
  int *v15; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( *(_QWORD *)(a1 + 32) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v8 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = a2;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  *(_DWORD *)(a1 + 40) = a4;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 48));
  v9 = CoreUICreate(a1 + 48);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x35,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      (const char *)(unsigned int)v9,
      v13[0]);
  NonBamoInputDeliveryServer::InitPort((NonBamoInputDeliveryServer *)a1);
  NonBamoInputDeliveryServer::InitConversation((NonBamoInputDeliveryServer *)a1, a3);
  if ( *(_DWORD *)(a1 + 40) != 1 )
  {
    *(_QWORD *)v13 = &off_1801EB2D8;
    v14 = a1;
    v15 = v13;
    KernelInputConnection<tagQMSGINPUTREPORT>::Initialize(a1 + 72, a1 + 48, v10, v13);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 280));
  InputServiceProxy = CreateInputServiceProxy((a1 + 8) & -(__int64)(a1 != 0), a1 + 280);
  if ( InputServiceProxy < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      (const char *)(unsigned int)InputServiceProxy,
      v13[0]);
  return 0LL;
}
