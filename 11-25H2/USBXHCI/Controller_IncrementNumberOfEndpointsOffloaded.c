/*
 * XREFs of Controller_IncrementNumberOfEndpointsOffloaded @ 0x140040954
 * Callers:
 *     UsbDevice_SetResourceAssignmentCompletion @ 0x140034A40 (UsbDevice_SetResourceAssignmentCompletion.c)
 *     UsbDevice_GetEndpointOffloadInformation @ 0x14003A950 (UsbDevice_GetEndpointOffloadInformation.c)
 * Callees:
 *     DynamicLock_Acquire @ 0x1400087C0 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x140008E60 (DynamicLock_Release.c)
 *     Interrupter_InitializeForOffload @ 0x1400491AC (Interrupter_InitializeForOffload.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_IncrementNumberOfEndpointsOffloaded(__int64 a1)
{
  __int64 v2; // rdx

  DynamicLock_Acquire(*(_QWORD *)(a1 + 1056));
  if ( !*(_DWORD *)(a1 + 1048) && *(_DWORD *)(a1 + 1044) == 1 )
  {
    Interrupter_InitializeForOffload(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 32LL)
                                               + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 128) + 64LL)));
    v2 = *(_QWORD *)(a1 + 1240);
    *(_BYTE *)(a1 + 1248) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 3040))(WdfDriverGlobals, v2);
  }
  ++*(_DWORD *)(a1 + 1048);
  return DynamicLock_Release(*(_QWORD *)(a1 + 1056));
}
