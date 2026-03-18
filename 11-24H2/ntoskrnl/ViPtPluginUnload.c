/*
 * XREFs of ViPtPluginUnload @ 0x140B8CA50
 * Callers:
 *     VfPoolTrackingEntry @ 0x140611370 (VfPoolTrackingEntry.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 *     ExClearPoolFlags @ 0x140653E60 (ExClearPoolFlags.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     ViPtDeleteAvlTrees @ 0x140B8C740 (ViPtDeleteAvlTrees.c)
 */

void ViPtPluginUnload()
{
  ExClearPoolFlags(16);
  if ( (VfOptionFlags & 0x1000) != 0 )
    ViPtDeleteAvlTrees();
  if ( VfPoolTraces )
  {
    ExWaitForRundownProtectionRelease(&ViPtUnloadRundown);
    ExFreePoolWithTag(VfPoolTraces, 0x6E496956u);
    VfPoolTraces = 0LL;
    _InterlockedExchange64((volatile __int64 *)&ViPtUnloadRundown, 1LL);
  }
  VfPoolTracesLength = 0;
  VfPoolTracesIndex = 0;
}
