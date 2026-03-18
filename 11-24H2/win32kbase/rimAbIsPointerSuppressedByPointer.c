/*
 * XREFs of rimAbIsPointerSuppressedByPointer @ 0x1401D99A4
 * Callers:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1401D96B0 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimAbIsPointInPenDeadzone @ 0x1401D957C (rimAbIsPointInPenDeadzone.c)
 */

char __fastcall rimAbIsPointerSuppressedByPointer(__int64 a1, _DWORD *a2, __int64 a3, int *a4, char a5)
{
  __int64 v9; // rcx
  int v10; // eax
  __int64 UserSessionState; // rax
  int v13; // r8d

  if ( !*(_DWORD *)(W32GetUserSessionState(a1) + 244) )
    return 0;
  v10 = *a4;
  if ( *a2 == *a4 )
    return 0;
  if ( *a2 != 5 )
  {
    if ( v10 == 5 )
      return 0;
    if ( (a2[3] & 2) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 230);
    if ( (a4[3] & 2) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 231);
    if ( (unsigned int)(*a2 - 2) > 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 232);
    if ( (unsigned int)(*a4 - 2) > 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 233);
    if ( *a2 == *a4 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 234);
    UserSessionState = W32GetUserSessionState(v9);
    switch ( *(_DWORD *)(UserSessionState + 244) )
    {
      case 1:
        if ( *a2 != 2 )
        {
          if ( *a2 != 3 )
          {
            v13 = 248;
            goto LABEL_44;
          }
          return 0;
        }
        if ( *a4 != 3 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 243);
        break;
      case 2:
        if ( *a2 != 2 )
        {
          if ( *a2 != 3 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 275);
          if ( *a4 != 2 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 276);
          if ( (a2[3] & 4) == 0 )
            return (unsigned int)rimAbIsPointInPenDeadzone(a3, (__int64)a4, a1, (__int64)a2) == 0;
          return 0;
        }
        if ( *a4 != 3 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 257);
        if ( (a4[3] & 4) == 0 )
          return (unsigned int)rimAbIsPointInPenDeadzone(a1, (__int64)a2, a3, (__int64)a4) != 0;
        break;
      case 3:
        if ( *a2 == 2 )
        {
          if ( *a4 != 3 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 298);
          return (unsigned int)rimAbIsPointInPenDeadzone(a1, (__int64)a2, a3, (__int64)a4) != 0;
        }
        if ( *a2 != 3 )
        {
          v13 = 309;
          goto LABEL_44;
        }
        return 0;
      default:
        v13 = 317;
LABEL_44:
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v13);
        return 0;
    }
    return 1;
  }
  if ( v10 == 5 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 216);
  return a5 ^ 1;
}
