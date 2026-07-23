/*
 * XREFs of RtlQueryInternalFeatureConfiguration @ 0x1405E67B0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetEffectiveIrql @ 0x1402883D0 (KeGetEffectiveIrql.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x140496128 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1404975C8 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x1406F7B64 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 *     RtlpFcGetBufferManager @ 0x1406F9D20 (RtlpFcGetBufferManager.c)
 */

__int64 __fastcall RtlQueryInternalFeatureConfiguration(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v6; // ebp
  unsigned int v7; // r14d
  unsigned __int64 *BufferManager; // rsi
  int FeatureConfigurationFromBufferSet; // eax
  unsigned int v11; // ebx
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+28h] [rbp-10h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v6 = a2;
  v7 = a1;
  if ( KeGetEffectiveIrql(a1, a2) > 1u && ((KiBugCheckActive & 3) != 0 || PoPowerDownActionInProgress) )
    return 2147483682LL;
  BufferManager = (unsigned __int64 *)RtlpFcGetBufferManager();
  RtlpFcBufferManagerReferenceBuffers((__int64)BufferManager, (__int64)&v12, &v13);
  FeatureConfigurationFromBufferSet = RtlpFcQueryFeatureConfigurationFromBufferSet(v13, v7, v6, a4);
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
