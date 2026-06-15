/*
 * XREFs of ?GetLevelData@CMuteSoftware@@MEAAJXZ @ 0x1800FDED0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?LoadMuteState@CMuteSoftware@@AEAAJXZ @ 0x1800FDF50 (-LoadMuteState@CMuteSoftware@@AEAAJXZ.c)
 */

__int64 __fastcall CMuteSoftware::GetLevelData(CMuteSoftware *this)
{
  int MuteState; // eax
  unsigned int v2; // ebx

  MuteState = CMuteSoftware::LoadMuteState(this);
  v2 = 0;
  if ( MuteState >= 0 )
    return (unsigned int)MuteState;
  return v2;
}
