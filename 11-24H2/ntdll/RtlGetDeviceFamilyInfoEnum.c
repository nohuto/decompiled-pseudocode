/*
 * XREFs of RtlGetDeviceFamilyInfoEnum @ 0x1800F49A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl RtlGetDeviceFamilyInfoEnum(ULONGLONG *pullUAPInfo, DWORD *pulDeviceFamily, DWORD *pulDeviceForm)
{
  RtlpGetDeviceFamilyInfoEnum(pullUAPInfo, pulDeviceFamily, pulDeviceForm);
}
