/*
 * XREFs of PopCapturePlatformRole @ 0x140A6D278
 * Callers:
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 *     PopConfigureHeteroPolicies @ 0x140A20E1C (PopConfigureHeteroPolicies.c)
 *     PopDripsWatchdogInitialize @ 0x140C224E0 (PopDripsWatchdogInitialize.c)
 * Callees:
 *     <none>
 */

__int64 PopCapturePlatformRole()
{
  __int64 result; // rax
  int v1; // ecx
  unsigned __int32 v2; // ecx

  result = (unsigned int)PopPlatformRole;
  v1 = 0;
  if ( !PopPlatformRole )
  {
    LOBYTE(v1) = dword_140F0AAB0 != 0;
    v2 = v1 + 1;
    result = (unsigned int)_InterlockedCompareExchange(&PopPlatformRole, v2, 0);
    if ( !(_DWORD)result )
      return v2;
  }
  return result;
}
