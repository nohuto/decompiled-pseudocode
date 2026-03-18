/*
 * XREFs of UmfdUninitializeProcess @ 0x1403306D0
 * Callers:
 *     <none>
 * Callees:
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x140102480 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 */

void __fastcall UmfdUninitializeProcess(__int64 a1, __int64 a2, __int64 a3)
{
  UmfdHostLifeTimeManager::UninitializeProcess(a1, a2, a3);
}
