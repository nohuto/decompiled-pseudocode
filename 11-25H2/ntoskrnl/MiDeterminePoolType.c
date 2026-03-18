/*
 * XREFs of MiDeterminePoolType @ 0x1402FAC30
 * Callers:
 *     MmFreePoolMemory @ 0x1402FAA60 (MmFreePoolMemory.c)
 *     MiGenerateAccessViolation @ 0x1403E297C (MiGenerateAccessViolation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDeterminePoolType(unsigned __int64 a1)
{
  int v1; // ecx
  __int64 result; // rax

  if ( a1 < 0xFFFF800000000000uLL )
    return 0LL;
  v1 = byte_140E38768[((a1 >> 39) & 0x1FF) - 256];
  if ( v1 == 4 )
    return 64LL;
  result = 0LL;
  if ( v1 == 5 )
    return 256LL;
  return result;
}
