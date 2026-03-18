/*
 * XREFs of SfnINOUTDRAG @ 0x1C020A2E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

__int64 __fastcall SfnINOUTDRAG(
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
  _OWORD *v34; // rcx
  __int128 v35; // xmm1
  __int128 v36; // xmm2
  __int64 v38; // [rsp+58h] [rbp-E0h]
  __int128 v39; // [rsp+88h] [rbp-B0h]
  __int128 v40; // [rsp+98h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+A8h] [rbp-90h]
  __int64 v42; // [rsp+B0h] [rbp-88h] BYREF
  int v43; // [rsp+B8h] [rbp-80h]
  __int64 v44; // [rsp+C0h] [rbp-78h]
  __int64 v45; // [rsp+C8h] [rbp-70h]
  __int64 v46; // [rsp+D0h] [rbp-68h]
  __int128 v47; // [rsp+D8h] [rbp-60h]
  __int128 v48; // [rsp+E8h] [rbp-50h]
  __int128 v49; // [rsp+F8h] [rbp-40h]
  int v50; // [rsp+140h] [rbp+8h] BYREF
  char v51; // [rsp+148h] [rbp+10h] BYREF
  unsigned __int64 v52; // [rsp+150h] [rbp+18h] BYREF

  v10 = a2;
  v52 = 0LL;
  v50 = 0;
  v40 = 0LL;
  v41 = 0LL;
  v12 = PtiCurrentShared((__int64)a1, a2, a3, a4);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 59);
  else
    v14 = 0LL;
  memset_0(&v42, 0, 0x58uLL);
  v42 = v14;
  v43 = v10;
  v44 = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_DWORD *)(a4 + 44) = 0;
  v47 = *(_OWORD *)a4;
  v48 = *(_OWORD *)(a4 + 16);
  v49 = *(_OWORD *)(a4 + 32);
  v45 = a5;
  v46 = a6;
  ThreadLock(a1, &v40);
  v18 = *((_QWORD *)v13 + 60);
  v39 = *(_OWORD *)(v18 + 64);
  v38 = *(_QWORD *)(v18 + 80);
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
    (LeaveEnterCritProperDisposition *)&v51,
    v15,
    v16,
    v17);
  EtwTraceBeginCallback(5LL);
  v21 = KeUserModeCallback(5LL, &v42, 88LL, &v52, &v50);
  EtwTraceEndCallback(5LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v51, v22, v23);
  ThreadUnlock1(v25, v24, v26);
  v29 = *((_QWORD *)v13 + 60);
  *(_OWORD *)(v29 + 64) = v39;
  *(_QWORD *)(v29 + 80) = v38;
  if ( v21 >= 0 && v50 == 24 )
  {
    v30 = (__int64 *)v52;
    v31 = v52 + 8;
    if ( v52 + 8 < v52 || v31 > MmUserProbeAddress )
      v30 = (__int64 *)MmUserProbeAddress;
    v32 = *v30;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v32;
    v33 = *((_QWORD *)PtiCurrentShared((__int64)v30, v31, v27, v28) + 64);
    if ( !v33 || (*(_DWORD *)(v33 + 84) & 1) == 0 || *(_QWORD *)(v33 + 96) != a4 )
    {
      v34 = *(_OWORD **)(v52 + 16);
      if ( v34 + 3 < v34 || (unsigned __int64)(v34 + 3) > MmUserProbeAddress )
        v34 = (_OWORD *)MmUserProbeAddress;
      v35 = v34[1];
      v36 = v34[2];
      *(_OWORD *)a4 = *v34;
      *(_OWORD *)(a4 + 16) = v35;
      *(_OWORD *)(a4 + 32) = v36;
      return v32;
    }
  }
  return 0LL;
}
