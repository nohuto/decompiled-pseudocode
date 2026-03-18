/*
 * XREFs of SfnINOUTLPMEASUREITEMSTRUCT @ 0x1C020A680
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

__int64 __fastcall SfnINOUTLPMEASUREITEMSTRUCT(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r15d
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
  _BYTE v37[4]; // [rsp+30h] [rbp-118h] BYREF
  _DWORD v38[5]; // [rsp+34h] [rbp-114h] BYREF
  unsigned __int64 v39; // [rsp+48h] [rbp-100h] BYREF
  __int128 v40; // [rsp+58h] [rbp-F0h]
  __int64 v41; // [rsp+68h] [rbp-E0h]
  __int64 v42; // [rsp+70h] [rbp-D8h]
  __int128 v43; // [rsp+98h] [rbp-B0h]
  __int128 v44; // [rsp+A8h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+B8h] [rbp-90h]
  __int64 v46; // [rsp+C0h] [rbp-88h] BYREF
  int v47; // [rsp+C8h] [rbp-80h]
  __int64 v48; // [rsp+D0h] [rbp-78h]
  __int128 v49; // [rsp+D8h] [rbp-70h]
  __int128 v50; // [rsp+E8h] [rbp-60h]
  __int64 v51; // [rsp+F8h] [rbp-50h]
  __int64 v52; // [rsp+100h] [rbp-48h]

  v10 = a2;
  v39 = 0LL;
  v38[0] = 0;
  v44 = 0LL;
  v45 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v12 = PtiCurrentShared((__int64)a1, a2, a3, a4);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 59);
  else
    v14 = 0LL;
  memset_0(&v46, 0, 0x48uLL);
  v46 = v14;
  v47 = v10 & 0x1FFFF;
  v48 = a3;
  *(_DWORD *)(a4 + 20) = 0;
  v49 = *(_OWORD *)a4;
  v50 = *(_OWORD *)(a4 + 16);
  v51 = a5;
  v52 = a6;
  ThreadLock(a1, &v44);
  v18 = *((_QWORD *)v13 + 60);
  v43 = *(_OWORD *)(v18 + 64);
  v40 = v43;
  v41 = *(_QWORD *)(v18 + 80);
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
    (LeaveEnterCritProperDisposition *)v37,
    v15,
    v16,
    v17);
  EtwTraceBeginCallback(16LL);
  v21 = KeUserModeCallback(16LL, &v46, 72LL, &v39, v38);
  EtwTraceEndCallback(16LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v37, v22, v23);
  ThreadUnlock1(v25, v24, v26);
  v29 = *((_QWORD *)v13 + 60);
  *(_OWORD *)(v29 + 64) = v43;
  *(_QWORD *)(v29 + 80) = v41;
  if ( v21 >= 0 && v38[0] == 24 )
  {
    v30 = (__int64 *)v39;
    v31 = v39 + 8;
    if ( v39 + 8 < v39 || v31 > MmUserProbeAddress )
      v30 = (__int64 *)MmUserProbeAddress;
    v32 = *v30;
    v42 = *v30;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v32;
    v33 = *((_QWORD *)PtiCurrentShared((__int64)v30, v31, v27, v28) + 64);
    if ( !v33 || (*(_DWORD *)(v33 + 84) & 1) == 0 || *(_QWORD *)(v33 + 96) != a4 )
    {
      v34 = *(_OWORD **)(v39 + 16);
      if ( v34 + 2 < v34 || (unsigned __int64)(v34 + 2) > MmUserProbeAddress )
        v34 = (_OWORD *)MmUserProbeAddress;
      v35 = v34[1];
      *(_OWORD *)a4 = *v34;
      *(_OWORD *)(a4 + 16) = v35;
      return v32;
    }
  }
  return 0LL;
}
