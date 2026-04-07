/*
 * XREFs of ?Update@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@K@Z @ 0x18000F56C
 * Callers:
 *     ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18000F274 (-ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K.c)
 * Callees:
 *     ?PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ @ 0x18000F5A4 (-PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x18000F658 (-UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CPenBarrelKeyVisual::Update(CPenBarrelKeyVisual *this, const struct tagPOINT *a2, int a3)
{
  *(struct tagPOINT *)((char *)this + 260) = *a2;
  *((_DWORD *)this + 67) = a3;
  CPenBarrelKeyVisual::PlaceVisuals(this);
  CPenBarrelKeyVisual::UpdateBarrelAlpha(this);
  return 0LL;
}
