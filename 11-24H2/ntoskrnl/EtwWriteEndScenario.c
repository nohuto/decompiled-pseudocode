/*
 * XREFs of EtwWriteEndScenario @ 0x140A3D500
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x1405A2DCC (PnpCompleteSystemStartProcess.c)
 *     PopDiagTracePowerTransitionEnd @ 0x140AB4674 (PopDiagTracePowerTransitionEnd.c)
 *     PopGracefulShutdown @ 0x140B5DAF8 (PopGracefulShutdown.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     EtwGetProviderIdFromHandle @ 0x1404A8EF0 (EtwGetProviderIdFromHandle.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     WdipSemDisableScenario @ 0x140A3D910 (WdipSemDisableScenario.c)
 */

NTSTATUS __fastcall EtwWriteEndScenario(
        ULONG_PTR *RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        LPCGUID ActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  NTSTATUS result; // eax
  __int128 v10; // [rsp+30h] [rbp-58h] BYREF

  v10 = 0LL;
  if ( !EventDescriptor || !ActivityId )
    return -1073741811;
  if ( !EtwEventEnabled((REGHANDLE)RegHandle, EventDescriptor) )
    return -1073741816;
  result = EtwGetProviderIdFromHandle(RegHandle, 0, &v10);
  if ( result >= 0 )
  {
    if ( ActivityId->Data1
      || ActivityId->Data2
      || ActivityId->Data3
      || ActivityId->Data4[0]
      || ActivityId->Data4[1]
      || ActivityId->Data4[2]
      || ActivityId->Data4[3]
      || ActivityId->Data4[4]
      || ActivityId->Data4[5]
      || ActivityId->Data4[6]
      || ActivityId->Data4[7] )
    {
      if ( WdipSemEnabled )
        WdipSemDisableScenario(&v10, EventDescriptor->Id, ActivityId);
    }
    return EtwWrite((REGHANDLE)RegHandle, EventDescriptor, ActivityId, UserDataCount, UserData);
  }
  return result;
}
