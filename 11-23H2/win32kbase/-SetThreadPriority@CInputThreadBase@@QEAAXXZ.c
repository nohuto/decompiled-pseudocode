/*
 * XREFs of ?SetThreadPriority@CInputThreadBase@@QEAAXXZ @ 0x1C0084868
 * Callers:
 *     SetThreadPriority @ 0x1C0084850 (SetThreadPriority.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     ?_CalledOnInputThread@CInputThreadBase@@IEBA_NXZ @ 0x1C0057F3C (-_CalledOnInputThread@CInputThreadBase@@IEBA_NXZ.c)
 *     SetThreadBasePriority @ 0x1C0084B80 (SetThreadBasePriority.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CInputThreadBase::SetThreadPriority(CInputThreadBase *this)
{
  PKDPC BufferChainingDpc; // rdi

  BufferChainingDpc = WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
  RIMLockExclusive((__int64)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc->DpcListEntry);
  if ( LODWORD(BufferChainingDpc->DeferredRoutine) == 1 )
  {
    if ( CInputThreadBase::_CalledOnInputThread((CInputThreadBase *)BufferChainingDpc) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 176LL);
    SetThreadBasePriority(*(PETHREAD *)BufferChainingDpc->DeferredContext);
  }
  BufferChainingDpc->ProcessorHistory = 0LL;
  ExReleasePushLockExclusiveEx(&BufferChainingDpc->DpcListEntry, 0LL);
  KeLeaveCriticalRegion();
}
