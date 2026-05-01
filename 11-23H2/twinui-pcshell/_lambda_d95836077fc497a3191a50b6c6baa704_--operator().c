/*
 * XREFs of _lambda_d95836077fc497a3191a50b6c6baa704_::operator() @ 0x1804E8440
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d95836077fc497a3191a50b6c6baa704___::Run @ 0x1804EBFF0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_d95836077fc497a3191a50b6c6baa704___--.c)
 * Callees:
 *     ??$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z @ 0x18017DE98 (--$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x1804E96C4 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_d95836077fc497a3191a50b6c6baa704_::operator()(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  const char *v4; // r9
  __int64 v5; // rcx
  int v6; // edi
  unsigned int v7; // edx
  __int16 v8; // ax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v11; // [rsp+40h] [rbp+8h] BYREF
  bool v12; // [rsp+48h] [rbp+10h] BYREF
  int v13; // [rsp+50h] [rbp+18h] BYREF
  PSRWLOCK SRWLock; // [rsp+58h] [rbp+20h]

  v2 = *(_QWORD *)(*a1 + 280);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 200LL))(v2);
    LOBYTE(v11) = 0;
    v3 = *a1;
    v12 = (*(_DWORD *)(*a1 + 180) & 0x40) != 0;
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 16) + 288LL))(v3 + 16);
    ViewManagerInteropTraceLogging::ViewPriorityChanged<unsigned int,bool,bool>(&v13, (char *)&v12, (char *)&v11);
    v5 = *a1;
    v6 = *(_DWORD *)(*a1 + 180) & 0x40;
    v7 = *(_DWORD *)(*a1 + 180) & 0xFFFFFFBF;
    *(_DWORD *)(v5 + 180) = v7;
    v8 = *(_WORD *)(v5 + 252);
    if ( (v8 & 0x40) != 0 && (v8 & 0x80u) != 0 && (v7 & 0x100) == 0 )
    {
      *(_WORD *)(v5 + 252) = v8 & 0xFFBF;
      WindowWrapperBase::CommitImportanceVector((WindowWrapperBase *)v5);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    if ( v6 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 280) + 240LL))(*(_QWORD *)(*a1 + 280));
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x85A,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v4);
  }
  return 0LL;
}
