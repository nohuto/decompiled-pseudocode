/*
 * XREFs of SepInitializationPhase0 @ 0x140C3BE1C
 * Callers:
 *     SeInitSystem @ 0x140C3BDD8 (SeInitSystem.c)
 * Callees:
 *     ObInitializeFastReference @ 0x140A4A4A0 (ObInitializeFastReference.c)
 *     SepInitializeWorkList @ 0x140C399AC (SepInitializeWorkList.c)
 *     SepVariableInitialization @ 0x140C39A60 (SepVariableInitialization.c)
 *     SeMakeSystemToken @ 0x140C3C448 (SeMakeSystemToken.c)
 *     SepTokenInitialization @ 0x140C3C9D8 (SepTokenInitialization.c)
 *     SepRmDbInitialization @ 0x140C3D180 (SepRmDbInitialization.c)
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
  *($F6E8E81C3EACE4482EE2626591212BC8 *)((char *)&CurrentThread[1].116 + 4) = 0LL;
  _InterlockedAnd((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0xFFFFFFF7);
  Process[1].ActiveProcessors = 0LL;
  SystemToken = SeMakeSystemToken();
  ObInitializeFastReference((__int64 *)&Process[1].ActiveProcessors, SystemToken);
  v3 = Process[1].ActiveProcessors == 0LL;
  SepDefaultMandatorySid = SeMediumMandatorySid;
  return !v3;
}
