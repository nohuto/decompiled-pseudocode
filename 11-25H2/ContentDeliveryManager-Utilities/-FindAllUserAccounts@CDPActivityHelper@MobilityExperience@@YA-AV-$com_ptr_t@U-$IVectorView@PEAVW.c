/*
 * XREFs of ?FindAllUserAccounts@CDPActivityHelper@MobilityExperience@@YA?AV?$com_ptr_t@U?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180067CBC
 * Callers:
 *     ?FindActivityAndStore@ActivityToastNotificationCallback@ToastNotification@@AEAA_NAEBU_GUID@@PEAPEAVICDPActivity@@PEAPEAVICDPActivityStore@@@Z @ 0x180067B48 (-FindActivityAndStore@ActivityToastNotificationCallback@ToastNotification@@AEAA_NAEBU_GUID@@PEAP.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A34C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180064D5C (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_ptr_t@UIConten.c)
 *     ??$call_and_wait_for_completion@UIIdentityManager@ContentManagement@@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@$$Z$$V@wil@@YA?A_PPEAUIIdentityManager@ContentManagement@@P812@EAAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@@Z@Z @ 0x180066450 (--$call_and_wait_for_completion@UIIdentityManager@ContentManagement@@PEAPEAU-$IAsyncOperation@PE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall MobilityExperience::CDPActivityHelper::FindAllUserAccounts(_QWORD *a1)
{
  __int64 v2; // rax
  int v3; // eax
  __int64 v4; // rax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 *v10; // [rsp+58h] [rbp+20h] BYREF

  wil::ActivateInstance<ContentManagement::IContentManagementBroker>((__int64)&v10);
  v8 = 0LL;
  v2 = *v10;
  v8 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v2 + 96))(v10, &v8);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x174,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CDPActivityHelper.h",
      (const char *)(unsigned int)v3,
      v6);
  ___call_and_wait_for_completion_UIIdentityManager_ContentManagement__PEAPEAU__IAsyncOperation_PEAU__IVectorView_PEAVWebAccount_Credentials_Security_Windows___Collections_Foundation_Windows___Foundation_Windows____Z__V_wil__YA_A_PPEAUIIdentityManager_ContentManagement__P812_EAAJPEAPEAU__IAsyncOperation_PEAU__IVectorView_PEAVWebAccount_Credentials_Security_Windows___Collections_Foundation_Windows___Foundation_Windows___Z_Z(
    (__int64)&v9,
    v8);
  v4 = v9;
  v9 = 0LL;
  *a1 = v4;
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v8);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v10);
  return a1;
}
