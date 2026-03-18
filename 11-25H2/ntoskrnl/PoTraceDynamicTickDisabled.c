/*
 * XREFs of PoTraceDynamicTickDisabled @ 0x1405CF8F8
 * Callers:
 *     KeInitializeClock @ 0x140C4ECE8 (KeInitializeClock.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

BOOLEAN PoTraceDynamicTickDisabled()
{
  BOOLEAN result; // al
  char v1; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  result = KiDynamicTickDisableReason;
  v1 = KiDynamicTickDisableReason;
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DYNAMIC_TICK_DISABLED);
    if ( result )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v1;
      UserData.Size = 1;
      return EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_DYNAMIC_TICK_DISABLED, 0LL, 1u, 0LL, 0LL, 1u, &UserData);
    }
  }
  return result;
}
