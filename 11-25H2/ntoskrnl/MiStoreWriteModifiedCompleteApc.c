/*
 * XREFs of MiStoreWriteModifiedCompleteApc @ 0x14040E600
 * Callers:
 *     KiDeliverApc @ 0x140286490 (KiDeliverApc.c)
 * Callees:
 *     MiWriteComplete @ 0x14040E620 (MiWriteComplete.c)
 */

__int64 __fastcall MiStoreWriteModifiedCompleteApc(__int64 a1, __int64 a2, __int64 a3, PVOID *a4)
{
  return MiWriteComplete(*a4);
}
