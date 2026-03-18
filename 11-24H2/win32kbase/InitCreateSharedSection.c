/*
 * XREFs of InitCreateSharedSection @ 0x1402E4F6C
 * Callers:
 *     Win32UserInitialize @ 0x1402E5DE4 (Win32UserInitialize.c)
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1400AACA4 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     UserCreateHeap @ 0x14012F120 (UserCreateHeap.c)
 *     ??1ScopeGuard@@QEAA@XZ @ 0x140155AC4 (--1ScopeGuard@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqD @ 0x14015A1DC (WPP_RECORDER_AND_TRACE_SF_qqD.c)
 *     _lambda_301e07556f67996ceb949113357e8481_::_lambda_invoker_cdecl_ @ 0x1401B1C24 (_lambda_301e07556f67996ceb949113357e8481_--_lambda_invoker_cdecl_.c)
 *     _lambda_63e36bff1dba17887201b3c4e4518665_::_lambda_invoker_cdecl_ @ 0x1401B1C68 (_lambda_63e36bff1dba17887201b3c4e4518665_--_lambda_invoker_cdecl_.c)
 */

__int64 InitCreateSharedSection()
{
  char v0; // bl
  bool v1; // di
  bool v2; // si
  __int64 UserSessionState; // rax
  int v4; // r8d
  int v5; // edx
  CTouchProcessor *v6; // rcx
  char v7; // di
  char v8; // si
  __int64 v9; // rax
  _QWORD *v10; // rdi
  __int64 result; // rax
  __int64 v12; // rcx
  PVOID *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  NTSTATUS v17; // edi
  char *v18; // rsi
  CTouchProcessor *v19; // rcx
  char v20; // di
  __int64 v21; // rax
  __int64 v22; // rax
  PVOID Heap; // rbx
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // [rsp+20h] [rbp-68h]
  int v27; // [rsp+28h] [rbp-60h]
  int v28; // [rsp+30h] [rbp-58h]
  int v29; // [rsp+38h] [rbp-50h]
  int v30; // [rsp+90h] [rbp+8h] BYREF
  int v31; // [rsp+94h] [rbp+Ch]
  ULONG_PTR ViewSize; // [rsp+98h] [rbp+10h] BYREF
  void (*v33)(void); // [rsp+A0h] [rbp+18h] BYREF
  void (*v34)(void); // [rsp+A8h] [rbp+20h] BYREF

  v0 = 1;
  v1 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v2 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v4) = v2;
    LOBYTE(v5) = v1;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v5,
      v4,
      *(_QWORD *)(UserSessionState + 69400),
      4,
      14,
      11,
      (__int64)&WPP_c6ad2250ef6e3ae3eb9ff75238ab5e56_Traceguids);
  }
  v6 = WPP_GLOBAL_Control;
  v7 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = W32GetUserSessionState(WPP_GLOBAL_Control);
    WPP_RECORDER_AND_TRACE_SF_dD(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v8,
      *(_QWORD *)(v9 + 69400),
      4u,
      0xEu,
      0xCu,
      (__int64)&WPP_c6ad2250ef6e3ae3eb9ff75238ab5e56_Traceguids,
      0x200000,
      0x8000);
  }
  v31 = 0;
  v30 = 2129920;
  v10 = (_QWORD *)(W32GetUserSessionState(v6) + 19896);
  result = MmCreateSection(v10, 983071LL, 0LL, &v30, 4, 0x4000000, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    ObDeleteCapturedInsertInfo(*v10);
    ViewSize = 0LL;
    v13 = (PVOID *)(W32GetUserSessionState(v12) + 19912);
    *v13 = 0LL;
    v15 = W32GetUserSessionState(v14);
    v17 = MmMapViewInSessionSpace(*(PVOID *)(v15 + 19896), v13, &ViewSize);
    if ( v17 < 0 )
    {
LABEL_28:
      lambda_301e07556f67996ceb949113357e8481_::_lambda_invoker_cdecl_(v16);
      return (unsigned int)v17;
    }
    v18 = (char *)*v13;
    v19 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v0 = 0;
    }
    v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_qqD(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v0,
        v20,
        *(_QWORD *)(v21 + 69400),
        v26,
        v27,
        v28,
        v29);
    }
    v22 = W32GetUserSessionState(v19);
    Heap = UserCreateHeap(
             *(_QWORD *)(v22 + 19896),
             0x200000LL,
             v18 + 0x200000,
             0x8000LL,
             (NTSTATUS (__stdcall *)(PVOID, PVOID *, PSIZE_T))UserCommitSharedMemory);
    *(_QWORD *)(W32GetUserSessionState(v24) + 19920) = Heap;
    if ( !Heap )
    {
      UserSetLastError(8);
      lambda_63e36bff1dba17887201b3c4e4518665_::_lambda_invoker_cdecl_(v25);
      v17 = -1073741801;
      goto LABEL_28;
    }
    v34 = 0LL;
    v33 = 0LL;
    ScopeGuard::~ScopeGuard(&v33);
    ScopeGuard::~ScopeGuard(&v34);
    return 0LL;
  }
  return result;
}
