/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs___::_)(Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____lambda_d583631eb51550469083699cb211e6c4___1_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs___::Invoke @ 0x180056860
 * Callers:
 *     <none>
 * Callees:
 *     ?Hide@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800568DC (-Hide@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801A0934 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs___::___Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____lambda_d583631eb51550469083699cb211e6c4___1_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  CToastCenterExperienceManager *v6; // rcx
  bool v7; // al
  int v8; // eax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v12 = a3;
  LOBYTE(v12) = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, &v12);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x283,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4,
      v10);
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v5);
  }
  else
  {
    v6 = *(CToastCenterExperienceManager **)(a1 + 16);
    v7 = (_BYTE)v12 != 0;
    *((_BYTE *)v6 + 466) = (_BYTE)v12 != 0;
    if ( v7 )
    {
      v8 = CToastCenterExperienceManager::Hide(v6);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1D7,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v8,
          v10);
    }
    return 0;
  }
  return v5;
}
