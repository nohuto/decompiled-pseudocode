/*
 * XREFs of ?CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ @ 0x18001EDAC
 * Callers:
 *     ?ApproveWinRtActivation@UwpWindowWrapperBase@@UEAAXXZ @ 0x18001E860 (-ApproveWinRtActivation@UwpWindowWrapperBase@@UEAAXXZ.c)
 *     _lambda_fe0fa93ea00b211fee91aac62f93999b_::operator() @ 0x1800A80A8 (_lambda_fe0fa93ea00b211fee91aac62f93999b_--operator().c)
 *     _lambda_0d0dc26f2e1703fa8279b79796d53b0f_::operator() @ 0x180448BD4 (_lambda_0d0dc26f2e1703fa8279b79796d53b0f_--operator().c)
 *     _lambda_20c9707ab79eec934759cb2bec9fa53e_::operator() @ 0x180448E18 (_lambda_20c9707ab79eec934759cb2bec9fa53e_--operator().c)
 *     _lambda_2a43ebb49f2e9221dd99f0faba3896bb_::operator() @ 0x180449078 (_lambda_2a43ebb49f2e9221dd99f0faba3896bb_--operator().c)
 *     _lambda_732b9d0d4e46444a8cf28034daf59b80_::operator() @ 0x180449964 (_lambda_732b9d0d4e46444a8cf28034daf59b80_--operator().c)
 *     _lambda_8032610bc69c7d33d4f231d1bb122a3b_::operator() @ 0x180449C38 (_lambda_8032610bc69c7d33d4f231d1bb122a3b_--operator().c)
 * Callees:
 *     ?Instance@ViewManagerInteropTraceLogging@@KAPEAV1@XZ @ 0x18001EEA4 (-Instance@ViewManagerInteropTraceLogging@@KAPEAV1@XZ.c)
 *     ?CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x1800205E4 (-CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall UwpWindowWrapperBase::CommitImportanceVector(UwpWindowWrapperBase *this)
{
  const union _RM_ACTIVITY_IMPORTANCE *v2; // rdi
  __int64 v3; // rcx
  int v4; // eax
  unsigned int *v5; // rbx
  _DWORD *v6; // rcx
  ViewManagerInteropTraceLogging *v7; // rcx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v10; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 224LL))(*((_QWORD *)this + 35));
  if ( !*((_BYTE *)this + 548) )
  {
    v2 = (UwpWindowWrapperBase *)((char *)this + 252);
    if ( *((_DWORD *)this + 64) != *((_DWORD *)this + 63) )
    {
      v3 = *((_QWORD *)this + 14);
      if ( v3 )
      {
        v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 144LL))(v3);
        if ( v4 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xC86,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
            (const char *)(unsigned int)v4,
            v8);
        *((_DWORD *)this + 64) = *(_DWORD *)v2;
        v5 = (unsigned int *)(*(__int64 (__fastcall **)(char *, char *))(*((_QWORD *)this + 2) + 288LL))(
                               (char *)this + 16,
                               &v10);
        v6 = (_DWORD *)*((_QWORD *)ViewManagerInteropTraceLogging::Instance() + 1);
        if ( v6 )
        {
          if ( *v6 )
          {
            ViewManagerInteropTraceLogging::Instance();
            ViewManagerInteropTraceLogging::CommitImportanceVector_(v7, *v5, v2);
          }
        }
      }
    }
  }
}
