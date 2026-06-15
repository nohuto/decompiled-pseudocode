/*
 * XREFs of ?GetGroupingParam@CServerAudioSessionControl@@UEAAJPEAU_GUID@@@Z @ 0x180084ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CServerAudioSessionControl::GetGroupingParam(CServerAudioSessionControl *this, struct _GUID *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct _GUID *))(**((_QWORD **)this + 9) + 136LL))(
           *((_QWORD *)this + 9),
           a2);
}
