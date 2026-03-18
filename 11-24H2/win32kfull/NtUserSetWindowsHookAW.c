/*
 * XREFs of NtUserSetWindowsHookAW @ 0x14029F6E0
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?zzzSetWindowsHookAW@@YAP6A_JXZHP6A_JXZW4tagHookFlags@@@Z @ 0x140283BD0 (-zzzSetWindowsHookAW@@YAP6A_JXZHP6A_JXZW4tagHookFlags@@@Z.c)
 *     ?zzzSetWindowsHookAW_New@@YAPEAUHHOOK__@@HP6A_JXZW4tagHookFlags@@@Z @ 0x140283C58 (-zzzSetWindowsHookAW_New@@YAPEAUHHOOK__@@HP6A_JXZW4tagHookFlags@@@Z.c)
 *     Feature_656357688__private_IsEnabledDeviceUsageNoInline @ 0x140292480 (Feature_656357688__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtUserSetWindowsHookAW(unsigned int a1, __int64 a2, int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 *v8; // rax

  EnterSharedCrit(0LL, 1LL);
  if ( a3 && (a3 & 0xFFFFFFBD) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6671);
  if ( (unsigned int)Feature_656357688__private_IsEnabledDeviceUsageNoInline() )
  {
    v7 = zzzSetWindowsHookAW_New(a1, a2, a3);
  }
  else
  {
    v8 = (__int64 *)zzzSetWindowsHookAW(a1, a2, a3);
    v7 = (__int64)v8;
    if ( v8 != (__int64 *)-1LL )
    {
      v7 = 0LL;
      if ( v8 )
        v7 = *v8;
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
