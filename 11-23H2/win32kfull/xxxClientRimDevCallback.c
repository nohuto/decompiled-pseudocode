/*
 * XREFs of xxxClientRimDevCallback @ 0x1C0212D40
 * Callers:
 *     RIMDevChangeDoUsermodeCallback @ 0x1C01A5FEC (RIMDevChangeDoUsermodeCallback.c)
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 */

__int64 __fastcall xxxClientRimDevCallback(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int16 a6,
        __int16 a7,
        __int64 a8,
        __int64 a9)
{
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 *v12; // rcx
  __int64 result; // rax
  _QWORD v14[2]; // [rsp+38h] [rbp-40h] BYREF
  int v15; // [rsp+48h] [rbp-30h]
  int v16; // [rsp+4Ch] [rbp-2Ch]
  int v17; // [rsp+50h] [rbp-28h]
  __int16 v18; // [rsp+54h] [rbp-24h]
  __int16 v19; // [rsp+56h] [rbp-22h]
  __int64 v20; // [rsp+58h] [rbp-20h]
  __int64 v21; // [rsp+60h] [rbp-18h]
  int v22; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v23; // [rsp+98h] [rbp+20h] BYREF

  v23 = 0LL;
  v22 = 0;
  v14[0] = a4;
  v14[1] = a5;
  v15 = a1;
  v16 = a2;
  v17 = a3;
  v18 = a6;
  v19 = a7;
  v20 = a8;
  v21 = a9;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a6, a2, a3, a4);
  EtwTraceBeginCallback(118LL);
  v9 = KeUserModeCallback(118LL, v14, 48LL, &v23, &v22);
  EtwTraceEndCallback(118LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a6, v10, v11);
  if ( v9 < 0 || v22 != 24 )
    return 0LL;
  v12 = (__int64 *)v23;
  if ( v23 + 8 < v23 || v23 + 8 > MmUserProbeAddress )
    v12 = (__int64 *)MmUserProbeAddress;
  result = *v12;
  a5 = *v12;
  return result;
}
