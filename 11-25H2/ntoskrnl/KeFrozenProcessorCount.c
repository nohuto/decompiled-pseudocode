/*
 * XREFs of KeFrozenProcessorCount @ 0x1405BDA44
 * Callers:
 *     IopBugCheckProgressEfiVariableServicesAvailable @ 0x14058FFC0 (IopBugCheckProgressEfiVariableServicesAvailable.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405C17E0 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 * Callees:
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 */

__int64 KeFrozenProcessorCount()
{
  unsigned int v0; // edi
  unsigned int i; // ebx
  __int64 Prcb; // rax

  v0 = 0;
  for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
  {
    Prcb = KeGetPrcb(i);
    if ( Prcb && (*(_DWORD *)(Prcb + 11656) & 0xF) == 2 )
      ++v0;
  }
  return v0;
}
