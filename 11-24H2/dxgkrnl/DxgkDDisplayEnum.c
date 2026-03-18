/*
 * XREFs of DxgkDDisplayEnum @ 0x1403C90D0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkDDisplayEnumInternalLegacy @ 0x1401C5D60 (DxgkDDisplayEnumInternalLegacy.c)
 */

__int64 __fastcall DxgkDDisplayEnum(struct _D3DKMT_DDISPLAY_ENUM *a1)
{
  return DxgkDDisplayEnumInternalLegacy(a1, 1);
}
