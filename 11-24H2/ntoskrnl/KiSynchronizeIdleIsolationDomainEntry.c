/*
 * XREFs of KiSynchronizeIdleIsolationDomainEntry @ 0x1405BC610
 * Callers:
 *     KiExecuteSmtIsolationThread @ 0x1405C01A0 (KiExecuteSmtIsolationThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 */

_KCORE_CONTROL_BLOCK *KiSynchronizeIdleIsolationDomainEntry()
{
  struct _KPRCB *CurrentPrcb; // rcx
  _KCORE_CONTROL_BLOCK *result; // rax
  __int64 CoreControlBlockIndex; // rdi
  _KCORE_CONTROL_BLOCK_SHADOW *CoreControlBlockShadow; // rbx
  int v4; // ecx
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  result = CurrentPrcb->CoreControlBlock;
  CoreControlBlockIndex = CurrentPrcb->CoreControlBlockIndex;
  CoreControlBlockShadow = result->CoreControlBlockShadow;
  if ( CoreControlBlockShadow->TotalProcessors != 1 )
  {
    v5 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)CoreControlBlockShadow, 0LL) )
    {
      do
        KeYieldProcessorEx(&v5);
      while ( CoreControlBlockShadow->Lock );
    }
    result = (_KCORE_CONTROL_BLOCK *)++CoreControlBlockShadow->IdleProcessors;
    if ( CoreControlBlockShadow->NextIsolationDomain != 1 )
    {
      v4 = (_DWORD)result + CoreControlBlockShadow->NewDomainProcessors;
      result = (_KCORE_CONTROL_BLOCK *)CoreControlBlockShadow->TotalProcessors;
      if ( (_DWORD)result == v4 )
      {
        result = (_KCORE_CONTROL_BLOCK *)CoreControlBlockShadow->NextIsolationDomain;
        CoreControlBlockShadow->CurrentIsolationDomain = (volatile unsigned __int64)result;
        CoreControlBlockShadow->NewDomainProcessors = 0;
        CoreControlBlockShadow->NextIsolationDomain = 1LL;
      }
    }
    CoreControlBlockShadow->ProcessorStates[CoreControlBlockIndex].AllState = 1;
    _InterlockedAnd64((volatile signed __int64 *)CoreControlBlockShadow, 0LL);
  }
  return result;
}
