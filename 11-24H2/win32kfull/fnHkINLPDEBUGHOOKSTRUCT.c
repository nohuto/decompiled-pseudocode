/*
 * XREFs of fnHkINLPDEBUGHOOKSTRUCT @ 0x14007ED04
 * Callers:
 *     xxxHkCallHook @ 0x140080630 (xxxHkCallHook.c)
 * Callees:
 *     ?CopyDebugHookLParam@@YAH_KPEAT_DEBUGLPARAM@@PEAUtagDEBUGHOOKINFO@@@Z @ 0x14019C3B4 (-CopyDebugHookLParam@@YAH_KPEAT_DEBUGLPARAM@@PEAUtagDEBUGHOOKINFO@@@Z.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void *__fastcall fnHkINLPDEBUGHOOKSTRUCT(int a1, unsigned __int64 a2, __int128 *a3, __int64 a4, __int64 a5)
{
  int v9; // ebx
  void *result; // rax
  int v11; // [rsp+30h] [rbp-C8h] BYREF
  void *v12; // [rsp+38h] [rbp-C0h] BYREF
  void *Src[4]; // [rsp+40h] [rbp-B8h] BYREF
  int v14; // [rsp+60h] [rbp-98h] BYREF
  unsigned __int64 v15; // [rsp+68h] [rbp-90h]
  __int128 v16; // [rsp+70h] [rbp-88h]
  __int128 v17; // [rsp+80h] [rbp-78h]
  _BYTE v18[48]; // [rsp+90h] [rbp-68h] BYREF
  int v19; // [rsp+C0h] [rbp-38h]
  __int64 v20; // [rsp+C8h] [rbp-30h]
  __int64 v21; // [rsp+D0h] [rbp-28h]

  Src[0] = 0LL;
  v11 = 0;
  memset_0(&v14, 0, 0x78uLL);
  v14 = a1;
  v15 = a2;
  *((_DWORD *)a3 + 7) = 0;
  v16 = *a3;
  v17 = a3[1];
  v20 = a4;
  v21 = a5;
  if ( a2 == 13 )
    return 0LL;
  if ( a2 == 14 )
    return 0LL;
  v19 = CopyDebugHookLParam(a2, (union _DEBUGLPARAM *)v18, (struct tagDEBUGHOOKINFO *)a3);
  *((_QWORD *)&v16 + 1) = 0LL;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v12);
  EtwTraceBeginCallback(43LL);
  v9 = KeUserModeCallback(43LL, &v14, 120LL, Src, &v11);
  EtwTraceEndCallback(43LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v12);
  if ( v9 < 0 || v11 != 24 )
    return 0LL;
  v12 = 0LL;
  RtlCopyFromUser(&v12, Src[0], 8uLL);
  result = v12;
  Src[1] = v12;
  return result;
}
