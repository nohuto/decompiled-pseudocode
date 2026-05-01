/*
 * XREFs of ?Solidify@GhostDivider@@UEAAXXZ @ 0x1801EAB10
 * Callers:
 *     ?Show@GhostDivider@@UEAAJW4GhostDividerShowFlags@@@Z @ 0x1801EAAD0 (-Show@GhostDivider@@UEAAJW4GhostDividerShowFlags@@@Z.c)
 * Callees:
 *     ?ChangeDividerVisibility@GhostDivider@@AEAAX_N@Z @ 0x1801EAB38 (-ChangeDividerVisibility@GhostDivider@@AEAAX_N@Z.c)
 */

void __fastcall GhostDivider::Solidify(GhostDivider *this)
{
  *((_BYTE *)this + 92) = 1;
  GhostDivider::ChangeDividerVisibility(this, 1);
  GhostDivider::DrawGrabber(this);
}
