/*
 * XREFs of ?xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z @ 0x1402B8494
 * Callers:
 *     xxxClientCopyDDEOut1 @ 0x1402BB994 (xxxClientCopyDDEOut1.c)
 * Callees:
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void *__fastcall xxxClientCopyDDEOut2(struct tagINTDDEINFO *a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  void *result; // rax
  int v6; // [rsp+30h] [rbp-98h] BYREF
  void *v7; // [rsp+38h] [rbp-90h] BYREF
  void *Src[4]; // [rsp+40h] [rbp-88h] BYREF
  __int128 v9; // [rsp+60h] [rbp-68h] BYREF
  __int128 v10; // [rsp+70h] [rbp-58h]
  __int128 v11; // [rsp+80h] [rbp-48h]
  __int128 v12; // [rsp+90h] [rbp-38h]
  __int64 v13; // [rsp+A0h] [rbp-28h]

  Src[0] = 0LL;
  v6 = 0;
  v9 = *(_OWORD *)a1;
  v10 = *((_OWORD *)a1 + 1);
  v11 = *((_OWORD *)a1 + 2);
  v12 = *((_OWORD *)a1 + 3);
  v13 = *((_QWORD *)a1 + 8);
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v7, a2, a3);
  EtwTraceBeginCallback(63LL);
  v4 = KeUserModeCallback(63LL, &v9, 72LL, Src, &v6);
  EtwTraceEndCallback(63LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v7);
  *((_QWORD *)a1 + 3) = *((_QWORD *)&v10 + 1);
  if ( v4 < 0 || v6 != 24 )
    return 0LL;
  v7 = 0LL;
  RtlCopyFromUser(&v7, Src[0], 8uLL);
  result = v7;
  Src[1] = v7;
  return result;
}
