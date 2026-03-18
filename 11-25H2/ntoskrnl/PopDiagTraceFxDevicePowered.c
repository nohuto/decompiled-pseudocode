/*
 * XREFs of PopDiagTraceFxDevicePowered @ 0x14035956C
 * Callers:
 *     PopFxCompleteDevicePowerRequired @ 0x140359474 (PopFxCompleteDevicePowerRequired.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402576B0 (EtwpLevelKeywordEnabled.c)
 *     PopFxAddLogEntry @ 0x140359640 (PopFxAddLogEntry.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxDevicePowered(__int64 a1)
{
  char result; // al
  unsigned __int8 v2; // dl
  __int64 v3; // r8
  __int64 v4; // r9
  const GUID *ActivityId; // r10
  __int64 v6; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  v6 = a1;
  result = PopFxAddLogEntry(a1, 0LL, 7LL);
  if ( PopDiagHandleRegistered )
  {
    if ( PopDiagHandle )
    {
      result = EtwpLevelKeywordEnabled(*(_QWORD *)(PopDiagHandle + 32) + 96LL, 4u, 256LL);
      if ( result
        || *(_BYTE *)(v4 + 101) != (_BYTE)ActivityId
        && (result = EtwpLevelKeywordEnabled(*(_QWORD *)(v4 + 40) + 96LL, v2, v3)) != 0 )
      {
        UserData.Ptr = (ULONGLONG)&v6;
        *(_QWORD *)&UserData.Size = 8LL;
        return EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_DEVICE_POWERED, 0LL, 1u, ActivityId, ActivityId, 1u, &UserData);
      }
    }
  }
  return result;
}
