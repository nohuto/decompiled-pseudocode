/*
 * XREFs of ?MakeFeatureUsageListener@Internal@TargetedContent@Services@Windows@@YA?AV?$com_ptr_t@UIFeatureUsageListener@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180081530
 * Callers:
 *     ?SubscribeToFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180082170 (-SubscribeToFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedCon.c)
 *     ?UnsubscribeFromFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180082350 (-UnsubscribeFromFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargete.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A31C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DDFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Windows::Services::TargetedContent::Internal::MakeFeatureUsageListener(_QWORD *a1)
{
  HRESULT ClassObject; // eax
  _QWORD *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  int ppv; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _QWORD *v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = 0LL;
  ClassObject = CoGetClassObject(
                  &CLSID_FeatureUsageListener,
                  4u,
                  0LL,
                  &GUID_00000001_0000_0000_c000_000000000046,
                  (LPVOID *)&v9);
  if ( ClassObject < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x220,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)ClassObject,
      ppv);
  *a1 = 0LL;
  v3 = v9;
  v4 = *v9;
  *a1 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, GUID *, _QWORD *))(v4 + 24))(
         v3,
         0LL,
         &GUID_32f807c2_30d3_437d_b81e_ca08714107ad,
         a1);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x222,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v5,
      ppv);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v9);
  return a1;
}
