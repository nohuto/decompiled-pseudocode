/*
 * XREFs of SfnOUTLPTITLEBARINFOEX @ 0x1C020D940
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

__int64 __fastcall SfnOUTLPTITLEBARINFOEX(
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
  ULONG64 v34; // rdx
  _BYTE v36[4]; // [rsp+30h] [rbp-218h] BYREF
  _DWORD v37[5]; // [rsp+34h] [rbp-214h] BYREF
  unsigned __int64 v38; // [rsp+48h] [rbp-200h] BYREF
  __int128 v39; // [rsp+58h] [rbp-1F0h]
  __int64 v40; // [rsp+68h] [rbp-1E0h]
  __int64 v41; // [rsp+70h] [rbp-1D8h]
  __int128 v42; // [rsp+98h] [rbp-1B0h]
  __int128 v43; // [rsp+A8h] [rbp-1A0h] BYREF
  __int64 v44; // [rsp+B8h] [rbp-190h]
  __int128 v45; // [rsp+C0h] [rbp-188h]
  __int128 v46; // [rsp+D0h] [rbp-178h]
  __int128 v47; // [rsp+E0h] [rbp-168h]
  __int128 v48; // [rsp+F0h] [rbp-158h]
  __int128 v49; // [rsp+100h] [rbp-148h]
  __int128 v50; // [rsp+110h] [rbp-138h]
  __int128 v51; // [rsp+120h] [rbp-128h]
  __int128 v52; // [rsp+130h] [rbp-118h]
  __int64 v53; // [rsp+140h] [rbp-108h]
  int v54; // [rsp+148h] [rbp-100h]
  __int64 v55; // [rsp+150h] [rbp-F8h] BYREF
  int v56; // [rsp+158h] [rbp-F0h]
  __int64 v57; // [rsp+160h] [rbp-E8h]
  __int128 v58; // [rsp+168h] [rbp-E0h]
  __int128 v59; // [rsp+178h] [rbp-D0h]
  __int128 v60; // [rsp+188h] [rbp-C0h]
  __int128 v61; // [rsp+198h] [rbp-B0h]
  __int128 v62; // [rsp+1A8h] [rbp-A0h]
  __int128 v63; // [rsp+1B8h] [rbp-90h]
  __int128 v64; // [rsp+1C8h] [rbp-80h]
  __int128 v65; // [rsp+1D8h] [rbp-70h]
  __int64 v66; // [rsp+1E8h] [rbp-60h]
  int v67; // [rsp+1F0h] [rbp-58h]
  __int64 v68; // [rsp+1F8h] [rbp-50h]
  __int64 v69; // [rsp+200h] [rbp-48h]

  v10 = a2;
  v38 = 0LL;
  v37[0] = 0;
  v43 = 0LL;
  v44 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v12 = PtiCurrentShared((__int64)a1, a2, a3, a4);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 59);
  else
    v14 = 0LL;
  memset_0(&v55, 0, 0xB8uLL);
  v55 = v14;
  v56 = v10;
  v57 = a3;
  v58 = *(_OWORD *)a4;
  v59 = *(_OWORD *)(a4 + 16);
  v60 = *(_OWORD *)(a4 + 32);
  v61 = *(_OWORD *)(a4 + 48);
  v62 = *(_OWORD *)(a4 + 64);
  v63 = *(_OWORD *)(a4 + 80);
  v64 = *(_OWORD *)(a4 + 96);
  v65 = *(_OWORD *)(a4 + 112);
  v66 = *(_QWORD *)(a4 + 128);
  v67 = *(_DWORD *)(a4 + 136);
  v68 = a5;
  v69 = a6;
  ThreadLock(a1, &v43);
  v18 = *((_QWORD *)v13 + 60);
  v42 = *(_OWORD *)(v18 + 64);
  v39 = v42;
  v40 = *(_QWORD *)(v18 + 80);
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
    (LeaveEnterCritProperDisposition *)v36,
    v15,
    v16,
    v17);
  EtwTraceBeginCallback(111LL);
  v21 = KeUserModeCallback(111LL, &v55, 184LL, &v38, v37);
  EtwTraceEndCallback(111LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v36, v22, v23);
  ThreadUnlock1(v25, v24, v26);
  v29 = *((_QWORD *)v13 + 60);
  *(_OWORD *)(v29 + 64) = v42;
  *(_QWORD *)(v29 + 80) = v40;
  if ( v21 >= 0 && v37[0] == 24 )
  {
    v30 = (__int64 *)v38;
    v31 = v38 + 8;
    if ( v38 + 8 < v38 || v31 > MmUserProbeAddress )
      v30 = (__int64 *)MmUserProbeAddress;
    v32 = *v30;
    v41 = *v30;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v32;
    v33 = *((_QWORD *)PtiCurrentShared((__int64)v30, v31, v27, v28) + 64);
    if ( !v33 || (*(_DWORD *)(v33 + 84) & 1) == 0 || *(_QWORD *)(v33 + 96) != a4 )
    {
      v34 = *(_QWORD *)(v38 + 16);
      if ( v34 + 140 < v34 || v34 + 140 > MmUserProbeAddress )
        v34 = MmUserProbeAddress;
      v45 = *(_OWORD *)v34;
      v46 = *(_OWORD *)(v34 + 16);
      v47 = *(_OWORD *)(v34 + 32);
      v48 = *(_OWORD *)(v34 + 48);
      v49 = *(_OWORD *)(v34 + 64);
      v50 = *(_OWORD *)(v34 + 80);
      v51 = *(_OWORD *)(v34 + 96);
      v52 = *(_OWORD *)(v34 + 112);
      v53 = *(_QWORD *)(v34 + 128);
      v54 = *(_DWORD *)(v34 + 136);
      *(_OWORD *)a4 = v45;
      *(_OWORD *)(a4 + 16) = v46;
      *(_OWORD *)(a4 + 32) = v47;
      *(_OWORD *)(a4 + 48) = v48;
      *(_OWORD *)(a4 + 64) = v49;
      *(_OWORD *)(a4 + 80) = v50;
      *(_OWORD *)(a4 + 96) = v51;
      *(_OWORD *)(a4 + 112) = v52;
      *(_QWORD *)(a4 + 128) = v53;
      *(_DWORD *)(a4 + 136) = v54;
      return v32;
    }
  }
  return 0LL;
}
