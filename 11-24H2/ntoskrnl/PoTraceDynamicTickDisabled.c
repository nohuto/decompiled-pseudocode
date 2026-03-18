/*
 * XREFs of PoTraceDynamicTickDisabled @ 0x1405D42B4
 * Callers:
 *     KeInitializeClock @ 0x140C60350 (KeInitializeClock.c)
 * Callees:
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
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
