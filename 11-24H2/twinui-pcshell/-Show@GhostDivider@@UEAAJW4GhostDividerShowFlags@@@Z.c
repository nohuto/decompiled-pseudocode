/*
 * XREFs of ?Show@GhostDivider@@UEAAJW4GhostDividerShowFlags@@@Z @ 0x1801EAAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Solidify@GhostDivider@@UEAAXXZ @ 0x1801EAB10 (-Solidify@GhostDivider@@UEAAXXZ.c)
 *     ?GhostDividerShown@JointResizeTelemetry@@SAXXZ @ 0x1801EAC40 (-GhostDividerShown@JointResizeTelemetry@@SAXXZ.c)
 */

__int64 __fastcall GhostDivider::Show(GhostDivider *a1, char a2)
{
  JointResizeTelemetry::GhostDividerShown();
  if ( (a2 & 2) != 0 )
    GhostDivider::Solidify(a1);
  return 0LL;
}
