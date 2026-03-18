/*
 * XREFs of HUBPSM30_ReleasingPowerReferenceOnHubS0IdleInD3Cold @ 0x140013250
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_ReleasePortPowerReference @ 0x140011FC8 (HUBMUX_ReleasePortPowerReference.c)
 */

__int64 __fastcall HUBPSM30_ReleasingPowerReferenceOnHubS0IdleInD3Cold(__int64 a1)
{
  HUBMUX_ReleasePortPowerReference(*(volatile signed __int32 **)(a1 + 960));
  return 3013LL;
}
