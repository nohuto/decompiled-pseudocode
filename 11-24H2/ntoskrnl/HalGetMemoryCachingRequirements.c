/*
 * XREFs of HalGetMemoryCachingRequirements @ 0x14047B010
 * Callers:
 *     PopGetHwConfigurationSignature @ 0x140B5EEA4 (PopGetHwConfigurationSignature.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140C10554 (HalpPowerInitFwPerformanceTableMappings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalGetMemoryCachingRequirements(unsigned __int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // r9d
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx

  v3 = 0;
  if ( !a3 )
    return 3221225485LL;
  *a3 = 0;
  while ( v3 < HalpCachingRequirementsEntryCount )
  {
    v5 = *(_QWORD *)(HalpCachingRequirements + 24LL * v3) << 12;
    if ( a1 >= v5 )
    {
      v6 = v5 + (*(_QWORD *)(HalpCachingRequirements + 24LL * v3 + 8) << 12);
      if ( a1 + a2 <= v6 )
      {
        *a3 = *(_DWORD *)(HalpCachingRequirements + 24LL * v3 + 16);
        return 0LL;
      }
      if ( a1 < v6 )
        return 3221225485LL;
    }
    ++v3;
  }
  return 3221225473LL;
}
