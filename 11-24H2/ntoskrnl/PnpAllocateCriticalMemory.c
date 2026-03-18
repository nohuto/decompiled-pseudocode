/*
 * XREFs of PnpAllocateCriticalMemory @ 0x140A0D890
 * Callers:
 *     PnpQueueQueryAndRemoveEvent @ 0x1408B2EAC (PnpQueueQueryAndRemoveEvent.c)
 *     PnpResizeTargetDeviceBlock @ 0x140A0D5A4 (PnpResizeTargetDeviceBlock.c)
 *     PnpCompileDeviceInstancePaths @ 0x140A0D674 (PnpCompileDeviceInstancePaths.c)
 *     IopAllocateRelationList @ 0x140A0D7B8 (IopAllocateRelationList.c)
 *     PiAllocateDeviceObjectList @ 0x140A0D820 (PiAllocateDeviceObjectList.c)
 *     PiEventAllocateVetoBuffer @ 0x140A0E248 (PiEventAllocateVetoBuffer.c)
 *     PiProcessQueryAndCancelRemoval @ 0x140A0E460 (PiProcessQueryAndCancelRemoval.c)
 *     PiEventBuildPdoList @ 0x140A0E694 (PiEventBuildPdoList.c)
 *     PnpRequestDeviceRemoval @ 0x140A1132C (PnpRequestDeviceRemoval.c)
 *     PnpSetTargetDeviceRemove @ 0x140A8F494 (PnpSetTargetDeviceRemove.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpAllocateCriticalMemory(int a1, ULONG_PTR a2)
{
  __int64 result; // rax
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-18h] BYREF

  result = ExAllocatePool2(a2);
  if ( !result && a1 )
  {
    do
    {
      if ( a1 == 4 )
        break;
      Interval.QuadPart = -10000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      result = ExAllocatePool2(a2);
    }
    while ( !result );
  }
  return result;
}
