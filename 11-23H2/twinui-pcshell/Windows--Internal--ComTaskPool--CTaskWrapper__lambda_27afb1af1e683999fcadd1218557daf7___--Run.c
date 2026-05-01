/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_27afb1af1e683999fcadd1218557daf7___::Run @ 0x1801DFAD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$try_query@UIControlCenterExperienceManager@Experience@Shell@Internal@Windows@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIControlCenterExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801448F4 (--$try_query@UIControlCenterExperienceManager@Experience@Shell@Internal@Windows@@@-$com_ptr_t@UI.c)
 *     ??$MakeAndInitialize@VCVisibilityChangedEventArgs@@UIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@012@@Z @ 0x180413E44 (--$MakeAndInitialize@VCVisibilityChangedEventArgs@@UIVisibilityChangedEventArgs@Exp_ea_180413E44.c)
 *     ??$InvokeAll@PEAVCControlCenterExperienceManager@@PEAUIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCControlCenterExperienceManager@@PEAUIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18041C14C (--$InvokeAll@PEAVCControlCenterExperienceManager@@PEAUIVisibilityChangedEventArgs@Experience@She.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_27afb1af1e683999fcadd1218557daf7___::Run(
        __int64 a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::try_query<Windows::Internal::Shell::Experience::IControlCenterExperienceManager>(
    (__int64 *)(a1 + 24),
    &v5);
  if ( v5 )
  {
    v4 = 0LL;
    v2 = Microsoft::WRL::Details::MakeAndInitialize<CVisibilityChangedEventArgs,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs,>(&v4);
    if ( v2 >= 0 )
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CControlCenterExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>(
        *(_QWORD *)(a1 + 16) + 848LL,
        *(_QWORD *)(a1 + 16),
        v4);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5E7,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v4);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v5);
}
