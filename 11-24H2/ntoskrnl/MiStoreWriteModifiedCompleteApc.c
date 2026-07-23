/*
 * XREFs of MiStoreWriteModifiedCompleteApc @ 0x1402ED3E0
 * Callers:
 *     KiDeliverApc @ 0x1402C6540 (KiDeliverApc.c)
 * Callees:
 *     MiWriteComplete @ 0x1402ED400 (MiWriteComplete.c)
 */

__int64 __fastcall MiStoreWriteModifiedCompleteApc(__int64 a1, __int64 a2, __int64 a3, PVOID *a4)
{
  return MiWriteComplete(*a4);
}
