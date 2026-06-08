/*
 * XREFs of sub_140030450 @ 0x140030450
 * Callers:
 *     <none>
 * Callees:
 *     sub_140030F80 @ 0x140030F80 (sub_140030F80.c)
 */

__int64 __fastcall sub_140030450(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 280) & 0x200LL) != 0 )
    return sub_140030F80();
  else
    return 0LL;
}
