/*
 * XREFs of ?GetId@CServerAudioSessionControl@@UEAAJPEAPEAG@Z @ 0x1800A5610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CServerAudioSessionControl::GetId(CServerAudioSessionControl *this, unsigned __int16 **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 **))(**((_QWORD **)this + 9) + 80LL))(
           *((_QWORD *)this + 9),
           a2);
}
