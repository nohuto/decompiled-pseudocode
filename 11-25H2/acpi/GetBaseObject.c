/*
 * XREFs of GetBaseObject @ 0x14001A7A0
 * Callers:
 *     DerefOf @ 0x140008B10 (DerefOf.c)
 *     ACPIInterruptDispatchEventDpc @ 0x140019BA0 (ACPIInterruptDispatchEventDpc.c)
 *     AMLIFindNameSpaceObject @ 0x14004C134 (AMLIFindNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x14006AB98 (AMLIEvalPackageElement.c)
 *     DebugRunMethod @ 0x14006E170 (DebugRunMethod.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetBaseObject(__int64 a1)
{
  while ( *(_WORD *)(a1 + 66) == 128 )
    a1 = *(_QWORD *)(a1 + 80);
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 112));
  return a1;
}
