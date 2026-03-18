/*
 * XREFs of HUBPSM30_ReleasingResetReferenceInSuperSpeedDisabled @ 0x140013230
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_ReleaseResetReference @ 0x140012014 (HUBMUX_ReleaseResetReference.c)
 */

__int64 __fastcall HUBPSM30_ReleasingResetReferenceInSuperSpeedDisabled(__int64 a1)
{
  HUBMUX_ReleaseResetReference(*(volatile signed __int32 **)(a1 + 960));
  return 3013LL;
}
