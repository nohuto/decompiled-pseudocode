/*
 * XREFs of _LDscale @ 0x18000DE88
 * Callers:
 *     _Stoldx @ 0x18000607C (_Stoldx.c)
 *     _LXp_addh @ 0x18000DE94 (_LXp_addh.c)
 *     _LXp_mulh @ 0x18000E270 (_LXp_mulh.c)
 *     _LXp_setw @ 0x18000E5B0 (_LXp_setw.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int16 __fastcall LDscale(unsigned __int16 *a1, __int64 a2)
{
  return Dscale(a1, a2);
}
