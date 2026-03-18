/*
 * XREFs of HalpIommuInitInterrupts @ 0x140B4DA28
 * Callers:
 *     HalpIommuInitSystem @ 0x140B4D550 (HalpIommuInitSystem.c)
 * Callees:
 *     HalpInterruptSetIdtEntry @ 0x14055A460 (HalpInterruptSetIdtEntry.c)
 */

__int64 __fastcall HalpIommuInitInterrupts(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !HalpHvIommu )
    HalpInterruptSetIdtEntry(
      0xCEu,
      (__int64 (__fastcall *)(struct _KINTERRUPT *, void *, __int64, __int64))HalpIommuInterruptRoutine,
      12,
      a4,
      -1LL);
  return 0LL;
}
