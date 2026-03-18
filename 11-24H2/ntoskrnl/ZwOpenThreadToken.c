/*
 * XREFs of ZwOpenThreadToken @ 0x1406A6890
 * Callers:
 *     DifZwOpenThreadTokenWrapper @ 0x140642CE0 (DifZwOpenThreadTokenWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenThreadToken(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
