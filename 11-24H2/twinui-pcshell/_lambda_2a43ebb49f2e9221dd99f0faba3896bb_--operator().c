/*
 * XREFs of _lambda_2a43ebb49f2e9221dd99f0faba3896bb_::operator() @ 0x180449078
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2a43ebb49f2e9221dd99f0faba3896bb___::Run @ 0x18044B3B0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_2a43ebb49f2e9221dd99f0faba3896bb___--.c)
 * Callees:
 *     ?CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ @ 0x18001EDAC (-CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ??$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z @ 0x18001F9C4 (--$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_2a43ebb49f2e9221dd99f0faba3896bb_::operator()(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int *v4; // rax
  __int64 v5; // rcx
  int v6; // edi
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+40h] [rbp+8h] BYREF
  bool v11; // [rsp+48h] [rbp+10h] BYREF
  char v12; // [rsp+50h] [rbp+18h] BYREF
  RTL_SRWLOCK *v13; // [rsp+58h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(*a1 + 280);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 208LL))(v2);
    LOBYTE(v10) = 1;
    v3 = *a1;
    v11 = (*(_DWORD *)(*a1 + 180) & 0x40) != 0;
    v4 = (int *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(v3 + 16) + 288LL))(v3 + 16, &v12);
    ViewManagerInteropTraceLogging::ViewPriorityChanged<unsigned int,bool,bool>(v4, (char *)&v11, (char *)&v10);
    v5 = *a1;
    v6 = *(_DWORD *)(*a1 + 180) & 0x40;
    *(_DWORD *)(v5 + 180) = *(_DWORD *)(*a1 + 180) | 0xC0;
    if ( (*(_WORD *)(v5 + 252) & 0xC0) != 0xC0 )
    {
      *(_WORD *)(v5 + 252) |= 0xC0u;
      UwpWindowWrapperBase::CommitImportanceVector((UwpWindowWrapperBase *)v5);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v13);
    (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(*a1 + 280) + 240LL))(*(_QWORD *)(*a1 + 280), v6 != 0);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x8D2,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v7);
  }
  return 0LL;
}
