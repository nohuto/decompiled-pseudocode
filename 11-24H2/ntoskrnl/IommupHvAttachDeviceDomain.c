/*
 * XREFs of IommupHvAttachDeviceDomain @ 0x1405630BC
 * Callers:
 *     HalpIommuUnblockDevice @ 0x1404B6140 (HalpIommuUnblockDevice.c)
 *     HalpIommuJoinDmaDomain @ 0x1405519E8 (HalpIommuJoinDmaDomain.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvAttachDeviceDomain(__int64 a1, int a2, unsigned __int8 a3)
{
  int v4; // [rsp+48h] [rbp+20h] BYREF
  int v5; // [rsp+4Ch] [rbp+24h]

  v4 = a2;
  v5 = a3;
  return guard_dispatch_icall_no_overrides(a1, &v4);
}
