/*
 * XREFs of _lambda_6525f79fad09fbd6f3497c5602dc8822_::operator() @ 0x1803836DC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6525f79fad09fbd6f3497c5602dc8822___::Run @ 0x180385400 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6525f79fad09fbd6f3497c5602dc8822___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x1801B056C (-PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_6525f79fad09fbd6f3497c5602dc8822_::operator()(struct IUnknown **a1)
{
  int v2; // eax
  wil::details::in1diag3 *v3; // rcx
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v9; // [rsp+48h] [rbp+10h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp+18h] BYREF

  ppv = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  v2 = CoCreateInstance(
         &GUID_31143611_ac65_4568_ae76_8a9dad50ea88,
         0LL,
         0x17u,
         &GUID_2537d644_8c2f_4449_b8b6_10928822630c,
         &ppv);
  v3 = retaddr;
  if ( v2 < 0 )
    goto LABEL_6;
  v9 = 1;
  v4 = (*(__int64 (__fastcall **)(LPVOID, const wchar_t *, int *))(*(_QWORD *)ppv + 120LL))(ppv, L"ActionCenter", &v9);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x414,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  if ( !v9 )
  {
    v2 = CToastCenterExperienceManager::PostTargetedMessage(*a1, 5u, v5, v6);
    v3 = retaddr;
    if ( v2 < 0 )
LABEL_6:
      wil::details::in1diag3::_Log_Hr(
        v3,
        (void *)0x414,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
  }
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
}
