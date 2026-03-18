/*
 * XREFs of ACPIValidateStringVendorDeviceIdFormat @ 0x1400B94BC
 * Callers:
 *     ACPIBusIrpQueryHardwareId @ 0x1400B7EE4 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1400B85CC (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1400B8F9C (ACPIBusIrpQueryDeviceId.c)
 * Callees:
 *     <none>
 */

char __fastcall ACPIValidateStringVendorDeviceIdFormat(__int64 a1, unsigned __int64 a2)
{
  unsigned __int16 i; // r8
  char v4; // cl
  char v5; // cl

  if ( a2 - 7 > 1 )
    return 0;
  for ( i = 0; i < (unsigned __int16)((a2 != 7) + 3); ++i )
  {
    v4 = *(_BYTE *)(i + a1);
    if ( (unsigned __int8)(v4 - 97) > 0x19u && (unsigned __int8)(v4 - 65) > 0x19u && (unsigned __int8)(v4 - 48) > 9u )
      return 0;
  }
  while ( i < a2 )
  {
    v5 = *(_BYTE *)(i + a1);
    if ( (unsigned __int8)(v5 - 97) > 5u && (unsigned __int8)(v5 - 65) > 5u && (unsigned __int8)(v5 - 48) > 9u )
      return 0;
    ++i;
  }
  return 1;
}
