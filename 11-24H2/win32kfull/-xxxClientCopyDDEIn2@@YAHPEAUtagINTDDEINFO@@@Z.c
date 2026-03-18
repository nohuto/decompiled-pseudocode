/*
 * XREFs of ?xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z @ 0x1402B8388
 * Callers:
 *     xxxClientCopyDDEIn1 @ 0x140215C30 (xxxClientCopyDDEIn1.c)
 * Callees:
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void *__fastcall xxxClientCopyDDEIn2(struct tagINTDDEINFO *a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  void *result; // rax
  int v5; // [rsp+30h] [rbp-98h] BYREF
  void *v6; // [rsp+38h] [rbp-90h] BYREF
  void *Src[4]; // [rsp+40h] [rbp-88h] BYREF
  _OWORD v8[4]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v9; // [rsp+A0h] [rbp-28h]

  Src[0] = 0LL;
  v5 = 0;
  v8[0] = *(_OWORD *)a1;
  v8[1] = *((_OWORD *)a1 + 1);
  v8[2] = *((_OWORD *)a1 + 2);
  v8[3] = *((_OWORD *)a1 + 3);
  v9 = *((_QWORD *)a1 + 8);
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v6, a2, a3);
  EtwTraceBeginCallback(61LL);
  v3 = KeUserModeCallback(61LL, v8, 72LL, Src, &v5);
  EtwTraceEndCallback(61LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v6);
  if ( v3 < 0 || v5 != 24 )
    return 0LL;
  v6 = 0LL;
  RtlCopyFromUser(&v6, Src[0], 8uLL);
  result = v6;
  Src[1] = v6;
  return result;
}
