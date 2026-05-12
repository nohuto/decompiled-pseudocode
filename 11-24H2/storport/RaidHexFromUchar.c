/*
 * XREFs of RaidHexFromUchar @ 0x14008D3B8
 * Callers:
 *     StorGUIDToSCSINameString @ 0x14008F32C (StorGUIDToSCSINameString.c)
 *     StorSerialNumberFromNvmeId @ 0x14008FD98 (StorSerialNumberFromNvmeId.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidHexFromUchar(unsigned __int8 a1, _BYTE *a2, unsigned int a3)
{
  char result; // al

  if ( a3 >= 2 )
  {
    *a2 = `RaidHexFromUshort'::`2'::hexDigits[(unsigned __int64)a1 >> 4];
    result = `RaidHexFromUshort'::`2'::hexDigits[a1 & 0xF];
    a2[1] = result;
  }
  return result;
}
