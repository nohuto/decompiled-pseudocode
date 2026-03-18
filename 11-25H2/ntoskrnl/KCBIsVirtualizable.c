/*
 * XREFs of KCBIsVirtualizable @ 0x14042EE70
 * Callers:
 *     KCBNeedsVirtualImage @ 0x14042EE34 (KCBNeedsVirtualImage.c)
 * Callees:
 *     CmpIsKcbInsideVirtualizedHive @ 0x140841680 (CmpIsKcbInsideVirtualizedHive.c)
 */

bool __fastcall KCBIsVirtualizable(__int64 a1)
{
  return CmpVEEnabled
      && (*(_DWORD *)(a1 + 184) & 0x2000000) == 0
      && (unsigned __int8)CmpIsKcbInsideVirtualizedHive() != 0;
}
