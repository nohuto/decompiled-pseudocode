/*
 * XREFs of ?GetProcess@VirtualAudioSessionInfo@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x180028CE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall VirtualAudioSessionInfo::GetProcess(VirtualAudioSessionInfo *this, struct IAudioProcess **a2)
{
  struct IAudioProcess *v2; // rcx

  v2 = (struct IAudioProcess *)*((_QWORD *)this + 2);
  *a2 = v2;
  (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v2 + 8LL))(v2);
  return 0LL;
}
