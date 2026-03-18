/*
 * XREFs of CmpIsKcbInsideVirtualizedHive @ 0x140841680
 * Callers:
 *     KCBIsVirtualizable @ 0x14042EE70 (KCBIsVirtualizable.c)
 *     KCBNeedsVirtualImage_0 @ 0x1404AD6EC (KCBNeedsVirtualImage_0.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140840E80 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmQueryKey @ 0x14087AC40 (CmQueryKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsKcbInsideVirtualizedHive(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 4112LL) & 0x10) != 0;
}
