/*
 * XREFs of PsAllocSiloContextSlot @ 0x1407720E0
 * Callers:
 *     <none>
 * Callees:
 *     PspStorageAllocSlot @ 0x14077C3E8 (PspStorageAllocSlot.c)
 */

__int64 __fastcall PsAllocSiloContextSlot(__int64 a1, __int64 a2)
{
  return PspStorageAllocSlot(a2);
}
