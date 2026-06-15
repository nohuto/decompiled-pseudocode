/*
 * XREFs of ?SetDuckingOptOutPreference@CAudioSession@@QEAAJ_N@Z @ 0x1800A5C84
 * Callers:
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x180048C00 (AudioSessionManagerGetSessionForStreamSwitch.c)
 *     ?SetDuckingPreference@CServerAudioSessionControl@@UEAAJH@Z @ 0x1800A3500 (-SetDuckingPreference@CServerAudioSessionControl@@UEAAJH@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioSession::SetDuckingOptOutPreference(CAudioSession *this, char a2)
{
  if ( (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this + 1) + 56LL))((char *)this + 8) )
    return 2290679811LL;
  *((_BYTE *)this + 412) = a2;
  return 0LL;
}
