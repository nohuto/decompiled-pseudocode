/*
 * XREFs of CMFFreeFn @ 0x140A98770
 * Callers:
 *     XpressDecodeClose @ 0x140696B34 (XpressDecodeClose.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall CMFFreeFn(__int64 a1, void *a2)
{
  ExFreePoolWithTag(a2, 0);
}
