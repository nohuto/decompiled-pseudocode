/*
 * XREFs of PiDqEnumQueryObjectsCallback @ 0x1408C9120
 * Callers:
 *     PiDmEnumObjectsWithCallback @ 0x1408CE800 (PiDmEnumObjectsWithCallback.c)
 * Callees:
 *     PiDqQueryEnumObject @ 0x1408C9144 (PiDqQueryEnumObject.c)
 */

__int64 __fastcall PiDqEnumQueryObjectsCallback(__int64 a1, __int64 a2, _BYTE *a3)
{
  *a3 = 0;
  return PiDqQueryEnumObject(a2, a1);
}
