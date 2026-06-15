/*
 * XREFs of ??1init_once_completer@details@wil@@QEAA@XZ @ 0x1800A31A8
 * Callers:
 *     _CAudioSessionManager::CreateAudioSession_::_1_::dtor$51 @ 0x180168BC0 (_CAudioSessionManager--CreateAudioSession_--_1_--dtor$51.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::init_once_completer::~init_once_completer(wil::details::init_once_completer *this)
{
  InitOnceComplete(*(LPINIT_ONCE *)this, *((_DWORD *)this + 2), 0LL);
}
