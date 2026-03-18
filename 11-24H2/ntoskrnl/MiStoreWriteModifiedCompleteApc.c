/*
 * XREFs of MiStoreWriteModifiedCompleteApc @ 0x14036B640
 * Callers:
 *     KiDeliverApc @ 0x14031D9B0 (KiDeliverApc.c)
 * Callees:
 *     MiWriteComplete @ 0x14036B660 (MiWriteComplete.c)
 */

__int64 __fastcall MiStoreWriteModifiedCompleteApc(__int64 a1, __int64 a2, __int64 a3, PVOID *a4)
{
  return MiWriteComplete(*a4);
}
