/*
 * XREFs of IommupHvAttachDeviceDomain @ 0x14056548C
 * Callers:
 *     HalpIommuUnblockDevice @ 0x1404BB2D0 (HalpIommuUnblockDevice.c)
 *     HalpIommuJoinDmaDomain @ 0x1405540A8 (HalpIommuJoinDmaDomain.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvAttachDeviceDomain(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v5; // [rsp+48h] [rbp+20h] BYREF
  int v6; // [rsp+4Ch] [rbp+24h]

  v5 = a2;
  v6 = (unsigned __int8)a3;
  return guard_dispatch_icall_no_overrides(a1, &v5, a3, a4);
}
