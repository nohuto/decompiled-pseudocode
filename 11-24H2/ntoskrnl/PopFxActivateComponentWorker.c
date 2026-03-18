/*
 * XREFs of PopFxActivateComponentWorker @ 0x1403B6358
 * Callers:
 *     PopFxActivateComponent @ 0x1403B61EC (PopFxActivateComponent.c)
 *     PopFxIdleWorkerTail @ 0x1404EB37C (PopFxIdleWorkerTail.c)
 * Callees:
 *     PopFxReferenceDevice @ 0x14029F788 (PopFxReferenceDevice.c)
 *     PopFxCompleteComponentActivation @ 0x140317240 (PopFxCompleteComponentActivation.c)
 *     PopFxProcessWork @ 0x1403172E0 (PopFxProcessWork.c)
 *     PopPluginComponentActive @ 0x140317CC0 (PopPluginComponentActive.c)
 *     PopFxActivateComponentDependencies @ 0x1403B5F40 (PopFxActivateComponentDependencies.c)
 *     Feature_Servicing_PofxCriticalRegionFix__private_IsEnabledDeviceUsageNoInline @ 0x1405CFD88 (Feature_Servicing_PofxCriticalRegionFix__private_IsEnabledDeviceUsageNoInline.c)
 *     PopFxDeviceCriticalRegionEnter @ 0x1405D0E60 (PopFxDeviceCriticalRegionEnter.c)
 *     PopFxDeviceCriticalRegionLeave @ 0x1405D0E90 (PopFxDeviceCriticalRegionLeave.c)
 */

__int64 __fastcall PopFxActivateComponentWorker(ULONG_PTR BugCheckParameter2, __int64 a2, char a3, unsigned int *a4)
{
  bool v8; // al
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 result; // rax

  if ( (unsigned int)Feature_Servicing_PofxCriticalRegionFix__private_IsEnabledDeviceUsageNoInline() )
    PopFxDeviceCriticalRegionEnter(BugCheckParameter2);
  PopFxReferenceDevice(BugCheckParameter2, 8);
  v8 = PopFxActivateComponentDependencies(a2);
  if ( a3 )
  {
    PopFxCompleteComponentActivation(BugCheckParameter2, a2, 0);
  }
  else if ( v8 )
  {
    LOBYTE(v9) = 1;
    if ( (unsigned __int8)PopPluginComponentActive(BugCheckParameter2, *(_DWORD *)(a2 + 16), v9, a4) == 1 )
      PopFxProcessWork(0LL, a4, v10, v11);
  }
  result = Feature_Servicing_PofxCriticalRegionFix__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
    return PopFxDeviceCriticalRegionLeave(BugCheckParameter2);
  return result;
}
