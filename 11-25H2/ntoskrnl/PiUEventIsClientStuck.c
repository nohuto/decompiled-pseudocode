/*
 * XREFs of PiUEventIsClientStuck @ 0x140ABFFDC
 * Callers:
 *     PiUEventNotifyClient @ 0x1408D0318 (PiUEventNotifyClient.c)
 * Callees:
 *     Feature_KernelPnP_NotificationsToSuspendedProcesses__private_IsEnabledDeviceUsageNoInline @ 0x1405A2850 (Feature_KernelPnP_NotificationsToSuspendedProcesses__private_IsEnabledDeviceUsageNoInline.c)
 *     PiUEventIsProcessFrozen @ 0x140718AE4 (PiUEventIsProcessFrozen.c)
 */

bool __fastcall PiUEventIsClientStuck(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( *(_DWORD *)(a1 + 128)
    && *(unsigned int *)(a1 + 128)
     * ((MEMORY[0xFFFFF78000000014] - *(_QWORD *)(*(_QWORD *)(a1 + 112) + 16LL))
      / 10000LL) > 600000 )
  {
    return !(unsigned int)Feature_KernelPnP_NotificationsToSuspendedProcesses__private_IsEnabledDeviceUsageNoInline()
        || !PiUEventIsProcessFrozen(*(void **)(a1 + 48));
  }
  return v1;
}
