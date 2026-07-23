/*
 * XREFs of KiEnableXSave @ 0x140B4D11C
 * Callers:
 *     KiRestoreXSaveSupport @ 0x140B4D104 (KiRestoreXSaveSupport.c)
 *     KiConfigureDynamicProcessor @ 0x140B5A0E8 (KiConfigureDynamicProcessor.c)
 *     KiInitializeKernel @ 0x140B5A930 (KiInitializeKernel.c)
 * Callees:
 *     Feature_Servicing_KiSaveProcessorState_ExtendedState_Fix__private_IsEnabledNoReportingNoInline @ 0x1405B5D3C (Feature_Servicing_KiSaveProcessorState_ExtendedState_Fix__private_IsEnabledNoReportingNoInline.c)
 */

void __fastcall KiEnableXSave(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rdx
  struct _KPRCB *CurrentPrcb; // rbx
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
      if ( (unsigned int)Feature_Servicing_KiSaveProcessorState_ExtendedState_Fix__private_IsEnabledNoReportingNoInline() )
      {
        if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
          CurrentPrcb->CompactionMaskInit = (KeEnabledSupervisorXStateFeatures | MEMORY[0xFFFFF780000003D8]) & 0xFFFFFFFFFFFFFFFCuLL;
      }
    }
  }
}
