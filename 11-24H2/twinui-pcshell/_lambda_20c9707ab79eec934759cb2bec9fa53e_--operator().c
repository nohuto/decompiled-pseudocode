/*
 * XREFs of _lambda_20c9707ab79eec934759cb2bec9fa53e_::operator() @ 0x180448E18
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_20c9707ab79eec934759cb2bec9fa53e___::Run @ 0x18044B320 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_20c9707ab79eec934759cb2bec9fa53e___--.c)
 * Callees:
 *     ?CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ @ 0x18001EDAC (-CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ?IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z @ 0x18001EE7C (-IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??$FrameWindowChanged@IAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAPEAUHWND__@@AEBKAEAK@Z @ 0x1801B5340 (--$FrameWindowChanged@IAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAPEAUH.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_20c9707ab79eec934759cb2bec9fa53e_::operator()(UwpWindowWrapperBase **a1)
{
  __int64 v2; // rcx
  HWND *v3; // rax
  DWORD WindowThreadProcessId; // eax
  __int64 *v5; // rbx
  int *v6; // rax
  UwpWindowWrapperBase *v7; // rdx
  __int64 v8; // rcx
  __int16 v9; // cx
  int v10; // eax
  const char *v11; // r9
  __int64 result; // rax
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD dwProcessId; // [rsp+40h] [rbp+8h] BYREF
  DWORD v16; // [rsp+48h] [rbp+10h] BYREF
  char v17; // [rsp+50h] [rbp+18h] BYREF
  RTL_SRWLOCK *v18; // [rsp+58h] [rbp+20h] BYREF

  v2 = *((_QWORD *)*a1 + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 208LL))(v2);
    if ( *((_QWORD *)*a1 + 17) != *(_QWORD *)a1[1] && ViewManagerInteropTraceLogging::IsEnabled() )
    {
      dwProcessId = 0;
      v3 = (HWND *)a1[1];
      if ( *v3 )
        WindowThreadProcessId = GetWindowThreadProcessId(*v3, &dwProcessId);
      else
        WindowThreadProcessId = 0;
      v16 = WindowThreadProcessId;
      v5 = (__int64 *)a1[1];
      v6 = (int *)(*(__int64 (__fastcall **)(__int64, char *))(*((_QWORD *)*a1 + 2) + 288LL))((__int64)*a1 + 16, &v17);
      ViewManagerInteropTraceLogging::FrameWindowChanged<unsigned int,HWND__ * &,unsigned long const &,unsigned long &>(
        v6,
        v5,
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
    UwpWindowWrapperBase::CommitImportanceVector(v7);
    v10 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)*a1 + 35) + 256LL))(
            *((_QWORD *)*a1 + 35),
            ((unsigned __int64)*a1 + 16) & -(__int64)(*a1 != 0LL));
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA96,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v10,
        v13);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v18);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA98,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v11);
  }
  return result;
}
