/*
 * XREFs of sub_14002FD44 @ 0x14002FD44
 * Callers:
 *     sub_14002ED8C @ 0x14002ED8C (sub_14002ED8C.c)
 *     sub_14002EF8C @ 0x14002EF8C (sub_14002EF8C.c)
 *     sub_14002F480 @ 0x14002F480 (sub_14002F480.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_14002FD44(_BYTE *a1, const void *a2)
{
  SIZE_T v2; // rbx

  if ( !*a1 || (v2 = 12LL, *a1 == 10) )
    v2 = 2LL;
  return RtlCompareMemory(a1, a2, v2) == v2;
}
