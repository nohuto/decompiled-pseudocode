/*
 * XREFs of PopDirectedDripsDiagTraceProblemDevice @ 0x140763F0C
 * Callers:
 *     PopDirectedDripsBuildBroadcastTreeFull @ 0x140764520 (PopDirectedDripsBuildBroadcastTreeFull.c)
 *     PopDirectedDripsBuildPs4BroadcastTree @ 0x140764840 (PopDirectedDripsBuildPs4BroadcastTree.c)
 *     PopDirectedDripsVisitPs4Device @ 0x140764A90 (PopDirectedDripsVisitPs4Device.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopDirectedDripsDiagInsertErrorRecord @ 0x140A98B38 (PopDirectedDripsDiagInsertErrorRecord.c)
 */

__int64 __fastcall PopDirectedDripsDiagTraceProblemDevice(__int64 a1, __int64 a2, unsigned int a3)
{
  char *v4; // rax
  signed __int8 v5; // cf
  char *v6; // rbx
  __int64 v7; // rbx
  unsigned int v9; // [rsp+30h] [rbp-50h] BYREF
  __int64 v10; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v12; // [rsp+50h] [rbp-30h]
  int v13; // [rsp+58h] [rbp-28h]
  int v14; // [rsp+5Ch] [rbp-24h]
  unsigned int *v15; // [rsp+60h] [rbp-20h]
  int v16; // [rsp+68h] [rbp-18h]
  int v17; // [rsp+6Ch] [rbp-14h]

  v10 = a1;
  v9 = a3;
  v4 = (char *)KeAbPreAcquire((__int64)&PopDirectedDripsDiagLock, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&PopDirectedDripsDiagLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&PopDirectedDripsDiagLock, v4, (__int64)&PopDirectedDripsDiagLock);
  if ( v6 )
    v6[10] = 1;
  v7 = *(_QWORD *)(v10 + 776);
  if ( a2 )
  {
    ++*(_DWORD *)(a2 + 4LL * (int)v9 + 192);
    if ( !v7 )
      goto LABEL_12;
    PopDirectedDripsDiagInsertErrorRecord(a2, v7, v9);
  }
  else if ( !v7 )
  {
    goto LABEL_12;
  }
  *(_DWORD *)(v7 + 152) |= 1 << v9;
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_PROBLEM_DEVICE) )
  {
    UserData.Reserved = 0;
    v14 = 0;
    v17 = 0;
    UserData.Ptr = v7 + 148;
    UserData.Size = 4;
    v12 = &v10;
    v15 = &v9;
    v16 = 4;
    v13 = 8;
    EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_PROBLEM_DEVICE, 0LL, 3u, &UserData);
  }
LABEL_12:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock);
  return KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
}
