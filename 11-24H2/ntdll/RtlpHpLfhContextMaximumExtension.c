/*
 * XREFs of RtlpHpLfhContextMaximumExtension @ 0x1800EF328
 * Callers:
 *     RtlpHpHeapAllocate @ 0x1800EF054 (RtlpHpHeapAllocate.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpHpLfhContextMaximumExtension(unsigned int a1)
{
  unsigned int v1; // eax
  unsigned __int64 v2; // rdx
  unsigned int v3; // r9d
  __int64 v4; // rcx
  unsigned __int64 result; // rax

  v1 = 64;
  v2 = 256LL;
  if ( a1 <= 0x40 )
    v1 = a1;
  v3 = ((unsigned int)RtlpHpLfhPerfFlags >> 7) & 1;
  v4 = 512LL;
  if ( (RtlpHpLfhPerfFlags & 4) != 0 )
    v2 = ((unsigned __int64)((v3 + 1) << 13) >> 2) + 512;
  if ( 16 * v1 < 0x200 )
    v4 = 16 * v1;
  result = ((unsigned __int64)v1 << 8)
         + v2 * v4
         + ((((v1 * (v3 + 1)) << 6) + ((unsigned __int64)(((unsigned int)RtlpHpLfhPerfFlags >> 7) & 1) << 6) + 128) << 7);
  if ( result >= 0x3FF8C0 )
    return 4192448LL;
  return result;
}
