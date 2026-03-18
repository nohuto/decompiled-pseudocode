/*
 * XREFs of xxxClientCharToWchar @ 0x1402BB8D4
 * Callers:
 *     EditionClientCharToWchar @ 0x1402907C0 (EditionClientCharToWchar.c)
 * Callees:
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 */

__int64 __fastcall xxxClientCharToWchar(__int16 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int16 v5; // [rsp+50h] [rbp+8h] BYREF
  __int16 v6; // [rsp+52h] [rbp+Ah]
  int v7; // [rsp+58h] [rbp+10h] BYREF
  void *Src; // [rsp+60h] [rbp+18h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  Src = 0LL;
  v7 = 0;
  v5 = a1;
  v6 = a2;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v9, a2, a3);
  EtwTraceBeginCallback(82LL);
  v3 = KeUserModeCallback(82LL, &v5, 4LL, &Src, &v7);
  EtwTraceEndCallback(82LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v9);
  if ( v3 < 0 || v7 != 24 )
    return 95LL;
  v9 = 0LL;
  RtlCopyFromUser(&v9, Src, 8uLL);
  return v9;
}
