/*
 * XREFs of ZwOpenProcessToken @ 0x1406A8A70
 * Callers:
 *     DifZwOpenProcessTokenWrapper @ 0x140642380 (DifZwOpenProcessTokenWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenProcessToken(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
