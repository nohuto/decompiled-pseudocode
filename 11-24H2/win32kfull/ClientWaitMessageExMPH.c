/*
 * XREFs of ClientWaitMessageExMPH @ 0x14016DE40
 * Callers:
 *     xxxWaitMessageEx @ 0x14016DD60 (xxxWaitMessageEx.c)
 *     NtUserWaitMessage @ 0x14016DDD0 (NtUserWaitMessage.c)
 * Callees:
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 */

__int64 __fastcall ClientWaitMessageExMPH(int a1, int a2)
{
  int v2; // ebx
  __int64 result; // rax
  _QWORD v4[5]; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+60h] [rbp+8h] BYREF
  int v6; // [rsp+70h] [rbp+18h] BYREF
  int v7; // [rsp+74h] [rbp+1Ch]
  void *Src; // [rsp+78h] [rbp+20h] BYREF

  Src = 0LL;
  v5 = 0;
  v6 = a1;
  v7 = a2;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v4);
  EtwTraceBeginCallback(89LL);
  v2 = KeUserModeCallback(89LL, &v6, 8LL, &Src, &v5);
  EtwTraceEndCallback(89LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v4);
  if ( v2 < 0 || v5 != 24 )
    return 0LL;
  v4[0] = 0LL;
  RtlCopyFromUser(v4, Src, 8uLL);
  result = v4[0];
  v4[1] = v4[0];
  return result;
}
