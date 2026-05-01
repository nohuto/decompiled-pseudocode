/*
 * XREFs of _lambda_d1defa04705501fb10e3f00eb63c4368_::operator() @ 0x1804E81A0
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d1defa04705501fb10e3f00eb63c4368___::Run @ 0x1804EBF90 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_d1defa04705501fb10e3f00eb63c4368___--.c)
 * Callees:
 *     ?IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z @ 0x1800C355C (-IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$FrameWindowChanged@IAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAPEAUHWND__@@AEBKAEAK@Z @ 0x1801873B8 (--$FrameWindowChanged@IAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAPEAUH.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x1804E96C4 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_d1defa04705501fb10e3f00eb63c4368_::operator()(WindowWrapperBase **a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rax
  HWND *v4; // rax
  DWORD WindowThreadProcessId; // eax
  __int64 *v6; // rbx
  WindowWrapperBase *v7; // rdx
  __int64 v8; // rcx
  __int16 v9; // cx
  int v10; // eax
  const char *v11; // r9
  __int64 result; // rax
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD dwProcessId; // [rsp+40h] [rbp+8h] BYREF
  DWORD v16; // [rsp+48h] [rbp+10h] BYREF
  int v17; // [rsp+50h] [rbp+18h] BYREF
  PSRWLOCK SRWLock; // [rsp+58h] [rbp+20h]

  v2 = *((_QWORD *)*a1 + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 200LL))(v2);
    v3 = (__int64 *)a1[1];
    if ( *((_QWORD *)*a1 + 17) != *v3 && ViewManagerInteropTraceLogging::IsEnabled(*v3) )
    {
      dwProcessId = 0;
      v4 = (HWND *)a1[1];
      if ( *v4 )
        WindowThreadProcessId = GetWindowThreadProcessId(*v4, &dwProcessId);
      else
        WindowThreadProcessId = 0;
      v16 = WindowThreadProcessId;
      v6 = (__int64 *)a1[1];
      v17 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)*a1 + 2) + 288LL))((__int64)*a1 + 16);
      ViewManagerInteropTraceLogging::FrameWindowChanged<unsigned int,HWND__ * &,unsigned long const &,unsigned long &>(
        &v17,
        v6,
        (int *)&v16,
        (int *)&dwProcessId);
    }
    v7 = *a1;
    v8 = *(_QWORD *)a1[1];
    *((_QWORD *)*a1 + 17) = v8;
    if ( (*(_BYTE *)a1[2] & 1) != 0 || !v8 )
      v9 = 0;
    else
      v9 = 128;
    *((_WORD *)v7 + 126) = v9 | *((_WORD *)v7 + 126) & 0xFF7F;
    WindowWrapperBase::CommitImportanceVector(v7);
    v10 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)*a1 + 35) + 248LL))(
            *((_QWORD *)*a1 + 35),
            ((unsigned __int64)*a1 + 16) & -(__int64)(*a1 != 0LL));
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x9F5,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v10,
        v13);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x9F7,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v11);
  }
  return result;
}
