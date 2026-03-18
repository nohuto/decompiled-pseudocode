/*
 * XREFs of MI_TIGHTER_PERMISSIONS @ 0x1403F3C10
 * Callers:
 *     MmSetAddressRangeModifiedEx @ 0x1402C18C0 (MmSetAddressRangeModifiedEx.c)
 *     MmProtectPool @ 0x14039FEDC (MmProtectPool.c)
 *     MiSetSystemCodeProtection @ 0x1403F3480 (MiSetSystemCodeProtection.c)
 *     MiProtectEnclavePages @ 0x1404CAFB0 (MiProtectEnclavePages.c)
 * Callees:
 *     <none>
 */

bool __fastcall MI_TIGHTER_PERMISSIONS(__int64 a1, __int64 a2)
{
  bool result; // al

  if ( (a2 & 0x40) == 0 && (a1 & 0x40) != 0 || (a2 & 2) == 0 && (a1 & 2) != 0 )
    return 1;
  result = 0;
  if ( a2 < 0 )
    return a1 >= 0;
  return result;
}
