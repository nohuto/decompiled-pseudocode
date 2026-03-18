/*
 * XREFs of DpiDriverUnload @ 0x14023BB10
 * Callers:
 *     <none>
 * Callees:
 *     DpiCleanup @ 0x14023B7E4 (DpiCleanup.c)
 */

void __fastcall DpiDriverUnload(struct _DRIVER_OBJECT *a1, __int64 a2, __int64 a3)
{
  DpiCleanup(a1, 1, a3);
}
