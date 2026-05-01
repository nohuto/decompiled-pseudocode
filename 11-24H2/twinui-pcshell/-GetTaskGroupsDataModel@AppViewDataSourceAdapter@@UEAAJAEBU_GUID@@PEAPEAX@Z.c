/*
 * XREFs of ?GetTaskGroupsDataModel@AppViewDataSourceAdapter@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1806BFFB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800C6394 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?copy_to_abi@winrt@@YAXAEBUIUnknown@Foundation@Windows@1@AEAPEAX@Z @ 0x1801FDE70 (-copy_to_abi@winrt@@YAXAEBUIUnknown@Foundation@Windows@1@AEAPEAX@Z.c)
 *     ??$com_query_to@AEAV?$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@@wil@@YAXAEAV?$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@0@AEBU_GUID@@PEAPEAX@Z @ 0x180217AE8 (--$com_query_to@AEAV-$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@@wil@@YAXAEAV-$com_p.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppViewDataSourceAdapter::GetTaskGroupsDataModel(
        AppViewDataSourceAdapter *this,
        const struct _GUID *a2,
        void **a3)
{
  struct IUnknownVtbl **v3; // rsi
  char v4; // al
  void **v5; // r8
  const char *v6; // r9
  __int64 result; // rax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IUnknown v10; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v10.lpVtbl = 0LL;
  v3 = (struct IUnknownVtbl **)((char *)this + 64);
  v4 = winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 8, &v10);
  try
  {
    if ( v4 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC6,
        (int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)0x80004005LL,
        v8);
    v10.lpVtbl = 0LL;
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v10);
    winrt::copy_to_abi(v3, &v10, v5);
    wil::com_query_to<wil::com_ptr_t<IUnknown,wil::err_exception_policy> &>(&v10);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v10);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xCC,
                           (int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
                           v6);
  }
  return result;
}
