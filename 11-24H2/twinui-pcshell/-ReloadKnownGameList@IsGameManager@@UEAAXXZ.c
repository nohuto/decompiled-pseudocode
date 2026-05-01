/*
 * XREFs of ?ReloadKnownGameList@IsGameManager@@UEAAXXZ @ 0x18010B540
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z @ 0x18010ABCC (-LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z.c)
 *     ?UpdateGameDVRKGLCopy@IsGameManager@@AEAAXKPEA_N@Z @ 0x18010B660 (-UpdateGameDVRKGLCopy@IsGameManager@@AEAAXKPEA_N@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___ @ 0x1802ADAC0 (Windows--Internal--ComTaskPool--QueueTask__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall IsGameManager::ReloadKnownGameList(IsGameManager *this)
{
  __int64 v2; // rcx
  int KGLFromGameDVRFolder; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  bool v5; // [rsp+60h] [rbp+20h] BYREF
  int pvData; // [rsp+68h] [rbp+28h] BYREF
  DWORD pcbData; // [rsp+70h] [rbp+30h] BYREF
  IsGameManager *v8; // [rsp+78h] [rbp+38h] BYREF

  pvData = 0;
  if ( !_InterlockedExchange((volatile __int32 *)this + 10, 1) )
  {
    v5 = 0;
    if ( !*((_QWORD *)this + 3) )
    {
      KGLFromGameDVRFolder = IsGameManager::LoadKGLFromGameDVRFolder(this, 0);
      if ( KGLFromGameDVRFolder < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1C4,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)KGLFromGameDVRFolder);
    }
    IsGameManager::UpdateGameDVRKGLCopy(this, *((_DWORD *)this + 11), &v5);
    pcbData = 4;
    RegGetValueW(
      HKEY_CURRENT_USER,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR",
      L"KGLToGCSUpdatedRevision",
      0x10u,
      0LL,
      &pvData,
      &pcbData);
    if ( !v5 && pvData == *((_DWORD *)this + 11) )
    {
      _InterlockedExchange((volatile __int32 *)this + 10, 0);
    }
    else
    {
      (*(void (__fastcall **)(IsGameManager *))(*(_QWORD *)this + 8LL))(this);
      v8 = this;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
      Windows::Internal::ComTaskPool::QueueTask__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___(v2, &v8);
      if ( v8 )
        (*(void (__fastcall **)(IsGameManager *))(*(_QWORD *)v8 + 16LL))(v8);
      (*(void (__fastcall **)(IsGameManager *))(*(_QWORD *)this + 16LL))(this);
    }
  }
}
