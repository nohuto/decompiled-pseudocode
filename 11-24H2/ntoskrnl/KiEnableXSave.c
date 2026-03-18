/*
 * XREFs of KiEnableXSave @ 0x140B4B020
 * Callers:
 *     KiRestoreXSaveSupport @ 0x140B4B008 (KiRestoreXSaveSupport.c)
 *     KiConfigureDynamicProcessor @ 0x140B58068 (KiConfigureDynamicProcessor.c)
 *     KiInitializeKernel @ 0x140B588B0 (KiInitializeKernel.c)
 * Callees:
 *     <none>
 */

void __fastcall KiEnableXSave(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  int v4; // eax

  v1 = __readcr4();
  if ( _bittest64(&KeFeatureBits, 0x17u) )
  {
    if ( (v1 & 0x40000) == 0 )
      __writecr4(v1 | 0x40000);
    __asm { xsetbv }
    if ( KeEnabledSupervisorXStateFeatures )
      __writemsr(0xDA0u, KeEnabledSupervisorXStateFeatures);
    if ( _bittest64(&KeFeatureBits, 0x37u) )
    {
      if ( a1 )
        v2 = *a1;
      else
        v2 = MEMORY[0xFFFFF78000000710];
      __writemsr(0x1C4u, v2);
    }
  }
  else if ( (v1 & 0x40000) != 0 )
  {
    __writecr4(v1 & 0xFFFFFFFFFFFBFFFFuLL);
  }
  if ( _bittest64(&KeFeatureBits, 0x17u) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( CurrentPrcb->Context != &CurrentPrcb->ProcessorState.ContextFrame )
    {
      v4 = CurrentPrcb->ContextFlagsInit | 0x100040;
      CurrentPrcb->ContextFlagsInit = v4;
      if ( (_BYTE)KiKernelCetEnabled )
        CurrentPrcb->ContextFlagsInit = v4 | 0x100080;
    }
  }
}
