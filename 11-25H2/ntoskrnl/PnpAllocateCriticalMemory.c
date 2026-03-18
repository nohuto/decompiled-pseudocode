/*
 * XREFs of PnpAllocateCriticalMemory @ 0x14082F488
 * Callers:
 *     PnpResizeTargetDeviceBlock @ 0x14082F19C (PnpResizeTargetDeviceBlock.c)
 *     PnpCompileDeviceInstancePaths @ 0x14082F26C (PnpCompileDeviceInstancePaths.c)
 *     IopAllocateRelationList @ 0x14082F3B0 (IopAllocateRelationList.c)
 *     PiAllocateDeviceObjectList @ 0x14082F418 (PiAllocateDeviceObjectList.c)
 *     PiEventAllocateVetoBuffer @ 0x1408301E8 (PiEventAllocateVetoBuffer.c)
 *     PiProcessQueryAndCancelRemoval @ 0x140830400 (PiProcessQueryAndCancelRemoval.c)
 *     PiEventBuildPdoList @ 0x140830634 (PiEventBuildPdoList.c)
 *     PnpRequestDeviceRemoval @ 0x140832268 (PnpRequestDeviceRemoval.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14096B044 (PnpQueueQueryAndRemoveEvent.c)
 *     PnpSetTargetDeviceRemove @ 0x140A8A4C4 (PnpSetTargetDeviceRemove.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
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
