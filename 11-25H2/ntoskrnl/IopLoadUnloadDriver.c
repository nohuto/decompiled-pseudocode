/*
 * XREFs of IopLoadUnloadDriver @ 0x140ABFF10
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1402FEF84 (IopCompleteUnloadOrDelete.c)
 *     IopLoadDriverImage @ 0x1404E6A70 (IopLoadDriverImage.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     VfIsVerifierEnabled @ 0x1404BD130 (VfIsVerifierEnabled.c)
 *     Feature_DriverEntryInHostContext__private_IsEnabledDeviceUsageNoInline @ 0x140592580 (Feature_DriverEntryInHostContext__private_IsEnabledDeviceUsageNoInline.c)
 *     VfDriverProcessUnload @ 0x14060509C (VfDriverProcessUnload.c)
 *     DifIsPluginRunningWithoutReboot @ 0x14060C91C (DifIsPluginRunningWithoutReboot.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     IopLoadDriver @ 0x1409B0D50 (IopLoadDriver.c)
 *     IopCallDriverReinitializationRoutines @ 0x140A74500 (IopCallDriverReinitializationRoutines.c)
 *     IopOpenRegistryKey @ 0x140A74FB0 (IopOpenRegistryKey.c)
 */

LONG __fastcall IopLoadUnloadDriver(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  int v5; // [rsp+40h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  Handle = 0LL;
  Feature_DriverEntryInHostContext__private_IsEnabledDeviceUsageNoInline();
  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    guard_dispatch_icall_no_overrides(v2);
    if ( (unsigned int)VfIsVerifierEnabled() || DifIsPluginRunningWithoutReboot() )
      VfDriverProcessUnload(*(_QWORD *)(a1 + 56));
    v3 = 0;
  }
  else
  {
    v3 = IopOpenRegistryKey(&Handle, 0LL, *(UNICODE_STRING **)(a1 + 64), 0x20019u, 0);
    if ( v3 >= 0 )
    {
      v3 = IopLoadDriver(Handle, 1, 0, &v5);
      if ( v3 == -1073740955 )
      {
        v3 = v5;
      }
      else if ( v3 == -1073740914 )
      {
        v3 = -1073741772;
      }
      IopCallDriverReinitializationRoutines(0);
    }
  }
  *(_DWORD *)(a1 + 72) = v3;
  return KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
}
