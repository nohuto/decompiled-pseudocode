/*
 * XREFs of SfnINOUTLPSIZE @ 0x1C020ADB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall SfnINOUTLPSIZE(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
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
  __int64 *v34; // rcx
  __int64 v36; // [rsp+58h] [rbp-B0h]
  __int64 v37; // [rsp+60h] [rbp-A8h] BYREF
  int v38; // [rsp+68h] [rbp-A0h]
  int v39; // [rsp+6Ch] [rbp-9Ch]
  __int64 v40; // [rsp+70h] [rbp-98h]
  __int64 v41; // [rsp+78h] [rbp-90h]
  __int64 v42; // [rsp+80h] [rbp-88h]
  __int64 v43; // [rsp+88h] [rbp-80h]
  __int64 v44; // [rsp+90h] [rbp-78h]
  __int128 v45; // [rsp+B8h] [rbp-50h]
  __int128 v46; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v47; // [rsp+D8h] [rbp-30h]
  int v48; // [rsp+110h] [rbp+8h] BYREF
  char v49; // [rsp+118h] [rbp+10h] BYREF
  unsigned __int64 v50; // [rsp+120h] [rbp+18h] BYREF

  v10 = a2;
  v50 = 0LL;
  v48 = 0;
  v46 = 0LL;
  v47 = 0LL;
  v12 = PtiCurrentShared((__int64)a1, a2, a3, (__int64)a4);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 59);
  else
    v14 = 0LL;
  v39 = 0;
  v37 = v14;
  v38 = v10;
  v40 = a3;
  v41 = *a4;
  v42 = a5;
  v43 = a6;
  ThreadLock(a1, &v46);
  v18 = *((_QWORD *)v13 + 60);
  v45 = *(_OWORD *)(v18 + 64);
  v36 = *(_QWORD *)(v18 + 80);
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
    (LeaveEnterCritProperDisposition *)&v49,
    v15,
    v16,
    v17);
  EtwTraceBeginCallback(126LL);
  v21 = KeUserModeCallback(126LL, &v37, 48LL, &v50, &v48);
  EtwTraceEndCallback(126LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v49, v22, v23);
  ThreadUnlock1(v25, v24, v26);
  v29 = *((_QWORD *)v13 + 60);
  *(_OWORD *)(v29 + 64) = v45;
  *(_QWORD *)(v29 + 80) = v36;
  if ( v21 >= 0 && v48 == 24 )
  {
    v30 = (__int64 *)v50;
    v31 = v50 + 8;
    if ( v50 + 8 < v50 || v31 > MmUserProbeAddress )
      v30 = (__int64 *)MmUserProbeAddress;
    v32 = *v30;
    v44 = *v30;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v32;
    v33 = *((_QWORD *)PtiCurrentShared((__int64)v30, v31, v27, v28) + 64);
    if ( !v33 || (*(_DWORD *)(v33 + 84) & 1) == 0 || *(__int64 **)(v33 + 96) != a4 )
    {
      v34 = *(__int64 **)(v50 + 16);
      if ( v34 + 1 < v34 || (unsigned __int64)(v34 + 1) > MmUserProbeAddress )
        v34 = (__int64 *)MmUserProbeAddress;
      *a4 = *v34;
      return v32;
    }
  }
  return 0LL;
}
