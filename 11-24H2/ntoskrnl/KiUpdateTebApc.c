/*
 * XREFs of KiUpdateTebApc @ 0x14032CDE0
 * Callers:
 *     KiDeliverApc @ 0x1402C6540 (KiDeliverApc.c)
 * Callees:
 *     KiUpdateTebSchedulingPropertiesCurrentThread @ 0x14032CDF8 (KiUpdateTebSchedulingPropertiesCurrentThread.c)
 */

__int64 KiUpdateTebApc()
{
  return KiUpdateTebSchedulingPropertiesCurrentThread();
}
