/*
 * XREFs of _flswbuf @ 0x140500678
 * Callers:
 *     _fputwc_nolock @ 0x1405000A4 (_fputwc_nolock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall flswbuf(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 24) |= 0x20u;
  return 0xFFFFLL;
}
