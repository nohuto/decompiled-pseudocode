/*
 * XREFs of rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x14017C20C
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x140057F58 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x140058578 (rimAbSuppressLowerRankActivityInFrame.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1401D96B0 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 */

__int64 __fastcall rimAbIsPointerSuppressedByOtherActiveDevicesContacts(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD **v4; // rsi
  unsigned int v6; // edi
  _QWORD *i; // rbx
  __int64 v8; // r8

  v4 = (_QWORD **)(a1 + 448);
  v6 = 0;
  if ( !*(_DWORD *)(W32GetUserSessionState(a1) + 244) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 423LL);
  for ( i = *v4; i != v4; i = (_QWORD *)*i )
  {
    v8 = *(i - 1);
    if ( v8 != a2 && (unsigned int)rimAbIsPointerSuppressedByOtherDeviceContacts(a3, a2, v8, 1LL) )
      return 1;
  }
  return v6;
}
