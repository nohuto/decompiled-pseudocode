/*
 * XREFs of ?SetDefaultApplication@Actions@CreativeFramework@@YAXPEB_W0W4ApplicationDefaultCategory@ApplicationDefaults@Internal@Windows@@@Z @ 0x18009789C
 * Callers:
 *     ?Invoke@SetDefaultApplicationService@Actions@CreativeFramework@@UEAAXXZ @ 0x180097740 (-Invoke@SetDefaultApplicationService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     memset_0 @ 0x180022931 (memset_0.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A31C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DDFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0$0BAE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BAE@_W@Z @ 0x180088D4C (--$-0$0BAE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BAE@_W@Z.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180097200 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??$GetActivationFactory@UIApplicationDefaultCategoriesStatics@ApplicationDefaults@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIApplicationDefaultCategoriesStatics@ApplicationDefaults@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180097524 (--$GetActivationFactory@UIApplicationDefaultCategoriesStatics@ApplicationDefaults@Internal@Windo.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreativeFramework::Actions::SetDefaultApplication(const WCHAR *a1, const WCHAR *a2, unsigned int a3)
{
  unsigned int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // r8d
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, _QWORD, PVOID); // rdi
  unsigned int v11; // r8d
  HSTRING_HEADER *v12; // rax
  int v13; // eax
  UINT32 applicationUserModelIdLength; // [rsp+20h] [rbp-168h] BYREF
  __int64 v16; // [rsp+28h] [rbp-160h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-158h] BYREF
  WCHAR applicationUserModelId[136]; // [rsp+50h] [rbp-138h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  memset_0(applicationUserModelId, 0, 0x104uLL);
  applicationUserModelIdLength = 130;
  v6 = FormatApplicationUserModelId(a1, a2, &applicationUserModelIdLength, applicationUserModelId);
  if ( v6 )
    wil::details::in1diag3::_Throw_Win32(
      retaddr,
      45LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\defaultapplicationhelpers.cpp",
      (const char *)v6,
      applicationUserModelIdLength);
  wil::GetActivationFactory<Windows::Internal::ApplicationDefaults::IApplicationDefaultCategoriesStatics>(
    (const WCHAR *)&v16,
    v7,
    v8);
  v9 = v16;
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, PVOID))(*(_QWORD *)v16 + 48LL);
  v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, applicationUserModelId, v11);
  v13 = v10(v9, a3, v12[1].Reserved.Reserved1);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x30,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\defaultapplicationhelpers.cpp",
      (const char *)(unsigned int)v13,
      applicationUserModelIdLength);
  return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v16);
}
