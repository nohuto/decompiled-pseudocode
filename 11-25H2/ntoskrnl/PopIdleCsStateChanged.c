/*
 * XREFs of PopIdleCsStateChanged @ 0x140ABC3B4
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1405D3DC0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x1404B170C (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopGetModernStandbyTransitionReason @ 0x1404B4458 (PopGetModernStandbyTransitionReason.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1404D6CD4 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
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
  byte_140F0A9E0 = v2;
  ModernStandbyTransitionReason = PopGetModernStandbyTransitionReason(0);
  if ( v2 )
  {
    qword_140F0A9E8 = qword_140E279C8;
    if ( !qword_140E279C8 )
      qword_140F0A9E8 = MEMORY[0xFFFFF78000000008];
    PopIdleArmAoAcDozeS4Timer();
  }
  else if ( ModernStandbyTransitionReason >= 0x1000000 || (ModernStandbyTransitionReason & 0xFFFFFF) != 6 )
  {
    PopIdleCancelAoAcDozeS4Timer(1u);
    dword_140F0A9C0 = 0;
    qword_140F0A9E8 = 0LL;
  }
  return PopReleasePolicyLock(v5, v4, v6, v7, v9);
}
