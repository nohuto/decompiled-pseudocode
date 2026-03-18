/*
 * XREFs of PsFreeAffinityToken @ 0x1404F8830
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x1409F24E8 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PsFreeAffinityToken(void *a1)
{
  ExFreePoolWithTag(a1, 0x74617350u);
}
