/*
 * XREFs of PopUpdateSmartUserPresencePredictions @ 0x14075B55C
 * Callers:
 *     PopWnfUserAwayPredictionCallback @ 0x14074B740 (PopWnfUserAwayPredictionCallback.c)
 *     PopWnfAudioCallback @ 0x140A30FA0 (PopWnfAudioCallback.c)
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x1404ACF80 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1404CF814 (PopIdleArmAoAcDozeS4Timer.c)
 */

void __fastcall PopUpdateSmartUserPresencePredictions(unsigned __int64 a1, unsigned int a2)
{
  __int64 v3; // rdx

  v3 = 0LL;
  if ( !byte_140F0B3CD && a1 >= MEMORY[0xFFFFF78000000014] && MEMORY[0xFFFFF78000000014] - a1 >= 0x10C388D000LL )
    v3 = a1;
  if ( qword_140F0B8B8 != v3 )
  {
    qword_140F0B8B8 = v3;
    if ( PopSmartUserPresenceAction )
    {
      if ( byte_140F0B8E0 && (PopIdleCancelAoAcDozeS4Timer(a2) || !*((_DWORD *)PopPolicy + 22)) )
        PopIdleArmAoAcDozeS4Timer();
    }
  }
}
