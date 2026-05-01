/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_019894810541f859913cc582d8ccf67a___::Run @ 0x180359A90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_019894810541f859913cc582d8ccf67a___::Run(
        _QWORD *a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, _QWORD, _QWORD, int))(**(_QWORD **)(a1[2] + 520LL)
                                                                                        + 24LL))(
         *(_QWORD *)(a1[2] + 520LL),
         L"Microsoft.XboxGamingOverlay_8wekyb3d8bbwe!App",
         a1[3],
         a1[4],
         1);
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8E6,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v1);
}
