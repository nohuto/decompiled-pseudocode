/*
 * XREFs of PopIsDozeSupported @ 0x140A870C0
 * Callers:
 *     PopIdleArmAoAcDozeS4Timer @ 0x1404D6CD4 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopDeferDoze @ 0x140748DF8 (PopDeferDoze.c)
 *     PopUpdateSystemIdleContext @ 0x140A1112C (PopUpdateSystemIdleContext.c)
 *     PopSmartSuspendMakePredictions @ 0x140AC3C7C (PopSmartSuspendMakePredictions.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopIsHibernateSupported @ 0x140A870FC (PopIsHibernateSupported.c)
 */

char __fastcall PopIsDozeSupported(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // r8d
  char v3; // al

  if ( (unsigned __int8)PopIsHibernateSupported(a1) || PopPromoteHibernateToShutdown != v2 )
  {
    v3 = v2;
    if ( *(_BYTE *)(v1 + 7) != (_BYTE)v2 )
      v3 = 1;
    LOBYTE(v2) = v3;
  }
  return v2;
}
