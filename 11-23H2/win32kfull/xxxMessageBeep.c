/*
 * XREFs of xxxMessageBeep @ 0x1C01F64D8
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0109880 (xxxRealDefWindowProc.c)
 *     NtUserMessageBeep @ 0x1C01D7090 (NtUserMessageBeep.c)
 *     EditionMessageBeep @ 0x1C01F64C0 (EditionMessageBeep.c)
 *     xxxMNChar @ 0x1C0216848 (xxxMNChar.c)
 *     xxxFlashEnabledPopup @ 0x1C0222478 (xxxFlashEnabledPopup.c)
 *     xxxMNKeyFilter @ 0x1C023E908 (xxxMNKeyFilter.c)
 * Callees:
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C007A890 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 *     xxxSoundSentry @ 0x1C01F5958 (xxxSoundSentry.c)
 *     xxxOldMessageBeep @ 0x1C01F6568 (xxxOldMessageBeep.c)
 */

__int64 __fastcall xxxMessageBeep(__int64 a1)
{
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) != 0 )
  {
    xxxOldMessageBeep(a1, 4LL, (unsigned int)a1);
  }
  else
  {
    if ( (gdwPUDFlags & 0x80000) != 0 )
      CUserPlaySound::PlaySync(CUserPlaySound::s_pUserPlaySound);
    xxxSoundSentry();
  }
  return 1LL;
}
