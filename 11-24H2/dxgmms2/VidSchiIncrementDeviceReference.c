/*
 * XREFs of VidSchiIncrementDeviceReference @ 0x14003E538
 * Callers:
 *     VidSchiCreateDeviceInternal @ 0x1400D3D40 (VidSchiCreateDeviceInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiIncrementDeviceReference(__int64 a1)
{
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 24));
}
