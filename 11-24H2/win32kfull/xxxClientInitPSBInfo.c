/*
 * XREFs of xxxClientInitPSBInfo @ 0x1402BC5D8
 * Callers:
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 * Callees:
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 */

__int64 __fastcall xxxClientInitPSBInfo(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  int v5; // [rsp+50h] [rbp+8h] BYREF
  void *Src; // [rsp+58h] [rbp+10h] BYREF
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  Src = 0LL;
  v5 = 0;
  v8 = a1;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v7, a2, a3);
  EtwTraceBeginCallback(133LL);
  v3 = KeUserModeCallback(133LL, &v8, 8LL, &Src, &v5);
  EtwTraceEndCallback(133LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v7);
  if ( v3 < 0 || v5 != 24 )
    return 0LL;
  v7 = 0LL;
  RtlCopyFromUser(&v7, Src, 8uLL);
  return v7;
}
