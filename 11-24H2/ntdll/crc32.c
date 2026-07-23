/*
 * XREFs of crc32 @ 0x18011AB08
 * Callers:
 *     RtlComputeCrc32 @ 0x1801082C0 (RtlComputeCrc32.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall crc32(unsigned int a1, _DWORD *a2, unsigned int a3)
{
  if ( a2 )
    return crc32_z(a1, a2, a3);
  else
    return 0LL;
}
