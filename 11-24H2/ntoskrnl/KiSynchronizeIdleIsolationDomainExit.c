/*
 * XREFs of KiSynchronizeIdleIsolationDomainExit @ 0x1405BC6A8
 * Callers:
 *     KiExecuteSmtIsolationThread @ 0x1405C01A0 (KiExecuteSmtIsolationThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KiSendSoftwareInterrupt @ 0x14040F180 (KiSendSoftwareInterrupt.c)
 */

_KCORE_CONTROL_BLOCK *KiSynchronizeIdleIsolationDomainExit()
{
  struct _KPRCB *CurrentPrcb; // rcx
  _KCORE_CONTROL_BLOCK *result; // rax
  __int64 CoreControlBlockIndex; // rsi
  _KCORE_CONTROL_BLOCK_SHADOW *CoreControlBlockShadow; // rbx
  int v4; // edx
  int v5; // ecx
  __int64 i; // rdi
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  result = CurrentPrcb->CoreControlBlock;
  CoreControlBlockIndex = CurrentPrcb->CoreControlBlockIndex;
  CoreControlBlockShadow = result->CoreControlBlockShadow;
  if ( CoreControlBlockShadow->TotalProcessors != 1 )
  {
    v7 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)CoreControlBlockShadow, 0LL) )
    {
      do
      {
        KeYieldProcessorEx(&v7);
        result = (_KCORE_CONTROL_BLOCK *)CoreControlBlockShadow->Lock;
      }
      while ( CoreControlBlockShadow->Lock );
    }
    --CoreControlBlockShadow->IdleProcessors;
    CoreControlBlockShadow->ProcessorStates[CoreControlBlockIndex].AllState = 0;
    if ( !CoreControlBlockShadow->CurrentIsolationDomain )
      goto LABEL_11;
    if ( CoreControlBlockShadow->NextIsolationDomain == 1 )
      CoreControlBlockShadow->NextIsolationDomain = 0LL;
    v4 = (unsigned __int8)(CoreControlBlockShadow->NewDomainProcessors + 1);
    result = (_KCORE_CONTROL_BLOCK *)CoreControlBlockShadow->TotalProcessors;
    v5 = v4 + CoreControlBlockShadow->IdleProcessors;
    CoreControlBlockShadow->NewDomainProcessors = v4;
    if ( (_DWORD)result == v5 )
    {
      CoreControlBlockShadow->CurrentIsolationDomain = 0LL;
      CoreControlBlockShadow->NewDomainProcessors = 0;
      CoreControlBlockShadow->NextIsolationDomain = 1LL;
LABEL_11:
      _InterlockedAnd64((volatile signed __int64 *)CoreControlBlockShadow, 0LL);
      return result;
    }
    CoreControlBlockShadow->ProcessorStates[CoreControlBlockIndex].AllState = 2;
    _InterlockedAnd64((volatile signed __int64 *)CoreControlBlockShadow, 0LL);
    for ( i = 0LL; (unsigned int)i < CoreControlBlockShadow->TotalProcessors; i = (unsigned int)(i + 1) )
    {
      if ( (CoreControlBlockShadow->ProcessorStates[i].AllState & 3) == 0 )
        KiSendSoftwareInterrupt(CoreControlBlockShadow->InterruptTargets[i], 1);
    }
    while ( 1 )
    {
      result = (_KCORE_CONTROL_BLOCK *)CoreControlBlockShadow->CurrentIsolationDomain;
      if ( !result )
        break;
      _mm_pause();
    }
    CoreControlBlockShadow->ProcessorStates[CoreControlBlockIndex].AllState = 0;
  }
  return result;
}
