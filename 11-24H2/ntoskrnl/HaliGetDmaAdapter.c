/*
 * XREFs of HaliGetDmaAdapter @ 0x140542050
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaFindDeviceObjectByToken @ 0x14053E108 (HalpDmaFindDeviceObjectByToken.c)
 *     HalpGetAdapter @ 0x1406FD4DC (HalpGetAdapter.c)
 */

__int64 __fastcall HaliGetDmaAdapter(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 DeviceObjectByToken; // rax

  DeviceObjectByToken = HalpDmaFindDeviceObjectByToken((__int64)KeGetCurrentThread(), 0, 0);
  return HalpGetAdapter(a2, DeviceObjectByToken, a3);
}
