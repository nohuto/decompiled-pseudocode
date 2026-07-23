/*
 * XREFs of PoTraceSystemTimerResolutionKernel @ 0x140410FE0
 * Callers:
 *     KiSetClockIntervalOneShot @ 0x1402AC34C (KiSetClockIntervalOneShot.c)
 *     KiResetClockIntervalOneShot @ 0x1402AD63C (KiResetClockIntervalOneShot.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x140317740 (ExpUpdateTimerConfigurationWorker.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1403183C8 (KiSetClockIntervalToMinimumRequested.c)
 *     ExSetTimerResolution @ 0x140410F10 (ExSetTimerResolution.c)
 *     KiSetClockInterval @ 0x140463DB4 (KiSetClockInterval.c)
 *     KiResetClockInterval @ 0x1405B7B04 (KiResetClockInterval.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402D1760 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
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
  v4 = (__int64 *)&POP_ETW_EVENT_KERNEL_STRS_INTERNAL;
  if ( !a3 )
    v4 = POP_ETW_EVENT_KERNEL_STRS;
  if ( PopDiagHandleRegistered )
  {
    if ( PopDiagHandle )
    {
      LOBYTE(v3) = EtwpLevelKeywordEnabled(*(_QWORD *)(PopDiagHandle + 32) + 96LL, *((_BYTE *)v4 + 4), v4[1]);
      if ( (_BYTE)v3
        || *(_WORD *)(v5 + 102) != (_WORD)ActivityId
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
