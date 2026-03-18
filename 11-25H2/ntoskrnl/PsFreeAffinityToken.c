/*
 * XREFs of PsFreeAffinityToken @ 0x1404F6070
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x1409F3FBC (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PsFreeAffinityToken(void *a1)
{
  ExFreePoolWithTag(a1, 0x74617350u);
}
