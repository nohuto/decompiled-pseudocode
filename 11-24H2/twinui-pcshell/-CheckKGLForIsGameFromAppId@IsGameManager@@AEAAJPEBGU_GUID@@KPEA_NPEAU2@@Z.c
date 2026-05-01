/*
 * XREFs of ?CheckKGLForIsGameFromAppId@IsGameManager@@AEAAJPEBGU_GUID@@KPEA_NPEAU2@@Z @ 0x1801F83F8
 * Callers:
 *     ?IsGameFromAppId@IsGameManager@@UEAAJPEBGPEAUGameConfigInfo@@@Z @ 0x180017C40 (-IsGameFromAppId@IsGameManager@@UEAAJPEBGPEAUGameConfigInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVString@Internal@Windows@@PEAU4@@Z @ 0x180107658 (-UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVS.c)
 *     ?IsGameEnabled@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@PEA_N@Z @ 0x18031AC28 (-IsGameEnabled@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@PEA_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall IsGameManager::CheckKGLForIsGameFromAppId(
        RTL_SRWLOCK *this,
        const unsigned __int16 *a2,
        struct _GUID *a3,
        unsigned int a4,
        bool *a5,
        struct _GUID *a6)
{
  RTL_SRWLOCK *v10; // rbx
  PVOID Ptr; // rcx
  unsigned int v12; // edi
  int v13; // eax
  IsGameManager *v14; // rcx
  unsigned int v15; // esi
  struct KnownGameList::IGameEntry *v16; // rcx
  int IsGameEnabled; // eax
  __int64 v18; // rax
  int updated; // eax
  struct KnownGameList::IGameEntry *v21[2]; // [rsp+40h] [rbp-68h] BYREF
  struct _GUID v22; // [rsp+50h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v10 = this + 4;
  v21[1] = (struct KnownGameList::IGameEntry *)&this[4];
  AcquireSRWLockShared(this + 4);
  v21[0] = 0LL;
  *a5 = 0;
  Ptr = this[3].Ptr;
  if ( !Ptr )
  {
    v12 = -2147467261;
LABEL_17:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v21);
    goto LABEL_18;
  }
  v13 = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, struct KnownGameList::IGameEntry **))(*(_QWORD *)Ptr + 56LL))(
          Ptr,
          a2,
          v21);
  v15 = v13;
  v12 = -2147023728;
  if ( v13 != -2147023728 )
  {
    if ( v13 >= 0 )
    {
      IsGameEnabled = IsGameManager::IsGameEnabled(v14, v21[0], a5);
      v12 = IsGameEnabled;
      if ( IsGameEnabled >= 0 )
      {
        v18 = *(_QWORD *)&a3->Data1;
        if ( !*(_QWORD *)&a3->Data1 )
          v18 = *(_QWORD *)a3->Data4;
        if ( !v18 )
        {
          v22 = *a3;
          updated = IsGameManager::UpdateGameConfigStoreFromKGL((IsGameManager *)this, v21[0], &v22, a4, 0, 0LL, a6);
          if ( updated < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x4E7,
              (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
              (const char *)(unsigned int)updated);
        }
        v12 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4DE,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)IsGameEnabled);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4DC,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)v13);
      v12 = v15;
    }
    goto LABEL_17;
  }
  v16 = v21[0];
  if ( v21[0] )
  {
    v21[0] = 0LL;
    (*(void (__fastcall **)(struct KnownGameList::IGameEntry *))(*(_QWORD *)v16 + 16LL))(v16);
  }
LABEL_18:
  ReleaseSRWLockShared(v10);
  return v12;
}
