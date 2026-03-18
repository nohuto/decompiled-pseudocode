/*
 * XREFs of SfnINSIZECLIPBRD @ 0x1C020C450
 * Callers:
 *     <none>
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

__int64 __fastcall SfnINSIZECLIPBRD(__int64 *a1, __int64 a2, __int64 a3, __int128 *a4, __int64 a5, __int64 a6)
{
  int v8; // r13d
  __int64 v10; // rbx
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // r14
  __int64 v14; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int128 v21; // xmm6
  __int64 v22; // xmm7_8
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // edi
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 *v32; // rbx
  _BYTE v34[4]; // [rsp+30h] [rbp-108h] BYREF
  _DWORD v35[5]; // [rsp+34h] [rbp-104h] BYREF
  unsigned __int64 v36; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v37; // [rsp+58h] [rbp-E0h]
  __int128 v38; // [rsp+60h] [rbp-D8h]
  __int64 v39; // [rsp+70h] [rbp-C8h]
  __int128 v40; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-98h]
  __int64 v42; // [rsp+A8h] [rbp-90h] BYREF
  int v43; // [rsp+B0h] [rbp-88h]
  int v44; // [rsp+B4h] [rbp-84h]
  __int64 v45; // [rsp+B8h] [rbp-80h]
  __int128 v46; // [rsp+C0h] [rbp-78h]
  __int64 v47; // [rsp+D0h] [rbp-68h]
  __int64 v48; // [rsp+D8h] [rbp-60h]

  v8 = a2;
  v10 = 0LL;
  v36 = 0LL;
  v35[0] = 0;
  v37 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v11 = PtiCurrentShared((__int64)a1, a2, a3, (__int64)a4);
  v13 = v11;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v11 + 59);
  else
    v14 = 0LL;
  v44 = 0;
  v46 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
  v16 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v16 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( RtlAreAllAccessesGranted(*(_DWORD *)(v16 + 680), 4u) )
  {
    v42 = v14;
    v43 = v8;
    v45 = a3;
    v46 = *a4;
    v47 = a5;
    v48 = a6;
    ThreadLock(a1, &v40);
    v20 = *((_QWORD *)v13 + 60);
    v21 = *(_OWORD *)(v20 + 64);
    v38 = v21;
    v22 = *(_QWORD *)(v20 + 80);
    v39 = v22;
    *(_QWORD *)(v20 + 72) = v14;
    v23 = 0LL;
    if ( a1 )
      v23 = *a1;
    *(_QWORD *)(*((_QWORD *)v13 + 60) + 64LL) = v23;
    if ( a1 )
      v24 = *(_QWORD *)(a1[5] + 224);
    else
      v24 = 0LL;
    *(_QWORD *)(*((_QWORD *)v13 + 60) + 80LL) = v24;
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition(
      (LeaveEnterCritProperDisposition *)v34,
      v17,
      v18,
      v19);
    EtwTraceBeginCallback(24LL);
    v25 = KeUserModeCallback(24LL, &v42, 56LL, &v36, v35);
    EtwTraceEndCallback(24LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v34, v26, v27);
    ThreadUnlock1(v29, v28, v30);
    v31 = *((_QWORD *)v13 + 60);
    *(_OWORD *)(v31 + 64) = v21;
    *(_QWORD *)(v31 + 80) = v22;
    if ( v25 < 0 || v35[0] != 24 )
      return 0LL;
    v32 = (__int64 *)v36;
    if ( v36 + 8 < v36 || v36 + 8 > MmUserProbeAddress )
      v32 = (__int64 *)MmUserProbeAddress;
    v10 = *v32;
    v37 = v10;
  }
  return v10;
}
