/*
 * XREFs of ?GetProcess@CStreamPolicyVolumeClient@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x18001AB30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CStreamPolicyVolumeClient::GetProcess(CStreamPolicyVolumeClient *this, struct IAudioProcess **a2)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 8LL))(*((_QWORD *)this + 1));
  *a2 = (struct IAudioProcess *)*((_QWORD *)this + 1);
  return 0LL;
}
