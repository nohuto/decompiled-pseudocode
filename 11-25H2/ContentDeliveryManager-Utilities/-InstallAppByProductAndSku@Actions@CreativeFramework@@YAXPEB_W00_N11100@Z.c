/*
 * XREFs of ?InstallAppByProductAndSku@Actions@CreativeFramework@@YAXPEB_W00_N11100@Z @ 0x1800917A0
 * Callers:
 *     ?Invoke@AppInstallService@Actions@CreativeFramework@@UEAAXXZ @ 0x180091BB0 (-Invoke@AppInstallService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024204 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A34C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18008CAB0 (--0-$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800905AC (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_p_ea_1800905AC.c)
 *     ?GetEntitlementForRecord@Actions@CreativeFramework@@YAXV?$com_ptr_t@UIAppManager@ContentManagement@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W111_N@Z @ 0x180091460 (-GetEntitlementForRecord@Actions@CreativeFramework@@YAXV-$com_ptr_t@UIAppManager@ContentManageme.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CreativeFramework::Actions::InstallAppByProductAndSku(
        const WCHAR *this,
        const wchar_t *a2,
        const wchar_t *a3,
        const wchar_t *a4,
        bool a5,
        char a6,
        bool a7,
        const WCHAR *a8,
        const wchar_t *a9)
{
  char v9; // r15
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // r8d
  __int64 *v13; // rax
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, PVOID, PVOID, __int64); // r14
  unsigned int v16; // r8d
  PVOID Reserved1; // rdi
  unsigned int v18; // r8d
  HSTRING_HEADER *v19; // rax
  __int64 v20; // r9
  int v21; // eax
  int v22; // [rsp+20h] [rbp-C1h]
  __int64 v23; // [rsp+40h] [rbp-A1h] BYREF
  const WCHAR *v24; // [rsp+48h] [rbp-99h] BYREF
  const WCHAR *v25; // [rsp+50h] [rbp-91h] BYREF
  __int64 *v26; // [rsp+58h] [rbp-89h] BYREF
  __int64 v27; // [rsp+60h] [rbp-81h] BYREF
  const WCHAR *v28; // [rsp+68h] [rbp-79h] BYREF
  const WCHAR *v29; // [rsp+70h] [rbp-71h] BYREF
  HSTRING_HEADER v30; // [rsp+78h] [rbp-69h] BYREF
  HSTRING_HEADER v31; // [rsp+98h] [rbp-49h] BYREF
  HSTRING_HEADER v32; // [rsp+B8h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+37h]

  v9 = (char)a4;
  v25 = this;
  v24 = a2;
  v29 = a3;
  v28 = a8;
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>(&v26);
  v23 = 0LL;
  v10 = *v26;
  v23 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v10 + 48))(v26, &v23);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC3,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v11,
      v22);
  if ( !a5 )
  {
    v13 = wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>(
            &v27,
            &v23);
    CreativeFramework::Actions::GetEntitlementForRecord(v13, &v25, &v24, &v28, &a9, a6);
  }
  v14 = v23;
  v15 = *(__int64 (__fastcall **)(__int64, PVOID, PVOID, __int64))(*(_QWORD *)v23 + 128LL);
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v30, &v29, v12);
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v31, &v24, v16)[1].Reserved.Reserved1;
  v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v32, &v25, v18);
  LOBYTE(v22) = a7;
  LOBYTE(v20) = v9;
  v21 = v15(v14, v19[1].Reserved.Reserved1, Reserved1, v20);
  if ( v21 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xCF,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v21,
      v22);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v23);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v26);
}
