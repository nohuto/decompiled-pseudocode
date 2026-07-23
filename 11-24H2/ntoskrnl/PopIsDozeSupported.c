/*
 * XREFs of PopIsDozeSupported @ 0x140A882C8
 * Callers:
 *     PopIdleArmAoAcDozeS4Timer @ 0x1404CF814 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopDeferDoze @ 0x1407531E8 (PopDeferDoze.c)
 *     PopUpdateSystemIdleContext @ 0x1409A0024 (PopUpdateSystemIdleContext.c)
 *     PopSmartSuspendMakePredictions @ 0x140ABAB98 (PopSmartSuspendMakePredictions.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopIsHibernateSupported @ 0x140A88308 (PopIsHibernateSupported.c)
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
