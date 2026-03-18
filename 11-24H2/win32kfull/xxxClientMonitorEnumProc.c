/*
 * XREFs of xxxClientMonitorEnumProc @ 0x140183810
 * Callers:
 *     <none>
 * Callees:
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void *__fastcall xxxClientMonitorEnumProc(__int64 a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5)
{
  int v5; // ebx
  void *result; // rax
  int v7; // [rsp+30h] [rbp-68h] BYREF
  void *v8; // [rsp+38h] [rbp-60h] BYREF
  void *Src[3]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v10[2]; // [rsp+58h] [rbp-40h] BYREF
  __int128 v11; // [rsp+68h] [rbp-30h]
  __int64 v12; // [rsp+78h] [rbp-20h]
  __int64 v13; // [rsp+80h] [rbp-18h]

  Src[0] = 0LL;
  v7 = 0;
  v10[0] = a1;
  v10[1] = a2;
  v11 = *a3;
  v12 = a4;
  v13 = a5;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v8);
  EtwTraceBeginCallback(87LL);
  v5 = KeUserModeCallback(87LL, v10, 48LL, Src, &v7);
  EtwTraceEndCallback(87LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v8);
  if ( v5 < 0 || v7 != 24 )
    return 0LL;
  v8 = 0LL;
  RtlCopyFromUser(&v8, Src[0], 8uLL);
  result = v8;
  Src[1] = v8;
  return result;
}
