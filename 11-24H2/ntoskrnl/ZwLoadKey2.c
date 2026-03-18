/*
 * XREFs of ZwLoadKey2 @ 0x1406A8630
 * Callers:
 *     BiLoadHive @ 0x1409C2190 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLoadKey2(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
