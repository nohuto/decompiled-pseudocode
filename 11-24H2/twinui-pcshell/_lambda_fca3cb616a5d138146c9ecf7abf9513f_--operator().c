/*
 * XREFs of _lambda_fca3cb616a5d138146c9ecf7abf9513f_::operator() @ 0x180499BE0
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_fca3cb616a5d138146c9ecf7abf9513f___::RunTask @ 0x180499FA0 (CMultitaskingViewTaskCallback__lambda_fca3cb616a5d138146c9ecf7abf9513f___--RunTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800923EC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     ??$com_query_failfast@UIMultitaskingViewForegroundStaging@@AEAPEAUIMultitaskingViewManager@@@wil@@YA?AV?$com_ptr_t@UIMultitaskingViewForegroundStaging@@Uerr_failfast_policy@wil@@@0@AEAPEAUIMultitaskingViewManager@@@Z @ 0x180499B28 (--$com_query_failfast@UIMultitaskingViewForegroundStaging@@AEAPEAUIMultitaskingViewManager@@@wil.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_fca3cb616a5d138146c9ecf7abf9513f_::operator()(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, _QWORD *),
        char a3,
        __int64 a4)
{
  __int64 (__fastcall **v6)(_QWORD, GUID *, _QWORD *); // rax
  _QWORD *v7; // rax
  __int64 (__fastcall *v8)(_QWORD, GUID *, _QWORD *); // rbx
  unsigned int v9; // ebx
  __int64 (__fastcall *v11)(_QWORD, GUID *, _QWORD *); // rbx
  int v12; // eax
  int v13; // eax
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+38h] [rbp-18h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, GUID *, _QWORD *); // [rsp+40h] [rbp-10h] BYREF
  __int64 v17; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v16 = a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  v15 = 0LL;
  v6 = *a2;
  v15 = 0LL;
  if ( ((int (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), __int64, GUID *, __int64 *))v6[5])(
         a2,
         5LL,
         &GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9,
         &v15) >= 0 )
  {
    v7 = wil::com_query_failfast<IMultitaskingViewForegroundStaging,IMultitaskingViewManager * &>(&v17, &v16);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 24LL))(*v7);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 40LL))(v15);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
  v14 = 0LL;
  v8 = (*a2)[5];
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  if ( ((int (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), __int64, GUID *, __int64 *))v8)(
         a2,
         2LL,
         &GUID_389221b7_bf28_4d25_9501_b4491d822be1,
         &v14) < 0 )
  {
    v11 = (*a2)[3];
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
    v12 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), __int64, GUID *, __int64 *))v11)(
            a2,
            2LL,
            &GUID_389221b7_bf28_4d25_9501_b4491d822be1,
            &v14);
    v9 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x64,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\allupviewservice.cpp",
        (const char *)(unsigned int)v12);
      goto LABEL_6;
    }
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v14 + 48LL))(
            v14,
            *(_QWORD *)a1,
            *(_QWORD *)(a1 + 8),
            *(unsigned int *)(a1 + 16));
    if ( v13 < 0 )
    {
      v9 = v13;
      goto LABEL_6;
    }
  }
  else
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 56LL))(v14);
  }
  v9 = 0;
LABEL_6:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  return v9;
}
