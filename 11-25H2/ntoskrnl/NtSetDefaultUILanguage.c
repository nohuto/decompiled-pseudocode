/*
 * XREFs of NtSetDefaultUILanguage @ 0x140A6EE10
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetPendingUILanguage @ 0x140A6EE30 (ExpSetPendingUILanguage.c)
 */

__int64 __fastcall NtSetDefaultUILanguage(__int16 a1)
{
  if ( a1 )
    return 0LL;
  else
    return ExpSetPendingUILanguage();
}
