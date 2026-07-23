/*
 * XREFs of HvlDmaDetachDeviceDomain @ 0x140583950
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvToNtStatus @ 0x14039CC08 (HvlpHvToNtStatus.c)
 *     HvcallFastExtended @ 0x14039DBD0 (HvcallFastExtended.c)
 */

__int64 __fastcall HvlDmaDetachDeviceDomain(__int64 a1)
{
  unsigned __int16 v1; // ax
  _QWORD v3[3]; // [rsp+30h] [rbp-18h] BYREF

  v3[0] = -1LL;
  v3[1] = a1 & 0x3FFFFFFFFFFFFFFFLL;
  v1 = HvcallFastExtended(65732LL, (__int64)v3, 0x10u, 0LL, 0);
  return HvlpHvToNtStatus(v1);
}
