/*
 * XREFs of PopIsDozeSupported @ 0x140A8BDD8
 * Callers:
 *     PopIdleArmAoAcDozeS4Timer @ 0x1404D63C4 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopDeferDoze @ 0x140754EC8 (PopDeferDoze.c)
 *     PopUpdateSystemIdleContext @ 0x1409B99D4 (PopUpdateSystemIdleContext.c)
 *     PopSmartSuspendMakePredictions @ 0x140ABFAB8 (PopSmartSuspendMakePredictions.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopIsHibernateSupported @ 0x140A8BE18 (PopIsHibernateSupported.c)
 */

char __fastcall PopIsDozeSupported(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // r8d
  char v4; // al

  if ( (unsigned __int8)PopIsHibernateSupported(a1) || PopPromoteHibernateToShutdown != v2 )
  {
    v4 = v2;
    if ( *(_BYTE *)(v1 + 7) != (_BYTE)v2 )
      v4 = 1;
    LOBYTE(v2) = v4;
  }
  return v2;
}
