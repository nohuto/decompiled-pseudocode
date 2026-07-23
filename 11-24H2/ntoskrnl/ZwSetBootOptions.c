/*
 * XREFs of ZwSetBootOptions @ 0x1406AA690
 * Callers:
 *     DifZwSetBootOptionsWrapper @ 0x140646130 (DifZwSetBootOptionsWrapper.c)
 *     BiSetBootOptions @ 0x140815DFC (BiSetBootOptions.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetBootOptions(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
