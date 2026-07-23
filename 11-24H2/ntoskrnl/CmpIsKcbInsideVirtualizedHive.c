/*
 * XREFs of CmpIsKcbInsideVirtualizedHive @ 0x1408E4D60
 * Callers:
 *     KCBIsVirtualizable @ 0x14041A930 (KCBIsVirtualizable.c)
 *     KCBNeedsVirtualImage_0 @ 0x1404A8F9C (KCBNeedsVirtualImage_0.c)
 *     CmQueryKey @ 0x14087BBC0 (CmQueryKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408E4560 (CmKeyBodyRemapToVirtualForEnum.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsKcbInsideVirtualizedHive(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 4112LL) & 0x10) != 0;
}
