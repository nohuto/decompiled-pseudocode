/*
 * XREFs of fnHkINLPDEBUGHOOKSTRUCT @ 0x1C021040C
 * Callers:
 *     xxxHkCallHook @ 0x1C0120F60 (xxxHkCallHook.c)
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     ?CopyDebugHookLParam@@YAH_KPEAT_DEBUGLPARAM@@PEAUtagDEBUGHOOKINFO@@@Z @ 0x1C02048F8 (-CopyDebugHookLParam@@YAH_KPEAT_DEBUGLPARAM@@PEAUtagDEBUGHOOKINFO@@@Z.c)
 */

__int64 __fastcall fnHkINLPDEBUGHOOKSTRUCT(int a1, unsigned __int64 a2, __int128 *a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 *v15; // rcx
  __int64 result; // rax
  _BYTE v17[4]; // [rsp+30h] [rbp-B8h] BYREF
  int v18; // [rsp+34h] [rbp-B4h] BYREF
  _QWORD v19[3]; // [rsp+38h] [rbp-B0h] BYREF
  int v20; // [rsp+50h] [rbp-98h] BYREF
  unsigned __int64 v21; // [rsp+58h] [rbp-90h]
  __int128 v22; // [rsp+60h] [rbp-88h]
  __int128 v23; // [rsp+70h] [rbp-78h]
  _BYTE v24[48]; // [rsp+80h] [rbp-68h] BYREF
  int v25; // [rsp+B0h] [rbp-38h]
  __int64 v26; // [rsp+B8h] [rbp-30h]
  __int64 v27; // [rsp+C0h] [rbp-28h]

  v19[0] = 0LL;
  v18 = 0;
  memset_0(&v20, 0, 0x78uLL);
  v20 = a1;
  v21 = a2;
  *((_DWORD *)a3 + 7) = 0;
  v22 = *a3;
  v23 = a3[1];
  v26 = a4;
  v27 = a5;
  if ( a2 == 13 )
    return 0LL;
  if ( a2 == 14 )
    return 0LL;
  v25 = CopyDebugHookLParam(a2, (union _DEBUGLPARAM *)v24, (struct tagDEBUGHOOKINFO *)a3);
  *((_QWORD *)&v22 + 1) = 0LL;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v17, v9, v10, v11);
  EtwTraceBeginCallback(43LL);
  v12 = KeUserModeCallback(43LL, &v20, 120LL, v19, &v18);
  EtwTraceEndCallback(43LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v17, v13, v14);
  if ( v12 < 0 || v18 != 24 )
    return 0LL;
  v15 = (__int64 *)v19[0];
  if ( (unsigned __int64)(v19[0] + 8LL) < v19[0] || v19[0] + 8LL > MmUserProbeAddress )
    v15 = (__int64 *)MmUserProbeAddress;
  result = *v15;
  v19[1] = *v15;
  return result;
}
