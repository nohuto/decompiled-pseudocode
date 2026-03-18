/*
 * XREFs of MiDeterminePoolType @ 0x140243C10
 * Callers:
 *     MmFreePoolMemory @ 0x140243A40 (MmFreePoolMemory.c)
 *     MiGenerateAccessViolation @ 0x140246254 (MiGenerateAccessViolation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDeterminePoolType(unsigned __int64 a1)
{
  int v1; // ecx
  __int64 result; // rax

  if ( a1 < 0xFFFF800000000000uLL )
    return 0LL;
  v1 = byte_140E389A8[((a1 >> 39) & 0x1FF) - 256];
  if ( v1 == 4 )
    return 64LL;
  result = 0LL;
  if ( v1 == 5 )
    return 256LL;
  return result;
}
