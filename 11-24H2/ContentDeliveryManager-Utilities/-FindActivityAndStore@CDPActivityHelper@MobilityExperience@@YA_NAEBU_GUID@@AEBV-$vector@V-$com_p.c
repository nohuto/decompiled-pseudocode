/*
 * XREFs of ?FindActivityAndStore@CDPActivityHelper@MobilityExperience@@YA_NAEBU_GUID@@AEBV?$vector@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAPEAVICDPActivity@@PEAPEAVICDPActivityStore@@@Z @ 0x18006808C
 * Callers:
 *     ?FindActivityAndStore@ActivityToastNotificationCallback@ToastNotification@@AEAA_NAEBU_GUID@@PEAPEAVICDPActivity@@PEAPEAVICDPActivityStore@@@Z @ 0x180067FE8 (-FindActivityAndStore@ActivityToastNotificationCallback@ToastNotification@@AEAA_NAEBU_GUID@@PEAP.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A31C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@U?$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAU?$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@@Z @ 0x180066F10 (--0-$com_ptr_t@U-$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall MobilityExperience::CDPActivityHelper::FindActivityAndStore(
        __int64 a1,
        __int64 **a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 *v7; // rbx
  __int64 *v8; // r15
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v13; // [rsp+58h] [rbp+38h] BYREF
  _QWORD *v14; // [rsp+60h] [rbp+40h] BYREF

  *a3 = 0LL;
  *a4 = 0LL;
  v7 = *a2;
  v8 = a2[1];
  while ( v7 != v8 )
  {
    wil::com_ptr_t<Windows::Foundation::Collections::IMapView<enum ContentManagement::WindowPosition,unsigned int>,wil::err_exception_policy>::com_ptr_t<Windows::Foundation::Collections::IMapView<enum ContentManagement::WindowPosition,unsigned int>,wil::err_exception_policy>(
      &v14,
      *v7);
    v13 = 0LL;
    v9 = v14;
    v10 = *v14;
    v13 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD *, __int64, __int64 *))(v10 + 48))(v14, a1, &v13) >= 0 )
    {
      v11 = v13;
      v13 = 0LL;
      *a3 = v11;
      v14 = 0LL;
      *a4 = v9;
      wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v13);
      wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v14);
      return 1;
    }
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v13);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v14);
    ++v7;
  }
  return 0;
}
