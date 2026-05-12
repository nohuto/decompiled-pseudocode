/*
 * XREFs of StorGetIdentityVendorId @ 0x1400A1D68
 * Callers:
 *     RaidUnitGetDeviceId @ 0x14009E9BC (RaidUnitGetDeviceId.c)
 *     RaUnitQueryDeviceTextIrp @ 0x140185CFC (RaUnitQueryDeviceTextIrp.c)
 * Callees:
 *     RaCopyPaddedString @ 0x140184CFC (RaCopyPaddedString.c)
 */

__int64 __fastcall StorGetIdentityVendorId(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8

  if ( (a1[3] & 4) != 0 )
    v2 = a1[6];
  else
    v2 = *a1;
  if ( !v2 )
    return 3221225485LL;
  RaCopyPaddedString(a2, 9LL, v2 + 8);
  return 0LL;
}
