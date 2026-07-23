/*
 * XREFs of PnpAllocateCriticalMemory @ 0x1409BBC94
 * Callers:
 *     PnpQueueQueryAndRemoveEvent @ 0x1408B079C (PnpQueueQueryAndRemoveEvent.c)
 *     PnpResizeTargetDeviceBlock @ 0x1409BB9A8 (PnpResizeTargetDeviceBlock.c)
 *     PnpCompileDeviceInstancePaths @ 0x1409BBA78 (PnpCompileDeviceInstancePaths.c)
 *     IopAllocateRelationList @ 0x1409BBBBC (IopAllocateRelationList.c)
 *     PiAllocateDeviceObjectList @ 0x1409BBC24 (PiAllocateDeviceObjectList.c)
 *     PiEventAllocateVetoBuffer @ 0x1409BC64C (PiEventAllocateVetoBuffer.c)
 *     PiProcessQueryAndCancelRemoval @ 0x1409BC864 (PiProcessQueryAndCancelRemoval.c)
 *     PiEventBuildPdoList @ 0x1409BCA98 (PiEventBuildPdoList.c)
 *     PnpRequestDeviceRemoval @ 0x1409BF73C (PnpRequestDeviceRemoval.c)
 *     PnpSetTargetDeviceRemove @ 0x140A8BB2C (PnpSetTargetDeviceRemove.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpAllocateCriticalMemory(int a1, ULONG_PTR a2, ULONG_PTR a3, ULONG a4)
{
  __int64 result; // rax
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-18h] BYREF

  result = ExAllocatePool2(a2, a3, a4);
  if ( !result && a1 )
  {
    do
    {
      if ( a1 == 4 )
        break;
      Interval.QuadPart = -10000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      result = ExAllocatePool2(a2, a3, a4);
    }
    while ( !result );
  }
  return result;
}
