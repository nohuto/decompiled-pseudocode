/*
 * XREFs of xxxClientCallDefWindowProc @ 0x1C0156034
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C01287E0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 */

__int64 __fastcall xxxClientCallDefWindowProc(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 *v7; // rcx
  __int64 result; // rax
  __int64 v9; // [rsp+38h] [rbp-40h] BYREF
  int v10; // [rsp+40h] [rbp-38h]
  int v11; // [rsp+44h] [rbp-34h]
  __int64 v12; // [rsp+48h] [rbp-30h]
  __int64 v13; // [rsp+50h] [rbp-28h]
  int v14; // [rsp+58h] [rbp-20h]
  __int64 v15; // [rsp+5Ch] [rbp-1Ch]
  int v16; // [rsp+64h] [rbp-14h]
  __int64 v17; // [rsp+80h] [rbp+8h] BYREF
  int v18; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v19; // [rsp+90h] [rbp+18h] BYREF

  v19 = 0LL;
  v18 = 0;
  v11 = 0;
  v16 = 0;
  v9 = *a1;
  v10 = *((_DWORD *)a1 + 2);
  v12 = a1[2];
  v13 = a1[3];
  v14 = *((_DWORD *)a1 + 8);
  v15 = *(__int64 *)((char *)a1 + 36);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v17, a2, a3, a4);
  EtwTraceBeginCallback(128LL);
  v4 = KeUserModeCallback(128LL, &v9, 48LL, &v19, &v18);
  EtwTraceEndCallback(128LL);
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
