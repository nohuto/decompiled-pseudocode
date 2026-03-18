/*
 * XREFs of fnHkINLPKBDLLHOOKSTRUCT @ 0x1C0155DA6
 * Callers:
 *     xxxHkCallHook @ 0x1C0120F60 (xxxHkCallHook.c)
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

__int64 __fastcall fnHkINLPKBDLLHOOKSTRUCT(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 *v8; // rcx
  __int64 result; // rax
  _BYTE v10[4]; // [rsp+30h] [rbp-68h] BYREF
  int v11; // [rsp+34h] [rbp-64h] BYREF
  _QWORD v12[3]; // [rsp+38h] [rbp-60h] BYREF
  _DWORD v13[2]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v14; // [rsp+58h] [rbp-40h]
  __int64 v15; // [rsp+60h] [rbp-38h]
  __int64 v16; // [rsp+68h] [rbp-30h]
  __int128 v17; // [rsp+70h] [rbp-28h]
  __int64 v18; // [rsp+80h] [rbp-18h]

  v12[0] = 0LL;
  v11 = 0;
  v13[1] = 0;
  v13[0] = a1;
  v14 = a2;
  v17 = *(_OWORD *)a3;
  v18 = *(_QWORD *)(a3 + 16);
  v15 = a4;
  v16 = a5;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v10, a2, a3, a4);
  EtwTraceBeginCallback(45LL);
  v5 = KeUserModeCallback(45LL, v13, 56LL, v12, &v11);
  EtwTraceEndCallback(45LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v10, v6, v7);
  if ( v5 < 0 || v11 != 24 )
    return 0LL;
  v8 = (__int64 *)v12[0];
  if ( (unsigned __int64)(v12[0] + 8LL) < v12[0] || v12[0] + 8LL > MmUserProbeAddress )
    v8 = (__int64 *)MmUserProbeAddress;
  result = *v8;
  v12[1] = *v8;
  return result;
}
