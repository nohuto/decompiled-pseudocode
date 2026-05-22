/*
 * XREFs of ?InitConversation@NonBamoInputDeliveryServer@@AEAAXPEBG@Z @ 0x18005B838
 * Callers:
 *     ?RuntimeClassInitialize@NonBamoInputDeliveryServer@@UEAAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@@Z @ 0x18005B700 (-RuntimeClassInitialize@NonBamoInputDeliveryServer@@UEAAJPEAUIInputDeliveryServerHost@@PEBGW4Tes.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$MakeAndInitialize@VInputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@V12@PEAV2@@Details@WRL@Microsoft@@YAJPEAPEAVInputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@$$QEAPEAV4@@Z @ 0x18005B94C (--$MakeAndInitialize@VInputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@V12@PEAV2@.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall NonBamoInputDeliveryServer::InitConversation(
        NonBamoInputDeliveryServer *this,
        const unsigned __int16 *a2)
{
  char *v2; // r14
  int v5; // eax
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(__int64, const unsigned __int16 *, __int64, __int64 *); // rdi
  __int64 v8; // r8
  int v9; // eax
  int v10; // [rsp+20h] [rbp-68h]
  __int64 v11; // [rsp+60h] [rbp-28h] BYREF
  int v12; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  NonBamoInputDeliveryServer *v14; // [rsp+90h] [rbp+8h] BYREF

  v2 = (char *)this + 24;
  v14 = this;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 3);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<NonBamoInputDeliveryServer::InputDeliveryServerConversationHost,NonBamoInputDeliveryServer::InputDeliveryServerConversationHost,NonBamoInputDeliveryServer *>(
         v2,
         &v14);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      (const char *)(unsigned int)v5,
      v10);
  v6 = *((_QWORD *)this + 6);
  v7 = *(__int64 (__fastcall **)(__int64, const unsigned __int16 *, __int64, __int64 *))(*(_QWORD *)v6 + 304LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 8);
  v11 = 0LL;
  v8 = *((_QWORD *)this + 7);
  v12 = 1;
  v9 = v7(v6, a2, v8, &v11);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x7C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      (const char *)(unsigned int)v9,
      3);
}
