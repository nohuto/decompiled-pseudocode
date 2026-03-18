/*
 * XREFs of ?DxgkVidMmAllowFailOnOfferReclaimErrors@@YAHXZ @ 0x1401A8EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

_BOOL8 DxgkVidMmAllowFailOnOfferReclaimErrors(void)
{
  struct DXGPROCESS *Current; // rax

  Current = DXGPROCESS::GetCurrent();
  return !Current || (*((_DWORD *)Current + 102) & 4) == 0;
}
