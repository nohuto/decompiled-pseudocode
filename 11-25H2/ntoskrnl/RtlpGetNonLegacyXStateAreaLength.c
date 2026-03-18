/*
 * XREFs of RtlpGetNonLegacyXStateAreaLength @ 0x140260C70
 * Callers:
 *     KiInitializeUserApc @ 0x140260620 (KiInitializeUserApc.c)
 * Callees:
 *     RtlpGetEntireXStateAreaLength @ 0x140261E20 (RtlpGetEntireXStateAreaLength.c)
 */

__int64 RtlpGetNonLegacyXStateAreaLength()
{
  return (unsigned int)RtlpGetEntireXStateAreaLength() - 512;
}
