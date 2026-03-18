/*
 * XREFs of PoTraceSystemTimerResolutionKernel @ 0x140276EBC
 * Callers:
 *     KiSetClockIntervalOneShot @ 0x140274DA0 (KiSetClockIntervalOneShot.c)
 *     KiResetClockIntervalOneShot @ 0x140274F28 (KiResetClockIntervalOneShot.c)
 *     KiSetClockInterval @ 0x14027614C (KiSetClockInterval.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x140277560 (ExpUpdateTimerConfigurationWorker.c)
 *     KiSetNextClockTickDueTime @ 0x140277974 (KiSetNextClockTickDueTime.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x140277C78 (KiSetClockIntervalToMinimumRequested.c)
 *     ExSetTimerResolution @ 0x140494CB0 (ExSetTimerResolution.c)
 *     KiResetClockInterval @ 0x1405B66B0 (KiResetClockInterval.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402576B0 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

char __fastcall PoTraceSystemTimerResolutionKernel(int a1, int a2, char a3)
{
  __int64 *v3; // rax
  __int64 *v4; // r10
  __int64 v5; // r9
  const EVENT_DESCRIPTOR *v6; // r10
  const GUID *ActivityId; // r11
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  int *v10; // [rsp+50h] [rbp-28h]
  __int64 v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+80h] [rbp+8h] BYREF
  int v13; // [rsp+88h] [rbp+10h] BYREF

  v13 = a2;
  v12 = a1;
  v3 = POP_ETW_EVENT_KERNEL_STRS;
  v4 = POP_ETW_EVENT_KERNEL_STRS_INTERNAL;
  if ( !a3 )
    v4 = POP_ETW_EVENT_KERNEL_STRS;
  if ( PopDiagHandleRegistered )
  {
    if ( PopDiagHandle )
    {
      LOBYTE(v3) = EtwpLevelKeywordEnabled(*(_QWORD *)(PopDiagHandle + 32) + 96LL, *((_BYTE *)v4 + 4), v4[1]);
      if ( (_BYTE)v3
        || *(_BYTE *)(v5 + 101) != (_BYTE)ActivityId
        && (LOBYTE(v3) = EtwpLevelKeywordEnabled(*(_QWORD *)(v5 + 40) + 96LL, v6->Level, v6->Keyword), (_BYTE)v3) )
      {
        UserData.Ptr = (ULONGLONG)&v12;
        *(_QWORD *)&UserData.Size = 4LL;
        v10 = &v13;
        v11 = 4LL;
        LOBYTE(v3) = EtwWriteEx(PopDiagHandle, v6, 0LL, 0, ActivityId, ActivityId, 2u, &UserData);
      }
    }
  }
  return (char)v3;
}
