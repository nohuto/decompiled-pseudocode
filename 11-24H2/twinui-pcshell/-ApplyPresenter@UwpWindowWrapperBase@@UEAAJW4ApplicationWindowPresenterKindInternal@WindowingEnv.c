/*
 * XREFs of ?ApplyPresenter@UwpWindowWrapperBase@@UEAAJW4ApplicationWindowPresenterKindInternal@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Z @ 0x18044A830
 * Callers:
 *     <none>
 * Callees:
 *     ?IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x18001AAA8 (-IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??0?$initializer_list@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@std@@QEAA@PEBV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@1@0@Z @ 0x18022A0E8 (--0-$initializer_list@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@@.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_2295e0733fe842dc7216b708d96c5c17___ @ 0x180447334 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_2295e0733fe842dc7216b708d96c5c17.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowWrapperBase::ApplyPresenter(
        Windows::Internal::ApplicationModel::WindowManagement *a1,
        int a2)
{
  const char *v3; // r9
  __int64 result; // rax
  _QWORD *v5; // rax
  int v6; // eax
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v9; // [rsp+48h] [rbp+10h] BYREF
  RTL_SRWLOCK *v10; // [rsp+50h] [rbp+18h] BYREF

  v9 = a2;
  try
  {
    if ( !Windows::Internal::ApplicationModel::WindowManagement::IsWindowManagementInProcEnabled(a1)
      || (*(unsigned int (__fastcall **)(Windows::Internal::ApplicationModel::WindowManagement *))(*(_QWORD *)a1 + 224LL))(a1) == 1 )
    {
      (*(void (__fastcall **)(_QWORD *, RTL_SRWLOCK **))(**((_QWORD **)a1 + 33) + 208LL))(*((_QWORD **)a1 + 33), &v10);
      v5 = std::initializer_list<std::vector<Windows::UI::Color>>::initializer_list<std::vector<Windows::UI::Color>>(
             v7,
             (__int64)a1 - 16,
             (__int64)&v9);
      v6 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_2295e0733fe842dc7216b708d96c5c17___((__int64)v5);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x58B,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)(unsigned int)v6,
          v7[0]);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v10);
      result = 0LL;
    }
    else
    {
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x58F,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v3);
  }
  return result;
}
