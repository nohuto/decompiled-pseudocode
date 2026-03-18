/*
 * XREFs of ZwAlpcCreatePortSection @ 0x1406A73D0
 * Callers:
 *     DifZwAlpcCreatePortSectionWrapper @ 0x14063BE40 (DifZwAlpcCreatePortSectionWrapper.c)
 *     CmFcpCreateAlpcSectionView @ 0x140AC0FAC (CmFcpCreateAlpcSectionView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCreatePortSection(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
