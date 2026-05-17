/*
 * XREFs of _flswbuf @ 0x18012C594
 * Callers:
 *     _fputwc_nolock @ 0x18012C3B0 (_fputwc_nolock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall flswbuf(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 24) |= 0x20u;
  return 0xFFFFLL;
}
