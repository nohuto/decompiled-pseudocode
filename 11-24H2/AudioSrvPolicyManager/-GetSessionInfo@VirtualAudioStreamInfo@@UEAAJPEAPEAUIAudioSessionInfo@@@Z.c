/*
 * XREFs of ?GetSessionInfo@VirtualAudioStreamInfo@@UEAAJPEAPEAUIAudioSessionInfo@@@Z @ 0x180028D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualAudioStreamInfo::GetSessionInfo(VirtualAudioStreamInfo *this, struct IAudioSessionInfo **a2)
{
  return (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IAudioSessionInfo **))this + 2))(
           *((_QWORD *)this + 2),
           &GUID_01de3f73_63e1_4021_a563_2efba2c7fb9b,
           a2);
}
