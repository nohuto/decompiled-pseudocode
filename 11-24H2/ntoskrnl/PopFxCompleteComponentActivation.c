/*
 * XREFs of PopFxCompleteComponentActivation @ 0x140317240
 * Callers:
 *     PopFxProcessWork @ 0x1403172E0 (PopFxProcessWork.c)
 *     PopFxActivateComponentWorker @ 0x1403B6358 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x1404EB37C (PopFxIdleWorkerTail.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     PopFxDereferenceDevice @ 0x140376880 (PopFxDereferenceDevice.c)
 *     PopFxActivateComponentDependents @ 0x1403769A0 (PopFxActivateComponentDependents.c)
 *     PopFxIdleComponent @ 0x1403B4888 (PopFxIdleComponent.c)
 *     Feature_Servicing_PofxCriticalRegionFix__private_IsEnabledDeviceUsageNoInline @ 0x1405CFD88 (Feature_Servicing_PofxCriticalRegionFix__private_IsEnabledDeviceUsageNoInline.c)
 *     PopFxDeviceCriticalRegionEnter @ 0x1405D0E60 (PopFxDeviceCriticalRegionEnter.c)
 *     PopFxDeviceCriticalRegionLeave @ 0x1405D0E90 (PopFxDeviceCriticalRegionLeave.c)
 */

__int64 __fastcall PopFxCompleteComponentActivation(ULONG_PTR BugCheckParameter2, __int64 a2, char a3)
{
  __int64 result; // rax

  if ( (unsigned int)Feature_Servicing_PofxCriticalRegionFix__private_IsEnabledDeviceUsageNoInline() )
    PopFxDeviceCriticalRegionEnter(BugCheckParameter2);
  _InterlockedOr((volatile signed __int32 *)(a2 + 88), 0x80000000);
  KeSetEvent((PRKEVENT)(a2 + 104), 0, 0);
  if ( a3 )
    PopFxActivateComponentDependents(a2);
  PopFxIdleComponent(BugCheckParameter2, *(unsigned int *)(a2 + 16));
  PopFxDereferenceDevice(BugCheckParameter2, 8LL);
  result = Feature_Servicing_PofxCriticalRegionFix__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
    return PopFxDeviceCriticalRegionLeave(BugCheckParameter2);
  return result;
}
