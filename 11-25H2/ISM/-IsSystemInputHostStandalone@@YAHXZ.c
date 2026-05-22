/*
 * XREFs of ?IsSystemInputHostStandalone@@YAHXZ @ 0x1800A0500
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x1800392B0 (-IsEdition@@YA_N_K@Z.c)
 */

_BOOL8 IsSystemInputHostStandalone(void)
{
  return IsEdition(8778LL) == 0;
}
