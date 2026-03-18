/*
 * XREFs of ZwGetNlsSectionPtr @ 0x1406A8450
 * Callers:
 *     RtlpGetNormalization @ 0x14078D5B0 (RtlpGetNormalization.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwGetNlsSectionPtr(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
