/*
 * XREFs of ZwReadVirtualMemoryEx @ 0x1406A92F0
 * Callers:
 *     MmCopyMemory @ 0x140395E40 (MmCopyMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwReadVirtualMemoryEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
