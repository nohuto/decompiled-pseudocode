/*
 * XREFs of ZwAlpcCreateSectionView @ 0x1406A7410
 * Callers:
 *     DifZwAlpcCreateSectionViewWrapper @ 0x14063C300 (DifZwAlpcCreateSectionViewWrapper.c)
 *     CmFcpCreateAlpcSectionView @ 0x140AC0FAC (CmFcpCreateAlpcSectionView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCreateSectionView(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
