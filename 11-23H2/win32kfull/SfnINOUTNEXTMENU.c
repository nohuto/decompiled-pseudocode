/*
 * XREFs of SfnINOUTNEXTMENU @ 0x1C020B960
 * Callers:
 *     <none>
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall SfnINOUTNEXTMENU(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r12d
  struct tagTHREADINFO *v12; // rax
  struct tagTHREADINFO *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int128 v19; // xmm6
  __int64 v20; // xmm7_8
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 *v32; // rcx
  ULONG64 v33; // rdx
  __int64 v34; // rbx
  __int64 v35; // rcx
  ULONG64 v36; // rcx
  __int64 v37; // xmm0_8
  __int64 v39; // [rsp+50h] [rbp-E8h] BYREF
  int v40; // [rsp+58h] [rbp-E0h]
  int v41; // [rsp+5Ch] [rbp-DCh]
  __int64 v42; // [rsp+60h] [rbp-D8h]
  _BYTE v43[24]; // [rsp+68h] [rbp-D0h]
  __int64 v44; // [rsp+80h] [rbp-B8h]
  __int64 v45; // [rsp+88h] [rbp-B0h]
  __int128 v46; // [rsp+90h] [rbp-A8h]
  __int64 v47; // [rsp+A0h] [rbp-98h]
  __int64 v48; // [rsp+A8h] [rbp-90h]
  __int128 v49; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v50; // [rsp+E0h] [rbp-58h]
  int v51; // [rsp+140h] [rbp+8h] BYREF
  char v52; // [rsp+148h] [rbp+10h] BYREF
  unsigned __int64 v53; // [rsp+150h] [rbp+18h] BYREF

  v10 = a2;
  v53 = 0LL;
  v51 = 0;
  v49 = 0LL;
  v50 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v12 = PtiCurrentShared((__int64)a1, a2, a3, a4);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 59);
  else
    v14 = 0LL;
  v41 = 0;
  *(_OWORD *)&v43[8] = 0LL;
  v39 = v14;
  v40 = v10;
  v42 = a3;
  v44 = a5;
  v45 = a6;
  *(_OWORD *)v43 = *(_OWORD *)a4;
  *(_QWORD *)&v43[16] = *(_QWORD *)(a4 + 16);
  ThreadLock(a1, &v49);
  v18 = *((_QWORD *)v13 + 60);
  v19 = *(_OWORD *)(v18 + 64);
  v46 = v19;
  v20 = *(_QWORD *)(v18 + 80);
  v47 = v20;
  *(_QWORD *)(v18 + 72) = v14;
  if ( a1 )
    v21 = *a1;
  else
    v21 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 60) + 64LL) = v21;
  if ( a1 )
    v22 = *(_QWORD *)(a1[5] + 224);
  else
    v22 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 60) + 80LL) = v22;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition(
    (LeaveEnterCritProperDisposition *)&v52,
    v15,
    v16,
    v17);
  EtwTraceBeginCallback(30LL);
  v23 = KeUserModeCallback(30LL, &v39, 64LL, &v53, &v51);
  EtwTraceEndCallback(30LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v52, v24, v25);
  ThreadUnlock1(v27, v26, v28);
  v31 = *((_QWORD *)v13 + 60);
  *(_OWORD *)(v31 + 64) = v19;
  *(_QWORD *)(v31 + 80) = v20;
  if ( v23 >= 0 && v51 == 24 )
  {
    v32 = (__int64 *)v53;
    v33 = v53 + 8;
    if ( v53 + 8 < v53 || v33 > MmUserProbeAddress )
      v32 = (__int64 *)MmUserProbeAddress;
    v34 = *v32;
    v48 = *v32;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v34;
    v35 = *((_QWORD *)PtiCurrentShared((__int64)v32, v33, v29, v30) + 64);
    if ( !v35 || (*(_DWORD *)(v35 + 84) & 1) == 0 || *(_QWORD *)(v35 + 96) != a4 )
    {
      v36 = *(_QWORD *)(v53 + 16);
      if ( v36 + 24 < v36 || v36 + 24 > MmUserProbeAddress )
        v36 = MmUserProbeAddress;
      v37 = *(_QWORD *)(v36 + 16);
      *(_OWORD *)a4 = *(_OWORD *)v36;
      *(_QWORD *)(a4 + 16) = v37;
      return v34;
    }
  }
  return 0LL;
}
