/*
 * XREFs of ACPIGetRootDeviceObject @ 0x1400556C0
 * Callers:
 *     ACPIThermalQueryCoolingInterfaces @ 0x140068DD4 (ACPIThermalQueryCoolingInterfaces.c)
 * Callees:
 *     <none>
 */

ULONG_PTR ACPIGetRootDeviceObject()
{
  ULONG_PTR result; // rax

  result = RootDeviceExtension;
  if ( RootDeviceExtension )
    return *(_QWORD *)(RootDeviceExtension + 768);
  return result;
}
