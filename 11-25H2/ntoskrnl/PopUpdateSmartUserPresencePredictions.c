/*
 * XREFs of PopUpdateSmartUserPresencePredictions @ 0x14074FCF8
 * Callers:
 *     PopWnfUserAwayPredictionCallback @ 0x140741340 (PopWnfUserAwayPredictionCallback.c)
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 *     PopWnfAudioCallback @ 0x140A36A30 (PopWnfAudioCallback.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x1404B170C (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1404D6CD4 (PopIdleArmAoAcDozeS4Timer.c)
 */

void __fastcall PopUpdateSmartUserPresencePredictions(unsigned __int64 a1, unsigned int a2)
{
  __int64 v3; // rdx

  v3 = 0LL;
  if ( !byte_140F0B74D && a1 >= MEMORY[0xFFFFF78000000014] && MEMORY[0xFFFFF78000000014] - a1 >= 0x10C388D000LL )
    v3 = a1;
  if ( qword_140F0A9B8 != v3 )
  {
    qword_140F0A9B8 = v3;
    if ( PopSmartUserPresenceAction )
    {
      if ( byte_140F0A9E0 && (PopIdleCancelAoAcDozeS4Timer(a2) || !*((_DWORD *)PopPolicy + 22)) )
        PopIdleArmAoAcDozeS4Timer();
    }
  }
}
