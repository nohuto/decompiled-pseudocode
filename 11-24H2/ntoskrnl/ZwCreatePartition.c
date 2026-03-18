/*
 * XREFs of ZwCreatePartition @ 0x1406A7BB0
 * Callers:
 *     ExpInitializeMemoryMirroring @ 0x140C40498 (ExpInitializeMemoryMirroring.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreatePartition(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
