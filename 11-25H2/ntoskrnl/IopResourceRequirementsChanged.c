/*
 * XREFs of IopResourceRequirementsChanged @ 0x140ABE80C
 * Callers:
 *     PiProcessQueryDeviceState @ 0x140833E34 (PiProcessQueryDeviceState.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x14046E128 (PnpRequestDeviceAction.c)
 */

__int64 __fastcall IopResourceRequirementsChanged(void *a1, char a2)
{
  __int128 v3; // [rsp+40h] [rbp-18h] BYREF

  v3 = 0LL;
  BYTE8(v3) = a2;
  return PnpRequestDeviceAction(a1, 0xDu, 0, &v3, 0LL, 0LL, 0LL);
}
