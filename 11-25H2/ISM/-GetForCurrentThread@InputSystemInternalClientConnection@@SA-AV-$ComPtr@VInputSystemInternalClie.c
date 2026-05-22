/*
 * XREFs of ?GetForCurrentThread@InputSystemInternalClientConnection@@SA?AV?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@XZ @ 0x18008D580
 * Callers:
 *     ??0DeviceInputHost@@AEAA@XZ @ 0x18008D3FC (--0DeviceInputHost@@AEAA@XZ.c)
 *     ??0InputProcess@@AEAA@XZ @ 0x1800C9A10 (--0InputProcess@@AEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x18000A430 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     ?AddRef@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x18000B4B8 (-AddRef@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C7A4 (-InternalRelease@-$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Create@InputSystemInternalClientConnection@@SA?AV?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x18007F7B4 (-Create@InputSystemInternalClientConnection@@SA-AV-$ComPtr@VInputSystemInternalClientConnection@.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$function@$$A6AXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@Z@std@@QEAA@AEBV01@@Z @ 0x1800952EC (--0-$function@$$A6AXPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$equal_to@_ea_1800952EC.c)
 *     ?Register@CallOnThreadExit@@YAXV?$function@$$A6AXXZ@std@@PEA_K@Z @ 0x18012EC04 (-Register@CallOnThreadExit@@YAXV-$function@$$A6AXXZ@std@@PEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
Microsoft::Bamo::BaseBamoConnection **__fastcall InputSystemInternalClientConnection::GetForCurrentThread(
        Microsoft::Bamo::BaseBamoConnection **a1)
{
  __int64 v2; // rdi
  int v3; // eax
  Microsoft::Bamo::BaseBamoConnection **v4; // rax
  Microsoft::Bamo::BaseBamoConnection *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  Microsoft::Bamo::BaseBamoConnection *v9; // rcx
  int v11; // [rsp+20h] [rbp-49h]
  _QWORD v12[8]; // [rsp+28h] [rbp-41h] BYREF
  _BYTE v13[88]; // [rsp+68h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  __int64 v15; // [rsp+D8h] [rbp+6Fh] BYREF
  Microsoft::Bamo::BaseBamoConnection *v16; // [rsp+E0h] [rbp+77h] BYREF
  char v17; // [rsp+E8h] [rbp+7Fh] BYREF

  v2 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( !*(_QWORD *)(v2 + 24) )
  {
    v15 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
    v3 = CoreUICreate(&v15);
    if ( v3 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x27,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\server\\system\\inputsysteminternalclientconnection.cpp",
        (const char *)(unsigned int)v3,
        v11);
    v4 = InputSystemInternalClientConnection::Create(&v16, v15);
    v5 = *v4;
    *v4 = 0LL;
    *(_QWORD *)(v2 + 24) = v5;
    Microsoft::WRL::ComPtr<InputSystemInternalServerConnection>::InternalRelease(&v16);
    v6 = *(_QWORD *)(v2 + 24);
    v12[0] = off_1801E0B40;
    v12[1] = v6;
    v12[7] = v12;
    v16 = (Microsoft::Bamo::BaseBamoConnection *)v12;
    v7 = std::function<void (InputInfo *,std::unordered_set<unsigned long> &)>::function<void (InputInfo *,std::unordered_set<unsigned long> &)>(
           v13,
           v12);
    CallOnThreadExit::Register(v7, &v17);
    std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)v12, v8);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  }
  v9 = *(Microsoft::Bamo::BaseBamoConnection **)(v2 + 24);
  *a1 = v9;
  if ( v9 )
    Microsoft::Bamo::BaseBamoConnection::AddRef(v9);
  return a1;
}
