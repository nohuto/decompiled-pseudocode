/*
 * XREFs of ?GetProcess@CAudioStream@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x180063200
 * Callers:
 *     ?GetProcess@CAudioStream@@W7EAAJPEAPEAUIAudioProcess@@@Z @ 0x180106910 (-GetProcess@CAudioStream@@W7EAAJPEAPEAUIAudioProcess@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioStream::GetProcess(CAudioStream *this, struct IAudioProcess **a2)
{
  struct IAudioProcess *v2; // rcx

  v2 = (struct IAudioProcess *)*((_QWORD *)this + 8);
  *a2 = v2;
  (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v2 + 8LL))(v2);
  return 0LL;
}
