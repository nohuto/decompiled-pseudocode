/*
 * XREFs of MmConfigurePrefetchSeekThreshold @ 0x1407EDFFC
 * Callers:
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

void __fastcall MmConfigurePrefetchSeekThreshold(int a1)
{
  dword_140E373D4 = a1;
}
