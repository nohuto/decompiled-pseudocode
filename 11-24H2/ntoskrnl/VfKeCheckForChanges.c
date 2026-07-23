/*
 * XREFs of VfKeCheckForChanges @ 0x140B97FFC
 * Callers:
 *     VfInitVerifierComponents @ 0x140B85AD0 (VfInitVerifierComponents.c)
 *     VfSettingsCheckForChanges @ 0x140B9D260 (VfSettingsCheckForChanges.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     ExAllocatePool3 @ 0x140B76270 (ExAllocatePool3.c)
 */

void __fastcall VfKeCheckForChanges(char a1)
{
  void *Pool3; // rax
  void *v2; // rax

  if ( (a1 & 2) != 0 )
  {
    if ( !ViTrackIrqlQueue && VfVerifyMode >= 3 )
    {
      Pool3 = (void *)ExAllocatePool3(
                        0x40uLL,
                        56LL * (unsigned int)ViTrackIrqlQueueLength,
                        0x6C717249u,
                        (__int64)&VfExtendedParameters,
                        1u);
      if ( Pool3 )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ViTrackIrqlQueue, (signed __int64)Pool3, 0LL) )
          ExFreePoolWithTag(Pool3, 0);
      }
    }
    if ( !VfKeCriticalRegionTraces )
    {
      v2 = (void *)ExAllocatePool3(
                     0x40uLL,
                     (unsigned __int64)(unsigned int)VfKeCriticalRegionTracesLength << 6,
                     0x52436656u,
                     (__int64)&VfExtendedParameters,
                     1u);
      if ( v2 )
      {
        if ( _InterlockedCompareExchange64(
               (volatile signed __int64 *)&VfKeCriticalRegionTraces,
               (signed __int64)v2,
               0LL) )
        {
          ExFreePoolWithTag(v2, 0);
        }
      }
    }
  }
}
