/*
 * XREFs of IoAcquireKsrPersistentMemory @ 0x14070EBF0
 * Callers:
 *     <none>
 * Callees:
 *     IoAcquireKsrPersistentMemoryEx @ 0x14070EC20 (IoAcquireKsrPersistentMemoryEx.c)
 */

__int64 __fastcall IoAcquireKsrPersistentMemory(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return IoAcquireKsrPersistentMemoryEx(a1, a2, 0LL, 0LL, 0LL, a3, a4);
}
