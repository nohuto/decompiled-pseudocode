/*
 * XREFs of HalpIommuInitInterrupts @ 0x140B4FA78
 * Callers:
 *     HalpIommuInitSystem @ 0x140B4F5A0 (HalpIommuInitSystem.c)
 * Callees:
 *     HalpInterruptSetIdtEntry @ 0x140558090 (HalpInterruptSetIdtEntry.c)
 */

__int64 __fastcall HalpIommuInitInterrupts(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !HalpHvIommu )
    HalpInterruptSetIdtEntry(
      0xCEu,
      (__int64 (__fastcall *)(struct _KINTERRUPT *, void *))HalpIommuInterruptRoutine,
      12,
      a4,
      -1LL);
  return 0LL;
}
