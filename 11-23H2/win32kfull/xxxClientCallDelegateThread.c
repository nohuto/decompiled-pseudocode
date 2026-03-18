/*
 * XREFs of xxxClientCallDelegateThread @ 0x1C015614E
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C01287E0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 */

__int64 __fastcall xxxClientCallDelegateThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 *v7; // rcx
  __int64 result; // rax
  _QWORD v9[3]; // [rsp+40h] [rbp-48h] BYREF
  int v10; // [rsp+58h] [rbp-30h]
  int v11; // [rsp+5Ch] [rbp-2Ch]
  __int64 v12; // [rsp+60h] [rbp-28h]
  __int64 v13; // [rsp+68h] [rbp-20h]
  int v14; // [rsp+70h] [rbp-18h]
  __int64 v15; // [rsp+74h] [rbp-14h]
  int v16; // [rsp+7Ch] [rbp-Ch]
  __int64 v17; // [rsp+90h] [rbp+8h] BYREF
  int v18; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int64 v19; // [rsp+A0h] [rbp+18h] BYREF

  v19 = 0LL;
  v18 = 0;
  v11 = 0;
  v16 = 0;
  v9[0] = a1;
  v9[1] = a3;
  v9[2] = *(_QWORD *)a2;
  v10 = *(_DWORD *)(a2 + 8);
  v12 = *(_QWORD *)(a2 + 16);
  v13 = *(_QWORD *)(a2 + 24);
  v14 = *(_DWORD *)(a2 + 32);
  v15 = *(_QWORD *)(a2 + 36);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v17, a2, a3, a4);
  EtwTraceBeginCallback(50LL);
  v4 = KeUserModeCallback(50LL, v9, 64LL, &v19, &v18);
  EtwTraceEndCallback(50LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v17, v5, v6);
  if ( v4 < 0 || v18 != 24 )
    return 0LL;
  v7 = (__int64 *)v19;
  if ( v19 + 8 < v19 || v19 + 8 > MmUserProbeAddress )
    v7 = (__int64 *)MmUserProbeAddress;
  result = *v7;
  v17 = *v7;
  return result;
}
