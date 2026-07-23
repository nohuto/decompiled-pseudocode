/*
 * XREFs of HalpInterruptDetermineProcessorStartupFlags @ 0x140556D3C
 * Callers:
 *     HalpInterruptSetProcessorStartContext @ 0x14053F770 (HalpInterruptSetProcessorStartContext.c)
 * Callees:
 *     Feature_ProcessorStartupCacheFlushOptimization__private_IsEnabledDeviceUsageNoInline @ 0x14053F994 (Feature_ProcessorStartupCacheFlushOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     HalpInterruptIsProcessorCacheFlushOptimizationSupported @ 0x140556E3C (HalpInterruptIsProcessorCacheFlushOptimizationSupported.c)
 *     KeForceEnableNx @ 0x140B59890 (KeForceEnableNx.c)
 */

__int64 __fastcall HalpInterruptDetermineProcessorStartupFlags(int a1)
{
  int v2; // edi
  unsigned int v3; // ebx
  _DWORD *i; // rcx

  v2 = 0;
  v3 = (unsigned __int8)KeForceEnableNx() != 0;
  if ( HalpInterruptProcessorHidden )
    v3 |= 4u;
  if ( (unsigned int)Feature_ProcessorStartupCacheFlushOptimization__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( (unsigned __int8)HalpInterruptIsProcessorCacheFlushOptimizationSupported() )
    {
      v3 |= 8u;
      if ( a1 != -1 )
      {
        if ( dword_140F8FA54 )
        {
          for ( i = (_DWORD *)qword_140F8FA58; (a1 & i[1]) != *i; i += 2 )
          {
            if ( ++v2 >= (unsigned int)dword_140F8FA54 )
              return v3;
          }
          v3 |= 0x10u;
        }
      }
    }
  }
  return v3;
}
