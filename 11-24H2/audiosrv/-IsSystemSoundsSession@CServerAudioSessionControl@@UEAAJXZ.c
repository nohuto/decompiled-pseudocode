/*
 * XREFs of ?IsSystemSoundsSession@CServerAudioSessionControl@@UEAAJXZ @ 0x18006CF70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_BOOL8 __fastcall CServerAudioSessionControl::IsSystemSoundsSession(CServerAudioSessionControl *this)
{
  return (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 9) + 8LL) + 128LL))(*((_QWORD *)this + 9) + 8LL) == 0;
}
