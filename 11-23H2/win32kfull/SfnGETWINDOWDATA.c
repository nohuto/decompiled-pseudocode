/*
 * XREFs of SfnGETWINDOWDATA @ 0x1C0206030
 * Callers:
 *     <none>
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall SfnGETWINDOWDATA(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v7; // r14d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // r8
  ULONG64 v17; // rcx
  __int64 v19; // [rsp+40h] [rbp-48h] BYREF
  int v20; // [rsp+48h] [rbp-40h]
  int v21; // [rsp+4Ch] [rbp-3Ch]
  __int64 v22; // [rsp+50h] [rbp-38h]
  __int64 v23; // [rsp+58h] [rbp-30h]
  __int64 v24; // [rsp+60h] [rbp-28h]
  __int64 v25; // [rsp+68h] [rbp-20h]
  int v26; // [rsp+90h] [rbp+8h] BYREF
  char v27; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int64 v28; // [rsp+A0h] [rbp+18h] BYREF

  v7 = a2;
  v28 = 0LL;
  v26 = 0;
  PtiCurrentShared((__int64)a1, a2, a3, a4);
  v21 = 0;
  if ( a1 )
    v12 = *a1;
  else
    v12 = 0LL;
  v19 = v12;
  v20 = v7;
  v22 = a3;
  v23 = a4;
  v24 = a5;
  if ( (*(_BYTE *)(a1[5] + 18) & 8) != 0 )
    v13 = *(_QWORD *)(gpsi + 424LL);
  else
    v13 = *(_QWORD *)(gpsi + 616LL);
  v25 = v13;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition(
    (LeaveEnterCritProperDisposition *)&v27,
    v9,
    v10,
    v11);
  EtwTraceBeginCallback(125LL);
  v14 = KeUserModeCallback(125LL, &v19, 48LL, &v28, &v26);
  EtwTraceEndCallback(125LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v27, v15, v16);
  if ( v14 < 0 || v26 != 24 )
    return 0LL;
  v17 = v28;
  if ( v28 + 8 < v28 || v28 + 8 > MmUserProbeAddress )
    v17 = MmUserProbeAddress;
  return *(_QWORD *)v17;
}
