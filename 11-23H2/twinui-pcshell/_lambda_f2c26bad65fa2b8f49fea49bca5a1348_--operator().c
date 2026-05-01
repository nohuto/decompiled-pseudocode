/*
 * XREFs of _lambda_f2c26bad65fa2b8f49fea49bca5a1348_::operator() @ 0x1801F92BC
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f2c26bad65fa2b8f49fea49bca5a1348___::Run @ 0x1801F9B80 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_f2c26bad65fa2b8f49fea49bca5a1348___--.c)
 * Callees:
 *     ?CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ @ 0x1800C2CB4 (-CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ?IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z @ 0x1800C355C (-IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800D246C (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$FrameWindowChanged@IAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAPEAUHWND__@@AEBKAEAK@Z @ 0x1801873B8 (--$FrameWindowChanged@IAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAPEAUH.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_f2c26bad65fa2b8f49fea49bca5a1348_::operator()(UwpWindowWrapperBase **a1)
{
  __int64 *v2; // rax
  HWND *v3; // rax
  DWORD WindowThreadProcessId; // eax
  __int64 *v5; // rbx
  int *v6; // rax
  UwpWindowWrapperBase *v7; // rdx
  __int64 v8; // rcx
  __int16 v9; // cx
  int v10; // eax
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD dwProcessId; // [rsp+40h] [rbp+8h] BYREF
  DWORD v15; // [rsp+48h] [rbp+10h] BYREF
  char v16; // [rsp+50h] [rbp+18h] BYREF
  RTL_SRWLOCK *v17; // [rsp+58h] [rbp+20h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)*a1 + 35) + 208LL))(*((_QWORD *)*a1 + 35), &v17);
  v2 = (__int64 *)a1[1];
  if ( *((_QWORD *)*a1 + 17) != *v2 && ViewManagerInteropTraceLogging::IsEnabled(*v2) )
  {
    dwProcessId = 0;
    v3 = (HWND *)a1[1];
    if ( *v3 )
      WindowThreadProcessId = GetWindowThreadProcessId(*v3, &dwProcessId);
    else
      WindowThreadProcessId = 0;
    v15 = WindowThreadProcessId;
    v5 = (__int64 *)a1[1];
    v6 = (int *)(*(__int64 (__fastcall **)(__int64, char *))(*((_QWORD *)*a1 + 2) + 288LL))((__int64)*a1 + 16, &v16);
    ViewManagerInteropTraceLogging::FrameWindowChanged<unsigned int,HWND__ * &,unsigned long const &,unsigned long &>(
      v6,
      v5,
      (int *)&v15,
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
      (void *)0xA97,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v10,
      v12);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v17);
  return 0LL;
}
