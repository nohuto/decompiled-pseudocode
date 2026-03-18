/*
 * XREFs of SfnINOUTLPSCROLLINFO @ 0x1C020AA10
 * Callers:
 *     <none>
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

__int64 __fastcall SfnINOUTLPSCROLLINFO(
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
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 *v30; // rcx
  ULONG64 v31; // rdx
  __int64 v32; // rbx
  __int64 v33; // rcx
  ULONG64 v34; // rcx
  __int64 v35; // xmm0_8
  int v36; // eax
  _BYTE v38[4]; // [rsp+30h] [rbp-118h] BYREF
  _DWORD v39[5]; // [rsp+34h] [rbp-114h] BYREF
  unsigned __int64 v40; // [rsp+48h] [rbp-100h] BYREF
  __int128 v41; // [rsp+58h] [rbp-F0h]
  __int64 v42; // [rsp+68h] [rbp-E0h]
  __int64 v43; // [rsp+70h] [rbp-D8h]
  __int128 v44; // [rsp+98h] [rbp-B0h]
  __int128 v45; // [rsp+A8h] [rbp-A0h] BYREF
  __int64 v46; // [rsp+B8h] [rbp-90h]
  __int64 v47; // [rsp+C0h] [rbp-88h] BYREF
  int v48; // [rsp+C8h] [rbp-80h]
  __int64 v49; // [rsp+D0h] [rbp-78h]
  __int128 v50; // [rsp+D8h] [rbp-70h]
  __int64 v51; // [rsp+E8h] [rbp-60h]
  int v52; // [rsp+F0h] [rbp-58h]
  __int64 v53; // [rsp+F8h] [rbp-50h]
  __int64 v54; // [rsp+100h] [rbp-48h]

  v10 = a2;
  v40 = 0LL;
  v39[0] = 0;
  v45 = 0LL;
  v46 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v12 = PtiCurrentShared((__int64)a1, a2, a3, a4);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 59);
  else
    v14 = 0LL;
  memset_0(&v47, 0, 0x48uLL);
  v47 = v14;
  v48 = v10;
  v49 = a3;
  v50 = *(_OWORD *)a4;
  v51 = *(_QWORD *)(a4 + 16);
  v52 = *(_DWORD *)(a4 + 24);
  v53 = a5;
  v54 = a6;
  ThreadLock(a1, &v45);
  v18 = *((_QWORD *)v13 + 60);
  v44 = *(_OWORD *)(v18 + 64);
  v41 = v44;
  v42 = *(_QWORD *)(v18 + 80);
  *(_QWORD *)(v18 + 72) = v14;
  if ( a1 )
    v19 = *a1;
  else
    v19 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 60) + 64LL) = v19;
  if ( a1 )
    v20 = *(_QWORD *)(a1[5] + 224);
  else
    v20 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 60) + 80LL) = v20;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition(
    (LeaveEnterCritProperDisposition *)v38,
    v15,
    v16,
    v17);
  EtwTraceBeginCallback(19LL);
  v21 = KeUserModeCallback(19LL, &v47, 72LL, &v40, v39);
  EtwTraceEndCallback(19LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v38, v22, v23);
  ThreadUnlock1(v25, v24, v26);
  v29 = *((_QWORD *)v13 + 60);
  *(_OWORD *)(v29 + 64) = v44;
  *(_QWORD *)(v29 + 80) = v42;
  if ( v21 >= 0 && v39[0] == 24 )
  {
    v30 = (__int64 *)v40;
    v31 = v40 + 8;
    if ( v40 + 8 < v40 || v31 > MmUserProbeAddress )
      v30 = (__int64 *)MmUserProbeAddress;
    v32 = *v30;
    v43 = *v30;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v32;
    v33 = *((_QWORD *)PtiCurrentShared((__int64)v30, v31, v27, v28) + 64);
    if ( !v33 || (*(_DWORD *)(v33 + 84) & 1) == 0 || *(_QWORD *)(v33 + 96) != a4 )
    {
      v34 = *(_QWORD *)(v40 + 16);
      if ( v34 + 28 < v34 || v34 + 28 > MmUserProbeAddress )
        v34 = MmUserProbeAddress;
      v35 = *(_QWORD *)(v34 + 16);
      v36 = *(_DWORD *)(v34 + 24);
      *(_OWORD *)a4 = *(_OWORD *)v34;
      *(_QWORD *)(a4 + 16) = v35;
      *(_DWORD *)(a4 + 24) = v36;
      return v32;
    }
  }
  return 0LL;
}
