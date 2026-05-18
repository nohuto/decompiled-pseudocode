/*
 * XREFs of sub_180010578 @ 0x180010578
 * Callers:
 *     sub_180010520 @ 0x180010520 (sub_180010520.c)
 *     sub_180014C00 @ 0x180014C00 (sub_180014C00.c)
 *     sub_180018700 @ 0x180018700 (sub_180018700.c)
 *     sub_180018760 @ 0x180018760 (sub_180018760.c)
 *     sub_1800187C0 @ 0x1800187C0 (sub_1800187C0.c)
 *     sub_180018820 @ 0x180018820 (sub_180018820.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180010578(volatile signed __int32 *a1)
{
  signed __int32 v1; // r8d

  do
    v1 = *a1;
  while ( *a1 != 0x7FFFFFFF && v1 != _InterlockedCompareExchange(a1, v1 - 1, v1) );
  return (unsigned int)(v1 - 1);
}
