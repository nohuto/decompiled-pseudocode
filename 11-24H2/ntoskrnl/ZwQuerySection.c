/*
 * XREFs of ZwQuerySection @ 0x1406A6E30
 * Callers:
 *     CmSiGetSectionLength @ 0x140491C80 (CmSiGetSectionLength.c)
 *     DifZwQuerySectionWrapper @ 0x1406463D0 (DifZwQuerySectionWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySection(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
