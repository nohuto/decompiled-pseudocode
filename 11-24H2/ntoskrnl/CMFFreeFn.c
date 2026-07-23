/*
 * XREFs of CMFFreeFn @ 0x140A99810
 * Callers:
 *     XpressDecodeClose @ 0x1406A2D64 (XpressDecodeClose.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall CMFFreeFn(__int64 a1, void *a2)
{
  ExFreePoolWithTag(a2, 0);
}
