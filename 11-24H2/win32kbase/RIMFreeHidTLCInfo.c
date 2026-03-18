/*
 * XREFs of RIMFreeHidTLCInfo @ 0x1401E32C0
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x140133A58 (RIMFreeSpecificDevWorker.c)
 *     rimObsStartStopDeviceRead @ 0x1401F0DA0 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1400C95A8 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x14012D12C (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall RIMFreeHidTLCInfo(PVOID **Buffer)
{
  __int64 UserSessionState; // rax
  PVOID *v3; // rcx
  PVOID *v4; // rax
  char v5; // [rsp+48h] [rbp+10h] BYREF

  UserSessionState = W32GetUserSessionState(Buffer);
  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
    (RIMLOCKExclusiveIfNeeded *)&v5,
    (struct RIMLOCK *)(UserSessionState + 104));
  if ( *((_DWORD *)Buffer + 5) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 209);
  if ( *((_DWORD *)Buffer + 6) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 210);
  if ( *((_DWORD *)Buffer + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 211);
  if ( *((_DWORD *)Buffer + 9) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 212);
  if ( *((_DWORD *)Buffer + 10) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 213);
  v3 = *Buffer;
  if ( (*Buffer)[1] != Buffer || (v4 = Buffer[1], *v4 != Buffer) )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = v4;
  if ( !*((_DWORD *)Buffer + 11) )
    GreDeleteFastMutex((char *)Buffer);
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v5);
}
