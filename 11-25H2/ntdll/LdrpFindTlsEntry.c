/*
 * XREFs of LdrpFindTlsEntry @ 0x180020450
 * Callers:
 *     LdrpReleaseTlsEntry @ 0x180008C0C (LdrpReleaseTlsEntry.c)
 *     LdrpHandleTlsData @ 0x180021A20 (LdrpHandleTlsData.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall LdrpFindTlsEntry(void *a1)
{
  _UNKNOWN **result; // rax

  for ( result = (_UNKNOWN **)LdrpTlsList; result != &LdrpTlsList; result = (_UNKNOWN **)*result )
  {
    if ( result[7] == a1 )
      return result;
  }
  return 0LL;
}
