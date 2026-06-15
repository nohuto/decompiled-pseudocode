/*
 * XREFs of ?SetDuckingOptOutPreference@CAudioSession@@QEAAJ_N@Z @ 0x1800A2094
 * Callers:
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x18007A4B0 (AudioSessionManagerGetSessionForStreamSwitch.c)
 *     ?SetDuckingPreference@CServerAudioSessionControl@@UEAAJH@Z @ 0x18009FB00 (-SetDuckingPreference@CServerAudioSessionControl@@UEAAJH@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioSession::SetDuckingOptOutPreference(CAudioSession *this, char a2)
{
  if ( (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this + 1) + 56LL))((char *)this + 8) )
    return 2290679811LL;
  *((_BYTE *)this + 412) = a2;
  return 0LL;
}
