/*
 * XREFs of ?GetDesktop@DragManagerClientProxy@@AEAAJXZ @ 0x18002ECAC
 * Callers:
 *     ?OnConnected@DragManagerClientProxy@@MEAAJXZ @ 0x18002E2C0 (-OnConnected@DragManagerClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetSession@BaseBamoConnection@Bamo@Microsoft@@QEBAPEAUIMessageSession@@XZ @ 0x18002EF80 (-GetSession@BaseBamoConnection@Bamo@Microsoft@@QEBAPEAUIMessageSession@@XZ.c)
 *     ?GetConnection@BamoPeer@ISMBamos_AutoBamos@@QEBAPEAVBamoConnection@2@XZ @ 0x18002EFA0 (-GetConnection@BamoPeer@ISMBamos_AutoBamos@@QEBAPEAVBamoConnection@2@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHDESK__@@P6AHPEAU1@@Z$1?CloseDesktop@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800813F0 (--1-$unique_storage@U-$resource_policy@PEAUHDESK__@@P6AHPEAU1@@Z$1-CloseDesktop@@YAH0@ZU-$integr.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18008CF24 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DragManagerClientProxy::GetDesktop(DragManagerClientProxy *this)
{
  Microsoft::Bamo::BaseBamoConnection *Connection; // rax
  struct IMessageSession *Session; // rdi
  void (__fastcall *v4)(struct IMessageSession *, __int64 *); // rbx
  int v5; // eax
  __int64 v6; // rcx
  HDESK v7; // rax
  HDESK v8; // rbx
  const char *v9; // r9
  __int64 v10; // rcx
  unsigned int LastError; // ebx
  int v13; // [rsp+20h] [rbp-50h]
  __int64 v14; // [rsp+30h] [rbp-40h] BYREF
  HDESK v15; // [rsp+38h] [rbp-38h] BYREF
  __int128 v16; // [rsp+40h] [rbp-30h] BYREF
  __int64 v17; // [rsp+50h] [rbp-20h]
  int v18; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v14 = 0LL;
  Connection = ISMBamos_AutoBamos::BamoPeer::GetConnection(*(ISMBamos_AutoBamos::BamoPeer **)(*((_QWORD *)this + 4)
                                                                                            + 16LL));
  Session = Microsoft::Bamo::BaseBamoConnection::GetSession(Connection);
  v4 = *(void (__fastcall **)(struct IMessageSession *, __int64 *))(*(_QWORD *)Session + 32LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  v4(Session, &v14);
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v14 + 24LL))(v14, &v16);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x83,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\d"
                    "ragmanagerclientproxy.cpp",
      (const char *)(unsigned int)v5,
      v13);
  v6 = HIDWORD(v17);
  *((_DWORD *)this + 40) = HIDWORD(v17);
  v7 = (HDESK)OpenThreadDesktop(v6, 0LL, 0LL, 1LL);
  v8 = v7;
  v15 = v7;
  if ( !v7 )
  {
    LastError = -2147024891;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\d"
                    "ragmanagerclientproxy.cpp",
      (const char *)0x80070005LL,
      v13);
LABEL_10:
    wil::details::unique_storage<wil::details::resource_policy<HDESK__ *,int (*)(HDESK__ *),&int CloseDesktop(HDESK__ *),wistd::integral_constant<unsigned __int64,0>,HDESK__ *,HDESK__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HDESK__ *,int (*)(HDESK__ *),&int CloseDesktop(HDESK__ *),wistd::integral_constant<unsigned __int64,0>,HDESK__ *,HDESK__ *,0,std::nullptr_t>>(&v15);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
    return LastError;
  }
  if ( !GetUserObjectInformationW(v7, 8, (char *)this + 152, 8u, 0LL) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x96,
                  (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgesture"
                                "s\\system\\dragmanagerclientproxy.cpp",
                  v9);
    goto LABEL_10;
  }
  CloseDesktop(v8);
  v10 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return 0LL;
}
