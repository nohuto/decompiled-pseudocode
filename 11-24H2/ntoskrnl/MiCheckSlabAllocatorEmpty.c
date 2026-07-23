/*
 * XREFs of MiCheckSlabAllocatorEmpty @ 0x1406879C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiCheckSlabAllocatorEmpty(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(a2 + 120) != 0LL;
}
