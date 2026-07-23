/*
 * XREFs of ExRundownCompletedCacheAware @ 0x1404501B0
 * Callers:
 *     ExReInitializeRundownProtectionCacheAware @ 0x140450160 (ExReInitializeRundownProtectionCacheAware.c)
 *     MiDrainCrossPartitionUsage @ 0x14068B1E4 (MiDrainCrossPartitionUsage.c)
 * Callees:
 *     <none>
 */

void __stdcall ExRundownCompletedCacheAware(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  unsigned int v2; // r8d
  unsigned int Number; // ecx
  int v4; // edx

  v2 = 0;
  Number = RunRefCacheAware->Number;
  if ( Number )
  {
    do
    {
      v4 = v2 % Number;
      ++v2;
      _InterlockedExchange64(
        (volatile __int64 *)((char *)RunRefCacheAware->RunRefs + RunRefCacheAware->RunRefSize * v4),
        1LL);
      Number = RunRefCacheAware->Number;
    }
    while ( v2 < Number );
  }
}
