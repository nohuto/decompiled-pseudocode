/*
 * XREFs of PopAdaptiveStandbyNotifyShellPhaseState @ 0x140761068
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1405D5CC0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwActivityIdControl @ 0x1404123E0 (EtwActivityIdControl.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     IoSetActivityIdThread @ 0x140451750 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140459F90 (IoClearActivityIdThread.c)
 *     SSHSupportIsPlatformAoAc @ 0x14048B408 (SSHSupportIsPlatformAoAc.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopAdaptiveStandbySessionStart @ 0x140761630 (PopAdaptiveStandbySessionStart.c)
 *     PopAdaptiveStandbySessionStop @ 0x1407619D0 (PopAdaptiveStandbySessionStop.c)
 */

char __fastcall PopAdaptiveStandbyNotifyShellPhaseState(char a1)
{
  char result; // al
  struct _LIST_ENTRY *v3; // rax
  char v4; // [rsp+30h] [rbp-9h] BYREF
  GUID ActivityId; // [rsp+38h] [rbp-1h] BYREF
  GUID *v6; // [rsp+48h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR v7[2]; // [rsp+50h] [rbp+17h] BYREF
  char *v8; // [rsp+70h] [rbp+37h]
  int v9; // [rsp+78h] [rbp+3Fh]
  int v10; // [rsp+7Ch] [rbp+43h]

  ActivityId = 0LL;
  v6 = 0LL;
  result = SSHSupportIsPlatformAoAc();
  if ( result )
  {
    EtwActivityIdControl(3u, &ActivityId);
    v3 = IoSetActivityIdThread((struct _LIST_ENTRY *)&ActivityId);
    v6 = (GUID *)v3;
    if ( (unsigned int)dword_140E08218 > 5 )
    {
      v10 = 0;
      v8 = &v4;
      v4 = a1;
      v9 = 1;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E08218,
        (unsigned __int8 *)&dword_14004DF6C,
        &ActivityId,
        (const GUID *)v3,
        3u,
        v7);
    }
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopAdaptiveStandbyLock);
    if ( a1 )
      PopAdaptiveStandbySessionStart(&PopAdaptiveStandbyContext, 0LL);
    else
      PopAdaptiveStandbySessionStop(&PopAdaptiveStandbyContext, 1LL);
    PopReleaseRwLock(&PopAdaptiveStandbyLock);
    if ( (unsigned int)dword_140E08218 > 5 )
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E08218,
        (unsigned __int8 *)byte_14004EDCD,
        &ActivityId,
        v6,
        2u,
        v7);
    return (unsigned __int8)IoClearActivityIdThread((struct _LIST_ENTRY *)v6);
  }
  return result;
}
