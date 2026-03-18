/*
 * XREFs of xxxMessageBeep @ 0x140103034
 * Callers:
 *     xxxFlashEnabledPopup @ 0x140102EE4 (xxxFlashEnabledPopup.c)
 *     NtUserMessageBeep @ 0x140102F90 (NtUserMessageBeep.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     EditionMessageBeep @ 0x1402ADF60 (EditionMessageBeep.c)
 *     xxxMNChar @ 0x1402BD9E4 (xxxMNChar.c)
 *     xxxMNKeyFilter @ 0x1402EB098 (xxxMNKeyFilter.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1400A38B4 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 *     xxxSoundSentry @ 0x14010312C (xxxSoundSentry.c)
 *     xxxOldMessageBeep @ 0x1402ADF78 (xxxOldMessageBeep.c)
 */

__int64 __fastcall xxxMessageBeep(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax

  v2 = PtiCurrent(a1, a2);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)v2 + 132, 0, 0) & 4) != 0 )
  {
    xxxOldMessageBeep();
  }
  else
  {
    if ( (*(_DWORD *)(W32GetUserSessionState(v3, v2) + 67056) & 0x80000) != 0 )
    {
      UserSessionState = W32GetUserSessionState(v5, v4);
      CUserPlaySound::PlaySync(*(RPC_BINDING_HANDLE **)(UserSessionState + 70800));
    }
    xxxSoundSentry();
  }
  return 1LL;
}
