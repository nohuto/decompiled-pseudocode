/*
 * XREFs of SmHwAcceleratorPartitionMgrWakeDescriptorWaiters @ 0x140603A78
 * Callers:
 *     SmHwAcceleratorPartitionMgrFreeDescriptor @ 0x1404CDE68 (SmHwAcceleratorPartitionMgrFreeDescriptor.c)
 *     SmHwAcceleratorMgrHotRemoveAccelerator @ 0x14060362C (SmHwAcceleratorMgrHotRemoveAccelerator.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 */

LONG __fastcall SmHwAcceleratorPartitionMgrWakeDescriptorWaiters(__int64 *a1)
{
  __int64 v2; // rcx
  LONG result; // eax

  while ( 1 )
  {
    v2 = *a1;
    if ( !*a1 )
      break;
    *a1 = *(_QWORD *)v2;
    result = KeSetEvent((PRKEVENT)(v2 + 8), 0, 0);
  }
  return result;
}
