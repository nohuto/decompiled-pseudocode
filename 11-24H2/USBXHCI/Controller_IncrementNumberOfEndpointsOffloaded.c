/*
 * XREFs of Controller_IncrementNumberOfEndpointsOffloaded @ 0x1400402A4
 * Callers:
 *     UsbDevice_SetResourceAssignmentCompletion @ 0x140032EB0 (UsbDevice_SetResourceAssignmentCompletion.c)
 *     UsbDevice_GetEndpointOffloadInformation @ 0x14003A27C (UsbDevice_GetEndpointOffloadInformation.c)
 * Callees:
 *     DynamicLock_Acquire @ 0x14000BF40 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x14000C970 (DynamicLock_Release.c)
 *     Interrupter_InitializeForOffload @ 0x140048A54 (Interrupter_InitializeForOffload.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_IncrementNumberOfEndpointsOffloaded(__int64 a1)
{
  __int64 v2; // rdx

  DynamicLock_Acquire(*(_QWORD *)(a1 + 1048));
  if ( !*(_DWORD *)(a1 + 1040) && *(_DWORD *)(a1 + 1036) == 1 )
  {
    Interrupter_InitializeForOffload(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 32LL)
                                               + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 128) + 64LL)));
    v2 = *(_QWORD *)(a1 + 1232);
    *(_BYTE *)(a1 + 1240) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 3040))(WdfDriverGlobals, v2);
  }
  ++*(_DWORD *)(a1 + 1040);
  return DynamicLock_Release(*(_QWORD *)(a1 + 1048));
}
