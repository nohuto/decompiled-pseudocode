/*
 * XREFs of ZwCreateMutant @ 0x1406A7B50
 * Callers:
 *     BcdInitializeBcdSyncMutant @ 0x140C5C860 (BcdInitializeBcdSyncMutant.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateMutant(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
