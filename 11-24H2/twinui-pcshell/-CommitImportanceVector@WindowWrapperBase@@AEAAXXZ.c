/*
 * XREFs of ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x18043FCA4
 * Callers:
 *     _lambda_1c691449c5167e3292e0cc06d01cfa4b_::operator() @ 0x18043D644 (_lambda_1c691449c5167e3292e0cc06d01cfa4b_--operator().c)
 *     _lambda_9ed6fd0e6aaea94a42a1d802caf4bf23_::operator() @ 0x18043E380 (_lambda_9ed6fd0e6aaea94a42a1d802caf4bf23_--operator().c)
 *     _lambda_a4790585e349e91df8fc5759e0f84298_::operator() @ 0x18043E468 (_lambda_a4790585e349e91df8fc5759e0f84298_--operator().c)
 *     _lambda_d0edc6b8eea04ad0c12ef80d845b920d_::operator() @ 0x18043EA60 (_lambda_d0edc6b8eea04ad0c12ef80d845b920d_--operator().c)
 *     _lambda_d64c769bce7fa56fe27855a63f35df80_::operator() @ 0x18043ECEC (_lambda_d64c769bce7fa56fe27855a63f35df80_--operator().c)
 *     _lambda_de4cab0e1e4bd3a2de9597f5ab89f8cf_::operator() @ 0x18043F114 (_lambda_de4cab0e1e4bd3a2de9597f5ab89f8cf_--operator().c)
 *     ?ApproveWinRtActivation@WindowWrapperBase@@UEAAXXZ @ 0x18043F8C0 (-ApproveWinRtActivation@WindowWrapperBase@@UEAAXXZ.c)
 * Callees:
 *     ??$CommitImportanceVector@IAEAT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x18001EA04 (--$CommitImportanceVector@IAEAT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAX$$QE.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall WindowWrapperBase::CommitImportanceVector(WindowWrapperBase *this)
{
  __int64 v2; // rcx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 216LL))(*((_QWORD *)this + 35));
  if ( !*((_BYTE *)this + 548) && *((_DWORD *)this + 64) != *((_DWORD *)this + 63) )
  {
    v2 = *((_QWORD *)this + 13);
    if ( v2 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2);
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xBBB,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v3);
      *((_DWORD *)this + 64) = *((_DWORD *)this + 63);
      v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 288LL))((char *)this + 16);
      ViewManagerInteropTraceLogging::CommitImportanceVector<unsigned int,_RM_ACTIVITY_IMPORTANCE &>(
        &v5,
        (WindowWrapperBase *)((char *)this + 252));
    }
  }
}
