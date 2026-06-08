/*
 * XREFs of GetGenAddrType @ 0x140034E60
 * Callers:
 *     DisplayGenAddr @ 0x140028380 (DisplayGenAddr.c)
 * Callees:
 *     <none>
 */

const char *__fastcall GetGenAddrType(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  if ( !a1 )
    return "Memory";
  v1 = a1 - 1;
  if ( !v1 )
    return "I/O";
  v2 = v1 - 1;
  if ( !v2 )
    return "Pci Config";
  v3 = v2 - 1;
  if ( !v3 )
    return "EC Space";
  v4 = v3 - 1;
  if ( !v4 )
    return "SM Bus";
  v5 = v4 - 6;
  if ( !v5 )
    return "PCC";
  if ( v5 == 117 )
    return "FFH";
  return "Unknown";
}
