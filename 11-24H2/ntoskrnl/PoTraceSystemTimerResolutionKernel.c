/*
 * XREFs of PoTraceSystemTimerResolutionKernel @ 0x1402A18F4
 * Callers:
 *     KiSetClockIntervalOneShot @ 0x14029D85C (KiSetClockIntervalOneShot.c)
 *     KiResetClockIntervalOneShot @ 0x14029EB4C (KiResetClockIntervalOneShot.c)
 *     KiSetClockInterval @ 0x14029F358 (KiSetClockInterval.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x14029FDD0 (ExpUpdateTimerConfigurationWorker.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1402A0A58 (KiSetClockIntervalToMinimumRequested.c)
 *     ExSetTimerResolution @ 0x14041D420 (ExSetTimerResolution.c)
 *     KiResetClockInterval @ 0x1405BA4D4 (KiResetClockInterval.c)
 * Callees:
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402A2030 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

int __fastcall PoTraceSystemTimerResolutionKernel(int a1, __int64 a2, char a3)
{
  __int64 *v3; // rax
  __int64 *v4; // r10
  __int64 v5; // rdx
  __int64 v6; // r9
  const EVENT_DESCRIPTOR *v7; // r10
  const GUID *ActivityId; // r11
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  int *v11; // [rsp+50h] [rbp-28h]
  __int64 v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+80h] [rbp+8h] BYREF
  int v14; // [rsp+88h] [rbp+10h] BYREF

  v14 = a2;
  v13 = a1;
  v3 = POP_ETW_EVENT_KERNEL_STRS;
  v4 = (__int64 *)&POP_ETW_EVENT_KERNEL_STRS_INTERNAL;
  if ( !a3 )
    v4 = POP_ETW_EVENT_KERNEL_STRS;
  if ( PopDiagHandleRegistered )
  {
    if ( PopDiagHandle )
    {
      LOBYTE(a2) = *((_BYTE *)v4 + 4);
      LODWORD(v3) = EtwpLevelKeywordEnabled(*(_QWORD *)(PopDiagHandle + 32) + 96LL, a2, v4[1], PopDiagHandle);
      if ( (_BYTE)v3
        || *(_WORD *)(v6 + 102) != (_WORD)ActivityId
        && (LOBYTE(v5) = v7->Level,
            LODWORD(v3) = EtwpLevelKeywordEnabled(*(_QWORD *)(v6 + 40) + 96LL, v5, v7->Keyword, v6),
            (_BYTE)v3) )
      {
        UserData.Ptr = (ULONGLONG)&v13;
        *(_QWORD *)&UserData.Size = 4LL;
        v11 = &v14;
        v12 = 4LL;
        LODWORD(v3) = EtwWriteEx(PopDiagHandle, v7, 0LL, 0, ActivityId, ActivityId, 2u, &UserData);
      }
    }
  }
  return (int)v3;
}
