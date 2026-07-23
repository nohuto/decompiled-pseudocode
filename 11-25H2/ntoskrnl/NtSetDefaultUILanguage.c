/*
 * XREFs of NtSetDefaultUILanguage @ 0x140A6EE10
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetPendingUILanguage @ 0x140A6EE30 (ExpSetPendingUILanguage.c)
 */

NTSTATUS __cdecl NtSetDefaultUILanguage(LANGID DefaultUILanguageId)
{
  if ( DefaultUILanguageId )
    return 0;
  else
    return ExpSetPendingUILanguage();
}
