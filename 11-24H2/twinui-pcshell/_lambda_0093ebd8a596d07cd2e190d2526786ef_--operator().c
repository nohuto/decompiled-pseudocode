/*
 * XREFs of _lambda_0093ebd8a596d07cd2e190d2526786ef_::operator() @ 0x180348C9C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0093ebd8a596d07cd2e190d2526786ef___::Run @ 0x180359A80 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0093ebd8a596d07cd2e190d2526786ef___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_0093ebd8a596d07cd2e190d2526786ef_::operator()(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, _QWORD, _QWORD, _DWORD))(**(_QWORD **)(*(_QWORD *)a1 + 520LL)
                                                                                           + 24LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 520LL),
         L"Microsoft.XboxGamingOverlay_8wekyb3d8bbwe!App",
         *(_QWORD *)(*(_QWORD *)a1 + 512LL),
         *(_QWORD *)(*(_QWORD *)a1 + 504LL),
         0);
  if ( v2 < 0 )
  {
    v3 = 2111LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, _QWORD, _QWORD, int))(**(_QWORD **)(*(_QWORD *)a1 + 520LL)
                                                                                        + 24LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 520LL),
         L"Microsoft.XboxGamingOverlay_8wekyb3d8bbwe!App",
         *(_QWORD *)(*(_QWORD *)a1 + 512LL),
         *(_QWORD *)(*(_QWORD *)a1 + 504LL),
         2);
  if ( v2 < 0 )
  {
    v3 = 2116LL;
    goto LABEL_3;
  }
  return 0LL;
}
