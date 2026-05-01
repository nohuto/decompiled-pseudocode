/*
 * XREFs of AslComputeCrc32 @ 0x18009D590
 * Callers:
 *     AslpFileGetCrcChecksum @ 0x1800A0930 (AslpFileGetCrcChecksum.c)
 *     AslpFileGetCrcChecksumBoot @ 0x1800A0A34 (AslpFileGetCrcChecksumBoot.c)
 *     AslpFileLargeGetCrcChecksum @ 0x1800A7490 (AslpFileLargeGetCrcChecksum.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslComputeCrc32(int a1, _BYTE *a2, unsigned int a3)
{
  unsigned int v4; // ecx
  __int64 v5; // r10
  __int64 v6; // rax

  v4 = ~a1;
  if ( a3 )
  {
    v5 = a3;
    do
    {
      v6 = (unsigned __int8)(*a2++ ^ v4);
      v4 = AslpCrc32Table[v6] ^ (v4 >> 8);
      --v5;
    }
    while ( v5 );
  }
  return ~v4;
}
