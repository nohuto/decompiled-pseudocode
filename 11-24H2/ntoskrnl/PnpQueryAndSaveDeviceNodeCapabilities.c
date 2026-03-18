/*
 * XREFs of PnpQueryAndSaveDeviceNodeCapabilities @ 0x14099025C
 * Callers:
 *     PiInitializeDevice @ 0x140734A0C (PiInitializeDevice.c)
 *     PipProcessStartPhase3 @ 0x14099006C (PipProcessStartPhase3.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A626D8 (IopInitializeDeviceInstanceKey.c)
 *     IopInitializePlugPlayServices @ 0x140C1F07C (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PpIrpQueryCapabilities @ 0x1408BBB7C (PpIrpQueryCapabilities.c)
 *     PnpSaveDeviceCapabilities @ 0x140990C04 (PnpSaveDeviceCapabilities.c)
 */

__int64 __fastcall PnpQueryAndSaveDeviceNodeCapabilities(__int64 a1)
{
  __int64 result; // rax
  _DWORD v3[16]; // [rsp+20h] [rbp-58h] BYREF

  memset_0(v3, 0, sizeof(v3));
  result = PpIrpQueryCapabilities(*(_QWORD *)(a1 + 32), v3);
  if ( (int)result >= 0 )
    return PnpSaveDeviceCapabilities(a1, v3, 0LL);
  return result;
}
