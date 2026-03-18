/*
 * XREFs of PipAddDevicesToBootDriverWorker @ 0x140C0F0C4
 * Callers:
 *     PipApplyFunctionToServiceInstances @ 0x1407169C0 (PipApplyFunctionToServiceInstances.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     PiProcessAddBootDevices @ 0x140717E94 (PiProcessAddBootDevices.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140934F70 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 */

__int64 __fastcall PipAddDevicesToBootDriverWorker(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  void *v5; // rbx

  v2 = PnpDeviceObjectFromDeviceInstanceWithTag(a2, 0x746C6644u);
  v5 = v2;
  if ( v2 )
  {
    PiProcessAddBootDevices((__int64)v2, v3, v4);
    ObfDereferenceObjectWithTag(v5, 0x746C6644u);
  }
  return 1LL;
}
