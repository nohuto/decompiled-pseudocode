/*
 * XREFs of KiUpdateTebApc @ 0x140207180
 * Callers:
 *     KiDeliverApc @ 0x140286490 (KiDeliverApc.c)
 * Callees:
 *     KiUpdateTebSchedulingPropertiesCurrentThread @ 0x140207198 (KiUpdateTebSchedulingPropertiesCurrentThread.c)
 */

__int64 KiUpdateTebApc()
{
  return KiUpdateTebSchedulingPropertiesCurrentThread();
}
