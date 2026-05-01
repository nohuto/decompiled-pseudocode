/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___::Run @ 0x18031B380
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z @ 0x18010ABCC (-LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___::Run(
        __int64 a1)
{
  int KGLFromGameDVRFolder; // eax
  __int64 v3; // rcx
  void (__fastcall *v4)(_QWORD); // rax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  KGLFromGameDVRFolder = IsGameManager::LoadKGLFromGameDVRFolder(*(IsGameManager **)(a1 + 16), 1);
  if ( KGLFromGameDVRFolder < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1DA,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)KGLFromGameDVRFolder);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(void (__fastcall **)(_QWORD))(v3 + 56);
  if ( v4 )
    v4(*(_QWORD *)(v3 + 64));
  result = *(_QWORD *)(a1 + 16);
  _InterlockedExchange((volatile __int32 *)(result + 40), 0);
  return result;
}
