/*
 * XREFs of RtlQueryInternalFeatureConfiguration @ 0x1405E9260
 * Callers:
 *     <none>
 * Callees:
 *     KeGetEffectiveIrql @ 0x140257DC0 (KeGetEffectiveIrql.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1403A68E8 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1403A6924 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x1406F9F24 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 *     RtlpFcGetBufferManager @ 0x1406FC0E0 (RtlpFcGetBufferManager.c)
 */

__int64 __fastcall RtlQueryInternalFeatureConfiguration(unsigned int a1, unsigned int a2, _QWORD *a3, __int64 a4)
{
  volatile signed __int64 *BufferManager; // rsi
  int FeatureConfigurationFromBufferSet; // eax
  unsigned int v11; // ebx
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+28h] [rbp-10h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  if ( KeGetEffectiveIrql() > 1u && ((KiBugCheckActive & 3) != 0 || PoPowerDownActionInProgress) )
    return 2147483682LL;
  BufferManager = (volatile signed __int64 *)RtlpFcGetBufferManager();
  RtlpFcBufferManagerReferenceBuffers((__int64)BufferManager, (__int64)&v12, &v13);
  FeatureConfigurationFromBufferSet = RtlpFcQueryFeatureConfigurationFromBufferSet(v13, a1, a2, a4);
  v11 = FeatureConfigurationFromBufferSet;
  if ( FeatureConfigurationFromBufferSet >= 0 )
  {
    v11 = 0;
    *a3 = v12;
  }
  else if ( FeatureConfigurationFromBufferSet == -1073741275 || FeatureConfigurationFromBufferSet == -2147483614 )
  {
    *a3 = v12;
  }
  RtlpFcBufferManagerDereferenceBuffers(BufferManager, v13);
  return v11;
}
