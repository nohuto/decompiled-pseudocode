/*
 * XREFs of _lambda_a7f15287e5878abd1220aaf01e051b7a_::operator() @ 0x180207D6C
 * Callers:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x1800AEAEC (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     wil::details::ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___::_ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___ @ 0x180207D4C (wil--details--ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___--_ScopeExitFn__lambda_a7f1.c)
 * Callees:
 *     ??$OnPriorityUnboostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NHAEA_N@SingleViewExperienceTelemetry@@SAX$$QEAPEBG0AEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_N$$QEAH2@Z @ 0x180023AFC (--$OnPriorityUnboostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_N.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall lambda_a7f15287e5878abd1220aaf01e051b7a_::operator()(CSingleViewShellExperience **a1)
{
  CSingleViewShellExperience *v1; // rbx
  __int64 v3; // rcx
  int v4; // eax
  HSTRING v5; // rcx
  const WCHAR *StringRawBuffer; // rax
  HSTRING v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v9; // [rsp+50h] [rbp+8h] BYREF
  int v10; // [rsp+58h] [rbp+10h] BYREF
  const WCHAR *v11; // [rsp+60h] [rbp+18h] BYREF
  PCWSTR v12; // [rsp+68h] [rbp+20h] BYREF

  v1 = *a1;
  v10 = 1;
  if ( *((_BYTE *)v1 + 140) )
  {
    v3 = *((_QWORD *)v1 + 11);
    *((_BYTE *)v1 + 140) = 0;
    v4 = (*(__int64 (__fastcall **)(__int64, CSingleViewShellExperience *))(*(_QWORD *)v3 + 128LL))(v3, v1);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4DB,
        (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v4);
  }
  v5 = (HSTRING)*((_QWORD *)v1 + 2);
  v9 = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(v5, 0LL);
  v7 = (HSTRING)*((_QWORD *)v1 + 1);
  v11 = StringRawBuffer;
  v12 = WindowsGetStringRawBuffer(v7, 0LL);
  SingleViewExperienceTelemetry::OnPriorityUnboostRequested<unsigned short const *,unsigned short const *,enum CSingleViewShellExperience::PriorityBoostReason &,bool &,int,bool &>(
    &v12,
    &v11,
    &v10,
    (char *)v1 + 141,
    &v9,
    (char *)v1 + 140);
  CSingleViewShellExperience::UnboostDiskIo(*a1);
}
