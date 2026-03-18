/*
 * XREFs of _CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues @ 0x140A984F8
 * Callers:
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A797FC (_CmDeleteDeviceRegKeyWorker.c)
 * Callees:
 *     _PnpSetObjectProperty @ 0x1408B88E8 (_PnpSetObjectProperty.c)
 */

__int64 __fastcall CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 v5; // rdi

  v3 = (__int64 *)&off_140B3E8A0;
  v5 = 13LL;
  do
  {
    PnpSetObjectProperty(a1, a2, 1u, 0LL, 0LL, *v3, 0, 0LL, 0, 0);
    v3 += 4;
    --v5;
  }
  while ( v5 );
  return 0LL;
}
