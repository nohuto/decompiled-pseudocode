/*
 * XREFs of CMFFreeFn @ 0x140A9E2A0
 * Callers:
 *     XpressDecodeClose @ 0x1406A1D14 (XpressDecodeClose.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall CMFFreeFn(__int64 a1, void *a2)
{
  ExFreePoolWithTag(a2, 0);
}
