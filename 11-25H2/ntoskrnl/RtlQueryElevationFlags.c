/*
 * XREFs of RtlQueryElevationFlags @ 0x140A4AFD0
 * Callers:
 *     SeTokenCanImpersonate @ 0x1408A58F0 (SeTokenCanImpersonate.c)
 *     NtQueryInformationToken @ 0x140AC8E20 (NtQueryInformationToken.c)
 *     NtSetInformationToken @ 0x140ACC810 (NtSetInformationToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlQueryElevationFlags(int *a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = 0;
  *a1 = 0;
  if ( (MEMORY[0xFFFFF780000002F0] & 2) != 0 )
  {
    v1 = 1;
    *a1 = 1;
  }
  if ( (MEMORY[0xFFFFF780000002F0] & 4) != 0 )
  {
    v1 |= 2u;
    *a1 = v1;
  }
  if ( (MEMORY[0xFFFFF780000002F0] & 8) != 0 )
  {
    v1 |= 4u;
    *a1 = v1;
  }
  result = 0LL;
  *a1 = v1 | ((MEMORY[0xFFFFF780000002F0] & 0x1000) != 0 ? 16 : 8);
  return result;
}
