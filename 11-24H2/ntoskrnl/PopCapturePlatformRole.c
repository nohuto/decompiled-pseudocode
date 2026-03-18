/*
 * XREFs of PopCapturePlatformRole @ 0x140A6F480
 * Callers:
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 *     PopConfigureHeteroPolicies @ 0x140A2A938 (PopConfigureHeteroPolicies.c)
 *     PopDripsWatchdogInitialize @ 0x140C3371C (PopDripsWatchdogInitialize.c)
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
    LOBYTE(v1) = dword_140F0AE50 != 0;
    v2 = v1 + 1;
    result = (unsigned int)_InterlockedCompareExchange(&PopPlatformRole, v2, 0);
    if ( !(_DWORD)result )
      return v2;
  }
  return result;
}
