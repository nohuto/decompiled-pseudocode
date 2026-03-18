/*
 * XREFs of KeAllocateProcessorProfileStructures @ 0x1405B0460
 * Callers:
 *     EmonCompleteInitializeProfiling @ 0x140B4EC80 (EmonCompleteInitializeProfiling.c)
 * Callees:
 *     MmFreeIndependentPages @ 0x14039EC60 (MmFreeIndependentPages.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiIsIntelPebsSupported @ 0x1405B763C (KiIsIntelPebsSupported.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MmCreateShadowMapping @ 0x1407F674C (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x1407F699C (MmDeleteShadowMapping.c)
 *     MmAllocateIndependentPages @ 0x140A88F50 (MmAllocateIndependentPages.c)
 */

__int64 __fastcall KeAllocateProcessorProfileStructures(
        unsigned int a1,
        __int64 a2,
        _PROCESSOR_PROFILE_CONTROL_AREA **a3,
        char a4)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v10; // r15
  __int64 v11; // r14
  size_t v12; // rsi
  void *IndependentPages; // rax
  unsigned __int64 v14; // rbx
  unsigned int v15; // edi
  _PROCESSOR_PROFILE_CONTROL_AREA *v16; // r15
  __int64 v17; // r8
  _PROCESSOR_PROFILE_CONTROL_AREA *v18; // rax
  unsigned __int64 *PebsGpCounterReset; // rax
  char v20; // [rsp+68h] [rbp+20h]

  CurrentIrql = KeGetCurrentIrql();
  if ( !a4 )
  {
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentPrcb->ProcessorProfileControlArea = *a3;
    CurrentPrcb->ProfileEventIndexAddress = &(*a3)->RawBuffer + 5;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return 0LL;
  }
  *a3 = 0LL;
  v10 = a2 * a1;
  v20 = 0;
  v11 = a1;
  v12 = v10 + 160LL * a1;
  if ( KiKvaShadow )
    v12 = (v12 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  IndependentPages = (void *)MmAllocateIndependentPages(v12, 0LL);
  v14 = (unsigned __int64)IndependentPages;
  if ( IndependentPages )
  {
    memset_0(IndependentPages, 0, v12);
    if ( KiKvaShadow )
    {
      if ( !(unsigned int)MmCreateShadowMapping(v14, v12) )
      {
        v15 = -1073741670;
        goto LABEL_25;
      }
      v20 = 1;
    }
    v16 = (_PROCESSOR_PROFILE_CONTROL_AREA *)(v14 + v10);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    if ( (unsigned __int8)KiIsIntelPebsSupported(KeGetCurrentPrcb()) )
    {
      v18 = *(_PROCESSOR_PROFILE_CONTROL_AREA **)(v17 + 36504);
      if ( v18 )
      {
        *a3 = v18;
        v15 = -1073741302;
      }
      else
      {
        if ( a1 )
        {
          PebsGpCounterReset = v16->PebsDsSaveArea.As32Bit.PebsGpCounterReset;
          do
          {
            *PebsGpCounterReset = v14;
            v14 += a2;
            PebsGpCounterReset += 20;
            --v11;
          }
          while ( v11 );
        }
        v14 = 0LL;
        *a3 = v16;
        v15 = 0;
      }
    }
    else
    {
      v15 = -1073741637;
    }
    goto LABEL_25;
  }
  v15 = -1073741801;
LABEL_25:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( v14 )
  {
    if ( v20 )
      MmDeleteShadowMapping(v14, v12);
    MmFreeIndependentPages(v14, v12);
  }
  return v15;
}
