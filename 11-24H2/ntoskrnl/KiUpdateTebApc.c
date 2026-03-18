/*
 * XREFs of KiUpdateTebApc @ 0x140205800
 * Callers:
 *     KiDeliverApc @ 0x14031D9B0 (KiDeliverApc.c)
 * Callees:
 *     KiUpdateTebSchedulingPropertiesCurrentThread @ 0x140205818 (KiUpdateTebSchedulingPropertiesCurrentThread.c)
 */

__int64 KiUpdateTebApc()
{
  return KiUpdateTebSchedulingPropertiesCurrentThread();
}
