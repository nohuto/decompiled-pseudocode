/*
 * XREFs of SfnINLPUAHNCPAINTMENUPOPUP @ 0x1C0209F80
 * Callers:
 *     <none>
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     _ServerFixupMenuDC @ 0x1C023424C (_ServerFixupMenuDC.c)
 */

__int64 __fastcall SfnINLPUAHNCPAINTMENUPOPUP(
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
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int128 v20; // xmm6
  __int64 v21; // xmm7_8
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 *v31; // rcx
  __int64 v32; // rbx
  __int64 v34; // [rsp+50h] [rbp-E8h] BYREF
  int v35; // [rsp+58h] [rbp-E0h]
  int v36; // [rsp+5Ch] [rbp-DCh]
  __int64 v37; // [rsp+60h] [rbp-D8h]
  _BYTE v38[24]; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v39; // [rsp+80h] [rbp-B8h]
  __int64 v40; // [rsp+88h] [rbp-B0h]
  __int128 v41; // [rsp+90h] [rbp-A8h]
  __int64 v42; // [rsp+A0h] [rbp-98h]
  __int64 v43; // [rsp+A8h] [rbp-90h]
  __int128 v44; // [rsp+C8h] [rbp-70h] BYREF
  __int64 v45; // [rsp+D8h] [rbp-60h]
  int v46; // [rsp+140h] [rbp+8h] BYREF
  char v47; // [rsp+148h] [rbp+10h] BYREF
  unsigned __int64 v48; // [rsp+150h] [rbp+18h] BYREF
  __int64 v49; // [rsp+158h] [rbp+20h]

  v10 = a2;
  v48 = 0LL;
  v46 = 0;
  v44 = 0LL;
  v45 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v12 = PtiCurrentShared((__int64)a1, a2, a3, a4);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 59);
  else
    v14 = 0LL;
  v36 = 0;
  memset(v38, 0, sizeof(v38));
  v49 = 0LL;
  v15 = ServerFixupMenuDC(*(HDC *)(a4 + 8));
  if ( v15 )
  {
    v49 = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(a4 + 8) = v15;
  }
  v34 = v14;
  v35 = v10 & 0x1FFFF;
  v37 = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_OWORD *)v38 = *(_OWORD *)a4;
  *(_QWORD *)&v38[16] = *(_QWORD *)(a4 + 16);
  v39 = a5;
  v40 = a6;
  ThreadLock(a1, &v44);
  v19 = *((_QWORD *)v13 + 60);
  v20 = *(_OWORD *)(v19 + 64);
  v41 = v20;
  v21 = *(_QWORD *)(v19 + 80);
  v42 = v21;
  *(_QWORD *)(v19 + 72) = v14;
  if ( a1 )
    v22 = *a1;
  else
    v22 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 60) + 64LL) = v22;
  if ( a1 )
    v23 = *(_QWORD *)(a1[5] + 224);
  else
    v23 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 60) + 80LL) = v23;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition(
    (LeaveEnterCritProperDisposition *)&v47,
    v16,
    v17,
    v18);
  EtwTraceBeginCallback(110LL);
  v24 = KeUserModeCallback(110LL, &v34, 64LL, &v48, &v46);
  EtwTraceEndCallback(110LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v47, v25, v26);
  ThreadUnlock1(v28, v27, v29);
  v30 = *((_QWORD *)v13 + 60);
  *(_OWORD *)(v30 + 64) = v20;
  *(_QWORD *)(v30 + 80) = v21;
  if ( v24 < 0 || v46 != 24 )
    return 0LL;
  v31 = (__int64 *)v48;
  if ( v48 + 8 < v48 || v48 + 8 > MmUserProbeAddress )
    v31 = (__int64 *)MmUserProbeAddress;
  v32 = *v31;
  v43 = *v31;
  if ( v15 )
  {
    _ReleaseDC(v15);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
      *(_QWORD *)(a4 + 8) = v49;
  }
  return v32;
}
