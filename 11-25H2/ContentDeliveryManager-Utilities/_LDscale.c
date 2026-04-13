/*
 * XREFs of _LDscale @ 0x18000DE78
 * Callers:
 *     _Stoldx @ 0x18000606C (_Stoldx.c)
 *     _LXp_addh @ 0x18000DE84 (_LXp_addh.c)
 *     _LXp_mulh @ 0x18000E260 (_LXp_mulh.c)
 *     _LXp_setw @ 0x18000E5A0 (_LXp_setw.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int16 __fastcall LDscale(unsigned __int16 *a1, __int64 a2)
{
  return Dscale(a1, a2);
}
