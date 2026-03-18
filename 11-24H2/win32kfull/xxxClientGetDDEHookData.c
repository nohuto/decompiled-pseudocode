/*
 * XREFs of xxxClientGetDDEHookData @ 0x1402BC37C
 * Callers:
 *     xxxDDETrackPostHook @ 0x14024E980 (xxxDDETrackPostHook.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall xxxClientGetDDEHookData(int a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  void *v12; // rdx
  int v14; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v15; // [rsp+38h] [rbp-D0h] BYREF
  void *Src; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v17; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v18; // [rsp+58h] [rbp-B0h]
  __int128 v19; // [rsp+68h] [rbp-A0h]
  __int64 v20; // [rsp+78h] [rbp-90h]
  __int64 v21; // [rsp+80h] [rbp-88h]
  int v22; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v23; // [rsp+A8h] [rbp-60h]

  Src = 0LL;
  v14 = 0;
  memset_0(&v22, 0, 0x48uLL);
  v23 = a2;
  v22 = a1;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v15, v6, v7);
  EtwTraceBeginCallback(71LL);
  LODWORD(a2) = KeUserModeCallback(71LL, &v22, 72LL, &Src, &v14);
  EtwTraceEndCallback(71LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v15);
  if ( (int)a2 < 0 )
    return 0LL;
  if ( v14 != 24 )
    return 0LL;
  v15 = 0LL;
  RtlCopyFromUser(&v15, Src, 8uLL);
  v8 = v15;
  v21 = v15;
  v11 = *((_QWORD *)PtiCurrent(v10, v9) + 69);
  if ( v11 )
  {
    if ( (*(_DWORD *)(v11 + 84) & 1) != 0 && *(_QWORD *)(v11 + 96) == a3 )
      return 0LL;
  }
  v12 = (void *)*((_QWORD *)Src + 2);
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  RtlCopyFromUser(&v17, v12, 0x38uLL);
  *(_OWORD *)a3 = v17;
  *(_OWORD *)(a3 + 16) = v18;
  *(_OWORD *)(a3 + 32) = v19;
  *(_QWORD *)(a3 + 48) = v20;
  return v8;
}
