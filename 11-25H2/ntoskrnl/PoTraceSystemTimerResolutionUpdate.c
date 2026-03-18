/*
 * XREFs of PoTraceSystemTimerResolutionUpdate @ 0x140276BA8
 * Callers:
 *     ExpUpdateTimerResolution @ 0x140276C80 (ExpUpdateTimerResolution.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402576B0 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

char PoTraceSystemTimerResolutionUpdate()
{
  char result; // al
  unsigned __int8 v1; // dl
  __int64 v2; // r8
  __int64 v3; // r9
  const GUID *ActivityId; // r10
  int v5; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  result = KePseudoHrTimeIncrement;
  v5 = KePseudoHrTimeIncrement;
  if ( PopDiagHandleRegistered )
  {
    if ( PopDiagHandle )
    {
      result = EtwpLevelKeywordEnabled(*(_QWORD *)(PopDiagHandle + 32) + 96LL, 4u, 0x4000000000004004LL);
      if ( result
        || *(_BYTE *)(v3 + 101) != (_BYTE)ActivityId
        && (result = EtwpLevelKeywordEnabled(*(_QWORD *)(v3 + 40) + 96LL, v1, v2)) != 0 )
      {
        UserData.Ptr = (ULONGLONG)&v5;
        *(_QWORD *)&UserData.Size = 4LL;
        return EtwWriteEx(
                 PopDiagHandle,
                 &POP_ETW_EVENT_TIME_RESOLUTION_UPDATE,
                 0LL,
                 0,
                 ActivityId,
                 ActivityId,
                 1u,
                 &UserData);
      }
    }
  }
  return result;
}
