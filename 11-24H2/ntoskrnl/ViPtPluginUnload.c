/*
 * XREFs of ViPtPluginUnload @ 0x140B8EA50
 * Callers:
 *     VfPoolTrackingEntry @ 0x14060F930 (VfPoolTrackingEntry.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     ExClearPoolFlags @ 0x1406525C0 (ExClearPoolFlags.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     ViPtDeleteAvlTrees @ 0x140B8E740 (ViPtDeleteAvlTrees.c)
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
