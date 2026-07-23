/*
 * XREFs of ZwIsUILanguageComitted @ 0x1406A9530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwIsUILanguageComitted(void)
{
  __int64 v0; // rcx

  _disable();
  __readeflags();
  return KiServiceInternal(v0);
}
