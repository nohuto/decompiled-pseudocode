/*
 * XREFs of KeSetAffinityThread @ 0x1405B5260
 * Callers:
 *     <none>
 * Callees:
 *     KiSetLegacyAffinityThread @ 0x14039FF9C (KiSetLegacyAffinityThread.c)
 */

__int64 __fastcall KeSetAffinityThread(__int64 a1, __int64 a2)
{
  return KiSetLegacyAffinityThread(a1, a2);
}
