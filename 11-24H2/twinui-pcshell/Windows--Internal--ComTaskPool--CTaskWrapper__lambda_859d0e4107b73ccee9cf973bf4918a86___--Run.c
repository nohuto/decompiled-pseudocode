/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_859d0e4107b73ccee9cf973bf4918a86___::Run @ 0x180359B40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_859d0e4107b73ccee9cf973bf4918a86___::Run(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, _QWORD, _QWORD, _DWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 520LL)
                                                                                           + 24LL))(
         *(_QWORD *)(*(_QWORD *)(a1 + 16) + 520LL),
         L"Microsoft.XboxGamingOverlay_8wekyb3d8bbwe!App",
         *(_QWORD *)(a1 + 32),
         *(_QWORD *)(a1 + 40),
         *(_DWORD *)(a1 + 24));
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x873,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v1);
}
