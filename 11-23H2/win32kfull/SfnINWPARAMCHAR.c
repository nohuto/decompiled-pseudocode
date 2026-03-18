/*
 * XREFs of SfnINWPARAMCHAR @ 0x1C020CC50
 * Callers:
 *     <none>
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C024B618 (RtlWCSMessageWParamCharToMB.c)
 */

__int64 __fastcall SfnINWPARAMCHAR(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned int v8; // esi
  struct tagTHREADINFO *v10; // rax
  struct tagTHREADINFO *v11; // r14
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
  __int64 *v26; // rcx
  __int64 result; // rax
  __int64 v28; // [rsp+58h] [rbp-B0h]
  __int64 v29; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v30; // [rsp+68h] [rbp-A0h]
  int v31; // [rsp+6Ch] [rbp-9Ch]
  __int64 v32; // [rsp+70h] [rbp-98h]
  __int64 v33; // [rsp+78h] [rbp-90h]
  __int64 v34; // [rsp+80h] [rbp-88h]
  __int64 v35; // [rsp+88h] [rbp-80h]
  __int64 v36; // [rsp+90h] [rbp-78h]
  __int128 v37; // [rsp+B0h] [rbp-58h]
  __int128 v38; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v39; // [rsp+D0h] [rbp-38h]
  __int64 v40; // [rsp+110h] [rbp+8h] BYREF
  int v41; // [rsp+118h] [rbp+10h] BYREF
  __int64 v42; // [rsp+120h] [rbp+18h] BYREF
  unsigned __int64 v43; // [rsp+128h] [rbp+20h] BYREF

  v42 = a3;
  v8 = a2;
  v43 = 0LL;
  v41 = 0;
  v38 = 0LL;
  v39 = 0LL;
  v10 = PtiCurrentShared((__int64)a1, a2, a3, a4);
  v11 = v10;
  if ( a1 )
    v12 = a1[5] - *((_QWORD *)v10 + 59);
  else
    v12 = 0LL;
  v31 = 0;
  v29 = v12;
  v30 = v8;
  if ( (a7 & 1) != 0 )
  {
    if ( v8 == 47 || v8 == 288 )
    {
      v40 = (unsigned __int16)v42;
      RtlWCSMessageWParamCharToMB(v8, &v40);
      v42 = (WORD1(v42) << 16) | (unsigned __int16)v40;
    }
    else
    {
      RtlWCSMessageWParamCharToMB(v8, &v42);
    }
  }
  v32 = v42;
  v33 = a4;
  v34 = a5;
  v35 = a6;
  ThreadLock(a1, &v38);
  v16 = *((_QWORD *)v11 + 60);
  v37 = *(_OWORD *)(v16 + 64);
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
    (LeaveEnterCritProperDisposition *)&a7,
    v13,
    v14,
    v15);
  EtwTraceBeginCallback(2LL);
  v19 = KeUserModeCallback(2LL, &v29, 48LL, &v43, &v41);
  EtwTraceEndCallback(2LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a7, v20, v21);
  ThreadUnlock1(v23, v22, v24);
  v25 = *((_QWORD *)v11 + 60);
  *(_OWORD *)(v25 + 64) = v37;
  *(_QWORD *)(v25 + 80) = v28;
  if ( v19 < 0 || v41 != 24 )
    return 0LL;
  v26 = (__int64 *)v43;
  if ( v43 + 8 < v43 || v43 + 8 > MmUserProbeAddress )
    v26 = (__int64 *)MmUserProbeAddress;
  result = *v26;
  v36 = *v26;
  return result;
}
