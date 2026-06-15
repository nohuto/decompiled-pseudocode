/*
 * XREFs of ?GetLastInactivation@CServerAudioSessionControl@@UEAAJPEAN@Z @ 0x1800C3AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CServerAudioSessionControl::GetLastInactivation(CServerAudioSessionControl *this, double *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, double *))(**((_QWORD **)this + 9) + 120LL))(*((_QWORD *)this + 9), a2);
}
