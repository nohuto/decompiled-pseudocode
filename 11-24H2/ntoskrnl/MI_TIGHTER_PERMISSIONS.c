/*
 * XREFs of MI_TIGHTER_PERMISSIONS @ 0x140436740
 * Callers:
 *     MmSetAddressRangeModifiedEx @ 0x140240600 (MmSetAddressRangeModifiedEx.c)
 *     MmProtectPool @ 0x1403889FC (MmProtectPool.c)
 *     MiSetSystemCodeProtection @ 0x140435F3C (MiSetSystemCodeProtection.c)
 *     MiProtectEnclavePages @ 0x1404CACEC (MiProtectEnclavePages.c)
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
