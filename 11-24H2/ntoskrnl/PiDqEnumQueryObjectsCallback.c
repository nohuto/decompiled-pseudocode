/*
 * XREFs of PiDqEnumQueryObjectsCallback @ 0x1408CB6F0
 * Callers:
 *     PiDmEnumObjectsWithCallback @ 0x1408D0E10 (PiDmEnumObjectsWithCallback.c)
 * Callees:
 *     PiDqQueryEnumObject @ 0x1408CB714 (PiDqQueryEnumObject.c)
 */

__int64 __fastcall PiDqEnumQueryObjectsCallback(__int64 a1, __int64 a2, _BYTE *a3)
{
  *a3 = 0;
  return PiDqQueryEnumObject(a2, a1);
}
