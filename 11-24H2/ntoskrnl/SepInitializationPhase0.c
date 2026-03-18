/*
 * XREFs of SepInitializationPhase0 @ 0x140C39CC4
 * Callers:
 *     SeInitSystem @ 0x140C39C80 (SeInitSystem.c)
 * Callees:
 *     ObInitializeFastReference @ 0x140A3134C (ObInitializeFastReference.c)
 *     SepInitializeWorkList @ 0x140C3786C (SepInitializeWorkList.c)
 *     SepVariableInitialization @ 0x140C37920 (SepVariableInitialization.c)
 *     SeMakeSystemToken @ 0x140C3A2F0 (SeMakeSystemToken.c)
 *     SepTokenInitialization @ 0x140C3A880 (SepTokenInitialization.c)
 *     SepRmDbInitialization @ 0x140C3B028 (SepRmDbInitialization.c)
 */

bool SepInitializationPhase0()
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rbx
  __int64 SystemToken; // rax
  bool v3; // zf

  if ( !SepVariableInitialization()
    || !(unsigned __int8)SepRmDbInitialization()
    || !(unsigned __int8)SepTokenInitialization()
    || !(unsigned __int8)SepInitializeWorkList() )
  {
    return 0;
  }
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  *($5FBC9D02EEE85B5272AB6A5488D47FE6 *)((char *)&CurrentThread[1].116 + 4) = 0LL;
  _InterlockedAnd((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0xFFFFFFF7);
  Process[1].ActiveProcessors = 0LL;
  SystemToken = SeMakeSystemToken();
  ObInitializeFastReference((__int64 *)&Process[1].ActiveProcessors, SystemToken);
  v3 = Process[1].ActiveProcessors == 0LL;
  SepDefaultMandatorySid = SeMediumMandatorySid;
  return !v3;
}
