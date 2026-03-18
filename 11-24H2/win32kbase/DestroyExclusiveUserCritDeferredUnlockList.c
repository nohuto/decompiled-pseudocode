/*
 * XREFs of DestroyExclusiveUserCritDeferredUnlockList @ 0x14016AAC8
 * Callers:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     NtUserGetHDevName @ 0x140095CC0 (NtUserGetHDevName.c)
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1400F50DC (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     LeaveCrit @ 0x140162A80 (LeaveCrit.c)
 *     NtUserGetKeyState @ 0x14016CDE0 (NtUserGetKeyState.c)
 * Callees:
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

int *__fastcall DestroyExclusiveUserCritDeferredUnlockList(__int64 a1)
{
  unsigned int v2; // esi
  int *result; // rax
  int *v4; // rax
  int **v5; // rdi

  v2 = 0;
  if ( *(_DWORD *)(a1 + 76) )
    result = (int *)MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4711LL);
  *(_DWORD *)(a1 + 76) = 1;
  if ( *(_QWORD *)(a1 + 80) )
    result = (int *)MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4714LL);
  while ( 1 )
  {
    v5 = *(int ***)(a1 + 32);
    if ( !v5 )
      break;
    *(_QWORD *)(a1 + 32) = v5[2];
    v4 = *v5;
    v5[2] = 0LL;
    if ( !v4[2] )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4727LL);
    if ( (unsigned int)(*v5)[2] > 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 4738LL);
    result = HMUnlockObject(*v5);
    ++v2;
  }
  if ( v2 > *(_DWORD *)(a1 + 88) )
    result = (int *)MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4754LL);
  if ( v2 != *(_DWORD *)(a1 + 92) )
    result = (int *)MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4755LL);
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 76) = 0;
  return result;
}
