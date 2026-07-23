/*
 * XREFs of ZwQueryDefaultUILanguage @ 0x1406A7C30
 * Callers:
 *     DifZwQueryDefaultUILanguageWrapper @ 0x140642800 (DifZwQueryDefaultUILanguageWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryDefaultUILanguage(LANGID *DefaultUILanguageId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DefaultUILanguageId);
}
