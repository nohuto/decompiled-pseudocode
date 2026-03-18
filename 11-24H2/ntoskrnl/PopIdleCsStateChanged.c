/*
 * XREFs of PopIdleCsStateChanged @ 0x140AC9180
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1405D87A0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x1404B26F0 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopGetModernStandbyTransitionReason @ 0x1404B3CFC (PopGetModernStandbyTransitionReason.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1404D63C4 (PopIdleArmAoAcDozeS4Timer.c)
 *     Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline @ 0x1405CCC74 (Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopIdleCsStateChanged(__int64 a1, __int64 a2)
{
  char v2; // bl
  unsigned int ModernStandbyTransitionReason; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // [rsp+20h] [rbp-8h]

  v2 = a1;
  PopAcquirePolicyLock(a1, a2);
  byte_140F0BDC0 = v2;
  ModernStandbyTransitionReason = PopGetModernStandbyTransitionReason(0);
  if ( v2 )
  {
    qword_140F0BDC8 = qword_140E27C08;
    if ( !qword_140E27C08 )
      qword_140F0BDC8 = MEMORY[0xFFFFF78000000008];
    PopIdleArmAoAcDozeS4Timer();
  }
  else if ( ModernStandbyTransitionReason >= 0x1000000 || (ModernStandbyTransitionReason & 0xFFFFFF) != 6 )
  {
    PopIdleCancelAoAcDozeS4Timer(1u);
    if ( !(unsigned int)Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline() )
      dword_140F0BDA0 = 0;
    qword_140F0BDC8 = 0LL;
  }
  return PopReleasePolicyLock(v5, v4, v6, v7, v9);
}
