/*
 * XREFs of RunLengthEncode @ 0x1405ACE80
 * Callers:
 *     KdpReadPhysicalMemory @ 0x140B797D8 (KdpReadPhysicalMemory.c)
 * Callees:
 *     <none>
 */

char __fastcall RunLengthEncode(int *a1, unsigned int a2)
{
  int v3; // r8d
  unsigned int v4; // ecx
  unsigned int v5; // edx

  if ( !a2 || ((unsigned __int8)a1 & 3) != 0 || (a2 & 3) != 0 )
    return 0;
  v3 = *a1;
  v4 = 1;
  v5 = a2 >> 2;
  while ( v4 < v5 )
  {
    if ( a1[v4] != v3 )
      return 0;
    ++v4;
  }
  return 1;
}
