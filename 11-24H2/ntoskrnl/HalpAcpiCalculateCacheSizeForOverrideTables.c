/*
 * XREFs of HalpAcpiCalculateCacheSizeForOverrideTables @ 0x140C0F814
 * Callers:
 *     HalpAcpiTableCacheInit @ 0x140C699DC (HalpAcpiTableCacheInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpAcpiCalculateCacheSizeForOverrideTables(__int64 a1, unsigned int a2)
{
  unsigned int v3; // r8d
  __int64 v4; // rcx
  _BYTE *v5; // r10
  char v6; // al
  __int64 v7; // r11

  v3 = 0;
  while ( a2 )
  {
    if ( a2 < 0x24 )
      return 0;
    v4 = *(unsigned int *)(a1 + 4);
    if ( (unsigned int)v4 < 0x24 )
      return 0;
    if ( (unsigned int)v4 > a2 )
      return 0;
    v5 = (_BYTE *)a1;
    v6 = 0;
    v7 = (unsigned int)v4;
    do
    {
      v6 += *v5++;
      --v7;
    }
    while ( v7 );
    if ( v6 )
      return 0;
    a2 -= v4;
    v3 += (v4 + 31) & 0xFFFFFFF8;
    a1 += v4;
  }
  return v3;
}
