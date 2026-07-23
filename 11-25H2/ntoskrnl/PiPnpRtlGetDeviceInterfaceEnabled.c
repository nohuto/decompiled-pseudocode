/*
 * XREFs of PiPnpRtlGetDeviceInterfaceEnabled @ 0x1409ECC20
 * Callers:
 *     <none>
 * Callees:
 *     ZwPlugPlayControl @ 0x14069D8E0 (ZwPlugPlayControl.c)
 */

NTSTATUS __fastcall PiPnpRtlGetDeviceInterfaceEnabled(__int64 a1, __int128 *a2, _BYTE *a3, unsigned int a4)
{
  NTSTATUS result; // eax
  __int128 PnPControlData; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  PnPControlData = *a2;
  v7 = a4;
  result = ZwPlugPlayControl(PlugPlayControlGetDeviceInterfaceEnabled, &PnPControlData, 0x18u);
  *a3 = BYTE4(v7);
  return result;
}
