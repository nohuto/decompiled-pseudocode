/*
 * XREFs of PnpQueryAndSaveDeviceNodeCapabilities @ 0x1408335B4
 * Callers:
 *     PiInitializeDevice @ 0x14072877C (PiInitializeDevice.c)
 *     PipProcessStartPhase3 @ 0x1408333C4 (PipProcessStartPhase3.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A60B18 (IopInitializeDeviceInstanceKey.c)
 *     IopInitializePlugPlayServices @ 0x140C0DF14 (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PpIrpQueryCapabilities @ 0x140834CB8 (PpIrpQueryCapabilities.c)
 *     PnpSaveDeviceCapabilities @ 0x140950928 (PnpSaveDeviceCapabilities.c)
 */

__int64 __fastcall PnpQueryAndSaveDeviceNodeCapabilities(__int64 a1)
{
  __int64 result; // rax
  _BYTE v3[64]; // [rsp+20h] [rbp-58h] BYREF

  memset_0(v3, 0, sizeof(v3));
  result = PpIrpQueryCapabilities(*(_QWORD *)(a1 + 32), v3);
  if ( (int)result >= 0 )
    return PnpSaveDeviceCapabilities(a1, v3, 0LL);
  return result;
}
