/*
 * XREFs of ?GetLevelData@CMuteSoftware@@MEAAJXZ @ 0x180101EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?LoadMuteState@CMuteSoftware@@AEAAJXZ @ 0x18010230C (-LoadMuteState@CMuteSoftware@@AEAAJXZ.c)
 */

__int64 __fastcall CMuteSoftware::GetLevelData(CMuteSoftware *this)
{
  CMuteSoftware::LoadMuteState(this);
  return 0LL;
}
