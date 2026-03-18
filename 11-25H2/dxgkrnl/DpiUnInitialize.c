/*
 * XREFs of DpiUnInitialize @ 0x140235A80
 * Callers:
 *     <none>
 * Callees:
 *     DpiCleanup @ 0x140234E04 (DpiCleanup.c)
 */

void __fastcall DpiUnInitialize(struct _DRIVER_OBJECT *a1, __int64 a2, __int64 a3)
{
  DpiCleanup(a1, 0, a3);
}
