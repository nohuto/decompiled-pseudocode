/*
 * XREFs of ZwManageHotPatch @ 0x1406A8750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwManageHotPatch(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
