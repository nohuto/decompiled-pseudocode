/*
 * XREFs of SfnOUTDWORDINDWORD @ 0x1C020D230
 * Callers:
 *     <none>
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall SfnOUTDWORDINDWORD(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3,
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
  __int64 v27; // rcx
  __int64 *v28; // rcx
  __int64 v29; // r8
  _DWORD *v30; // rdx
  __int64 v32; // [rsp+68h] [rbp-B0h]
  __int64 v33; // [rsp+70h] [rbp-A8h] BYREF
  int v34; // [rsp+78h] [rbp-A0h]
  __int64 v35; // [rsp+7Ch] [rbp-9Ch]
  int v36; // [rsp+84h] [rbp-94h]
  __int64 v37; // [rsp+88h] [rbp-90h]
  __int64 v38; // [rsp+90h] [rbp-88h]
  __int64 v39; // [rsp+98h] [rbp-80h]
  __int64 v40; // [rsp+A0h] [rbp-78h]
  __int128 v41; // [rsp+C8h] [rbp-50h]
  __int128 v42; // [rsp+D8h] [rbp-40h] BYREF
  __int64 v43; // [rsp+E8h] [rbp-30h]
  int v44; // [rsp+120h] [rbp+8h] BYREF
  char v45; // [rsp+128h] [rbp+10h] BYREF
  unsigned __int64 v46; // [rsp+130h] [rbp+18h] BYREF

  v10 = a2;
  v46 = 0LL;
  v44 = 0;
  v42 = 0LL;
  v43 = 0LL;
  v12 = PtiCurrentShared((__int64)a1, a2, (__int64)a3, a4);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 59);
  else
    v14 = 0LL;
  v35 = 0LL;
  v36 = 0;
  v33 = v14;
  v34 = v10;
  v37 = a4;
  v38 = a5;
  v39 = a6;
  ThreadLock(a1, &v42);
  v18 = *((_QWORD *)v13 + 60);
  v41 = *(_OWORD *)(v18 + 64);
  v32 = *(_QWORD *)(v18 + 80);
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
    (LeaveEnterCritProperDisposition *)&v45,
    v15,
    v16,
    v17);
  EtwTraceBeginCallback(33LL);
  v21 = KeUserModeCallback(33LL, &v33, 48LL, &v46, &v44);
  EtwTraceEndCallback(33LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v45, v22, v23);
  ThreadUnlock1(v25, v24, v26);
  v27 = *((_QWORD *)v13 + 60);
  *(_OWORD *)(v27 + 64) = v41;
  *(_QWORD *)(v27 + 80) = v32;
  if ( v21 < 0 || v44 != 24 )
    return 0LL;
  v28 = (__int64 *)v46;
  if ( v46 + 8 < v46 || v46 + 8 > MmUserProbeAddress )
    v28 = (__int64 *)MmUserProbeAddress;
  v29 = *v28;
  v40 = *v28;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v30 = *(_DWORD **)(v46 + 16);
    if ( (unsigned __int64)v30 >= MmUserProbeAddress )
      v30 = (_DWORD *)MmUserProbeAddress;
    *a3 = *v30;
  }
  return v29;
}
