/*
 * XREFs of _lambda_b2585c4f95c55ef2527ebe5cea5e5d3a_::operator() @ 0x18034A99C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b2585c4f95c55ef2527ebe5cea5e5d3a___::Run @ 0x180359C00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b2585c4f95c55ef2527ebe5cea5e5d3a___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_b2585c4f95c55ef2527ebe5cea5e5d3a_::operator()(_QWORD *a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, _QWORD, _QWORD, _DWORD))(**(_QWORD **)(*a1 + 520LL)
                                                                                           + 24LL))(
         *(_QWORD *)(*a1 + 520LL),
         L"Microsoft.XboxGamingOverlay_8wekyb3d8bbwe!App",
         a1[1],
         a1[2],
         0);
  if ( v2 < 0 )
  {
    v3 = 2093LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, _QWORD, _QWORD, int))(**(_QWORD **)(*a1 + 520LL)
                                                                                        + 24LL))(
         *(_QWORD *)(*a1 + 520LL),
         L"Microsoft.XboxGamingOverlay_8wekyb3d8bbwe!App",
         a1[1],
         a1[2],
         2);
  if ( v2 < 0 )
  {
    v3 = 2098LL;
    goto LABEL_3;
  }
  return 0LL;
}
