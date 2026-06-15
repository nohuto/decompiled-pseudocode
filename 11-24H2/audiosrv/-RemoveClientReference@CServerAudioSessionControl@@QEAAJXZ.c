/*
 * XREFs of ?RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x180010270
 * Callers:
 *     AUDIOSESSION_rundown @ 0x18000FAA0 (AUDIOSESSION_rundown.c)
 *     ??1CVADServer@@UEAA@XZ @ 0x180010938 (--1CVADServer@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CServerAudioSessionControl::RemoveClientReference(CServerAudioSessionControl *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v2 )
    (*(void (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)this + 104LL))(this);
  (*(void (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)this + 16LL))(this);
  return v2;
}
