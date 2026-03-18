/*
 * XREFs of KCBIsVirtualizable @ 0x140426A80
 * Callers:
 *     KCBNeedsVirtualImage @ 0x140426A4C (KCBNeedsVirtualImage.c)
 * Callees:
 *     CmpIsKcbInsideVirtualizedHive @ 0x14090D640 (CmpIsKcbInsideVirtualizedHive.c)
 */

bool __fastcall KCBIsVirtualizable(__int64 a1)
{
  return CmpVEEnabled
      && (*(_DWORD *)(a1 + 184) & 0x2000000) == 0
      && (unsigned __int8)CmpIsKcbInsideVirtualizedHive() != 0;
}
