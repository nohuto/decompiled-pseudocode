/*
 * XREFs of ZwDrawText @ 0x1406A9050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDrawText(PUNICODE_STRING Text)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Text);
}
