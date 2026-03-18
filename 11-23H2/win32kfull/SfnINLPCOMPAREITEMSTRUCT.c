/*
 * XREFs of SfnINLPCOMPAREITEMSTRUCT @ 0x1C0207950
 * Callers:
 *     <none>
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

__int64 __fastcall SfnINLPCOMPAREITEMSTRUCT(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // r12d
  struct tagTHREADINFO *v10; // rax
  struct tagTHREADINFO *v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  ULONG64 v26; // rcx
  __int64 v28; // [rsp+58h] [rbp-E0h]
  __int128 v29; // [rsp+80h] [rbp-B8h]
  __int128 v30; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-98h]
  __int64 v32; // [rsp+B0h] [rbp-88h] BYREF
  int v33; // [rsp+B8h] [rbp-80h]
  __int64 v34; // [rsp+C0h] [rbp-78h]
  __int128 v35; // [rsp+C8h] [rbp-70h]
  __int128 v36; // [rsp+D8h] [rbp-60h]
  __int128 v37; // [rsp+E8h] [rbp-50h]
  __int64 v38; // [rsp+F8h] [rbp-40h]
  __int64 v39; // [rsp+100h] [rbp-38h]
  __int64 v40; // [rsp+108h] [rbp-30h]
  int v41; // [rsp+140h] [rbp+8h] BYREF
  char v42; // [rsp+148h] [rbp+10h] BYREF
  unsigned __int64 v43; // [rsp+150h] [rbp+18h] BYREF

  v8 = a2;
  v43 = 0LL;
  v41 = 0;
  v30 = 0LL;
  v31 = 0LL;
  v10 = PtiCurrentShared((__int64)a1, a2, a3, a4);
  v11 = v10;
  if ( a1 )
    v12 = a1[5] - *((_QWORD *)v10 + 59);
  else
    v12 = 0LL;
  memset_0(&v32, 0, 0x60uLL);
  v32 = v12;
  v33 = v8;
  v34 = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_DWORD *)(a4 + 36) = 0;
  *(_DWORD *)(a4 + 52) = 0;
  v35 = *(_OWORD *)a4;
  v36 = *(_OWORD *)(a4 + 16);
  v37 = *(_OWORD *)(a4 + 32);
  v38 = *(_QWORD *)(a4 + 48);
  v39 = a5;
  v40 = a6;
  ThreadLock(a1, &v30);
  v16 = *((_QWORD *)v11 + 60);
  v29 = *(_OWORD *)(v16 + 64);
  v28 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(v16 + 72) = v12;
  if ( a1 )
    v17 = *a1;
  else
    v17 = 0LL;
  *(_QWORD *)(*((_QWORD *)v11 + 60) + 64LL) = v17;
  if ( a1 )
    v18 = *(_QWORD *)(a1[5] + 224);
  else
    v18 = 0LL;
  *(_QWORD *)(*((_QWORD *)v11 + 60) + 80LL) = v18;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition(
    (LeaveEnterCritProperDisposition *)&v42,
    v13,
    v14,
    v15);
  EtwTraceBeginCallback(9LL);
  v19 = KeUserModeCallback(9LL, &v32, 96LL, &v43, &v41);
  EtwTraceEndCallback(9LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v42, v20, v21);
  ThreadUnlock1(v23, v22, v24);
  v25 = *((_QWORD *)v11 + 60);
  *(_OWORD *)(v25 + 64) = v29;
  *(_QWORD *)(v25 + 80) = v28;
  if ( v19 < 0 || v41 != 24 )
    return 0LL;
  v26 = v43;
  if ( v43 + 8 < v43 || v43 + 8 > MmUserProbeAddress )
    v26 = MmUserProbeAddress;
  return *(_QWORD *)v26;
}
