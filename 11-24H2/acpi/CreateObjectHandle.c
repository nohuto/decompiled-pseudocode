/*
 * XREFs of CreateObjectHandle @ 0x14001A7CC
 * Callers:
 *     ACPIIoctlEvalPreProcessingV1 @ 0x140010F68 (ACPIIoctlEvalPreProcessingV1.c)
 *     AMLIGetParentNoLock @ 0x140016104 (AMLIGetParentNoLock.c)
 *     ACPIInterruptDispatchEventDpc @ 0x140019BA0 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x14001B450 (ACPIIoctlEvalPreProcessingV2.c)
 *     AMLIGetFieldUnitRegionObj @ 0x140023B60 (AMLIGetFieldUnitRegionObj.c)
 *     AMLIGetNextSiblingNoLock @ 0x140040F68 (AMLIGetNextSiblingNoLock.c)
 *     AMLIGetFirstChildNoLock @ 0x140040FEC (AMLIGetFirstChildNoLock.c)
 *     ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice @ 0x140055404 (ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CreateObjectHandle(__int64 a1)
{
  __int64 result; // rax

  dword_1400890B8 = 0;
  result = a1 + 120;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 128));
  return result;
}
