/*
 * XREFs of _lambda_464faf368add579c73b162db1e562f2d_::operator() @ 0x1801447F0
 * Callers:
 *     ?Close@CToastCenterExperienceManager@@UEAAJXZ @ 0x180143A70 (-Close@CToastCenterExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@?$ComPtr@UIToastCenterExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180144188 (--$As@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@-$ComPtr@UIToastCenterExperien.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_464faf368add579c73b162db1e562f2d_::operator()(__int64 *a1)
{
  __int64 v2; // rax
  __int64 (__fastcall ****v3)(_QWORD, GUID *, __int64 *); // rcx
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*a1 + 728);
  if ( !*v3 )
    return 0LL;
  if ( !*(_QWORD *)(v2 + 752) )
  {
LABEL_5:
    v6 = *a1;
    if ( *(_QWORD *)(*a1 + 760) )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 728) + 80LL))(*(_QWORD *)(v6 + 728));
      v6 = *a1;
      *(_QWORD *)(*a1 + 760) = 0LL;
    }
    if ( *(_QWORD *)(v6 + 768) )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 728) + 96LL))(*(_QWORD *)(v6 + 728));
      *(_QWORD *)(*a1 + 768) = 0LL;
    }
    return 0LL;
  }
  v9 = 0LL;
  v4 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IToastCenterExperienceManager>::As<Windows::Internal::Shell::Experience::IBaseExperienceManager>(
         v3,
         &v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 72LL))(v9, *(_QWORD *)(*a1 + 752));
    *(_QWORD *)(*a1 + 752) = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v9);
    goto LABEL_5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1BA,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v9);
  return v5;
}
