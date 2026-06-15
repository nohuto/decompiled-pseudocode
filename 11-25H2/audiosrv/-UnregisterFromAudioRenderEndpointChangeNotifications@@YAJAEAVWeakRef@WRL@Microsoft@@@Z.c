/*
 * XREFs of ?UnregisterFromAudioRenderEndpointChangeNotifications@@YAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x180027454
 * Callers:
 *     ??1CSharedStreamGroupProxy@@MEAA@XZ @ 0x18002666C (--1CSharedStreamGroupProxy@@MEAA@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UnregisterFromAudioRenderEndpointChangeNotifications(struct Microsoft::WRL::WeakRef *a1)
{
  struct IAudioResourceManager *v1; // rax
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = g_AudioResourceManager;
  if ( g_AudioResourceManager )
    v1 = (struct IAudioResourceManager *)((char *)g_AudioResourceManager - 8);
  v2 = (*(__int64 (__fastcall **)(__int64, struct Microsoft::WRL::WeakRef *))(*(_QWORD *)(*((_QWORD *)v1 + 9) + 8LL)
                                                                            + 32LL))(
         *((_QWORD *)v1 + 9) + 8LL,
         a1);
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE30,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v2);
  return 0LL;
}
