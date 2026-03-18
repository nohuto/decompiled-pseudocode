/*
 * XREFs of CmpIsKcbInsideVirtualizedHive @ 0x14090D640
 * Callers:
 *     KCBIsVirtualizable @ 0x140426A80 (KCBIsVirtualizable.c)
 *     KCBNeedsVirtualImage_0 @ 0x1404AE68C (KCBNeedsVirtualImage_0.c)
 *     CmQueryKey @ 0x140877890 (CmQueryKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14090CE40 (CmKeyBodyRemapToVirtualForEnum.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsKcbInsideVirtualizedHive(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 4112LL) & 0x10) != 0;
}
