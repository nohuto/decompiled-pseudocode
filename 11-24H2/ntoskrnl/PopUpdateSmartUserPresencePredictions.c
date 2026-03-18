/*
 * XREFs of PopUpdateSmartUserPresencePredictions @ 0x14075C5C0
 * Callers:
 *     PopWnfUserAwayPredictionCallback @ 0x14074D410 (PopWnfUserAwayPredictionCallback.c)
 *     PopWnfAudioCallback @ 0x140A3B7C0 (PopWnfAudioCallback.c)
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x1404B26F0 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1404D63C4 (PopIdleArmAoAcDozeS4Timer.c)
 */

void __fastcall PopUpdateSmartUserPresencePredictions(unsigned __int64 a1, unsigned int a2)
{
  __int64 v3; // rdx

  v3 = 0LL;
  if ( !byte_140F0BA8D && a1 >= MEMORY[0xFFFFF78000000014] && MEMORY[0xFFFFF78000000014] - a1 >= 0x10C388D000LL )
    v3 = a1;
  if ( qword_140F0BD98 != v3 )
  {
    qword_140F0BD98 = v3;
    if ( PopSmartUserPresenceAction )
    {
      if ( byte_140F0BDC0 && (PopIdleCancelAoAcDozeS4Timer(a2) || !*((_DWORD *)PopPolicy + 22)) )
        PopIdleArmAoAcDozeS4Timer();
    }
  }
}
