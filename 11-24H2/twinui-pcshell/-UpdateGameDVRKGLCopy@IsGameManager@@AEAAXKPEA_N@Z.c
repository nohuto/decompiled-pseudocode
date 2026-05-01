/*
 * XREFs of ?UpdateGameDVRKGLCopy@IsGameManager@@AEAAXKPEA_N@Z @ 0x18010B660
 * Callers:
 *     ?ReloadKnownGameList@IsGameManager@@UEAAXXZ @ 0x18010B540 (-ReloadKnownGameList@IsGameManager@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x18001BF54 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ?CreateQueryKnownGameListInstance@KnownGameList@@YAJPEAPEAUIQueryKnownGameList@1@PEBG@Z @ 0x18010B2D0 (-CreateQueryKnownGameListInstance@KnownGameList@@YAJPEAPEAUIQueryKnownGameList@1@PEBG@Z.c)
 *     ?GetKGLLocationForApp@IsGameManager@@AEAAJPEBG0PEAVString@Internal@Windows@@@Z @ 0x18010BC48 (-GetKGLLocationForApp@IsGameManager@@AEAAJPEBG0PEAVString@Internal@Windows@@@Z.c)
 *     ?RegisterKGLLocationForNotifications@IsGameManager@@AEAAJPEAUKGLUpdateLocationInfo@@@Z @ 0x18010CA0C (-RegisterKGLLocationForNotifications@IsGameManager@@AEAAJPEAUKGLUpdateLocationInfo@@@Z.c)
 *     ?GetKnownFolderSubFolder@@YAJAEBU_GUID@@PEBG1PEAVString@Internal@Windows@@@Z @ 0x18010D034 (-GetKnownFolderSubFolder@@YAJAEBU_GUID@@PEBG1PEAVString@Internal@Windows@@@Z.c)
 *     ?IsGameManager_KGLUpdated@GameDVRTraceProvider@@SAXIHI@Z @ 0x1802BDCEC (-IsGameManager_KGLUpdated@GameDVRTraceProvider@@SAXIHI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall IsGameManager::UpdateGameDVRKGLCopy(__int64 this, unsigned int a2, bool *a3)
{
  DWORD LastError; // esi
  unsigned int v4; // r12d
  wchar_t **v5; // r14
  __int64 v6; // rbx
  int v7; // r13d
  int KGLLocationForApp; // r15d
  BOOL IsStringEmpty; // eax
  HSTRING v10; // rdi
  PCWSTR StringRawBuffer; // r13
  PCWSTR v12; // rax
  signed __int64 v13; // r13
  int v14; // edx
  struct KnownGameList::IQueryKnownGameList **v15; // rax
  const unsigned __int16 *v16; // r8
  int QueryKnownGameListInstance; // r15d
  __int64 v18; // rdi
  const WCHAR *v19; // rax
  const WCHAR *v20; // rax
  const WCHAR *v21; // rax
  const WCHAR *v22; // rdi
  const WCHAR *v23; // rax
  BOOL v24; // eax
  const WCHAR *v25; // rdi
  const WCHAR *v26; // rax
  int v27; // edi
  bool v28; // [rsp+20h] [rbp-38h]
  unsigned int v29; // [rsp+24h] [rbp-34h]
  unsigned int v30; // [rsp+28h] [rbp-30h]
  unsigned int v31; // [rsp+30h] [rbp-28h] BYREF
  __int64 v32; // [rsp+38h] [rbp-20h] BYREF
  HSTRING string[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v34; // [rsp+A0h] [rbp+48h]
  HSTRING v37; // [rsp+B8h] [rbp+60h] BYREF

  v34 = this;
  LastError = 0;
  v29 = 0;
  v30 = -1;
  *a3 = 0;
  v4 = 0;
  v5 = off_1808C5318;
  do
  {
    v6 = 0LL;
    v32 = 0LL;
    v31 = 0;
    LOBYTE(v37) = 0;
    v28 = 0;
    v7 = 0;
    KGLLocationForApp = 0;
    if ( *((_DWORD *)v5 - 2) )
    {
      if ( *((_DWORD *)v5 - 2) == 1 )
      {
        string[0] = 0LL;
        KGLLocationForApp = IsGameManager::GetKGLLocationForApp(
                              (IsGameManager *)this,
                              *v5,
                              v5[1],
                              (struct Windows::Internal::String *)string);
        if ( KGLLocationForApp < 0 )
        {
          v10 = string[0];
        }
        else
        {
          IsStringEmpty = WindowsIsStringEmpty((HSTRING)v5[5]);
          v10 = string[0];
          if ( IsStringEmpty )
            goto LABEL_10;
          StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)v5[5], 0LL);
          v12 = WindowsGetStringRawBuffer(v10, 0LL);
          v13 = (char *)StringRawBuffer - (char *)v12;
          do
          {
            this = *(PCWSTR)((char *)v12 + v13);
            v14 = *v12 - (_DWORD)this;
            if ( v14 )
              break;
            ++v12;
          }
          while ( (_DWORD)this );
          if ( v14 )
          {
LABEL_10:
            WindowsDeleteString((HSTRING)v5[5]);
            v5[5] = (wchar_t *)v10;
            v10 = 0LL;
            string[0] = 0LL;
            KGLLocationForApp = IsGameManager::GetKGLLocationForApp(
                                  (IsGameManager *)(9LL * v4 + 7),
                                  *v5,
                                  0LL,
                                  (struct Windows::Internal::String *)((char *)&g_rgKGLUpdateLocations + 72 * v4 + 56));
            v28 = KGLLocationForApp >= 0;
          }
          else
          {
            LOBYTE(v37) = 1;
          }
        }
        if ( v10 )
          WindowsDeleteString(v10);
        v7 = 0;
LABEL_14:
        if ( KGLLocationForApp < 0 )
          goto LABEL_15;
        goto LABEL_20;
      }
      if ( *((_DWORD *)v5 - 2) == 2 )
      {
        if ( WindowsIsStringEmpty((HSTRING)v5[6]) )
        {
          KGLLocationForApp = GetKnownFolderSubFolder(
                                &FOLDERID_Windows,
                                *v5,
                                0LL,
                                (struct Windows::Internal::String *)((char *)&g_rgKGLUpdateLocations
                                                                   + 64 * v4
                                                                   + 8 * v4
                                                                   + 56));
          if ( KGLLocationForApp < 0 )
            goto LABEL_26;
        }
        if ( WindowsIsStringEmpty((HSTRING)v5[5]) )
        {
          KGLLocationForApp = GetKnownFolderSubFolder(
                                &FOLDERID_Windows,
                                *v5,
                                v5[1],
                                (struct Windows::Internal::String *)((char *)&g_rgKGLUpdateLocations
                                                                   + 64 * v4
                                                                   + 8 * v4
                                                                   + 48));
          goto LABEL_14;
        }
      }
    }
    else
    {
      v7 = 5;
      v18 = 72LL * v4;
      if ( WindowsIsStringEmpty((HSTRING)v5[6]) )
      {
        KGLLocationForApp = GetKnownFolderSubFolder(
                              &FOLDERID_LocalAppData,
                              *v5,
                              0LL,
                              (struct Windows::Internal::String *)((char *)&g_rgKGLUpdateLocations + v18 + 56));
        if ( KGLLocationForApp < 0 )
          goto LABEL_26;
      }
      if ( WindowsIsStringEmpty((HSTRING)v5[5]) )
      {
        KGLLocationForApp = GetKnownFolderSubFolder(
                              &FOLDERID_LocalAppData,
                              *v5,
                              v5[1],
                              (struct Windows::Internal::String *)((char *)&g_rgKGLUpdateLocations + v18 + 48));
        goto LABEL_14;
      }
    }
LABEL_20:
    if ( !WindowsIsStringEmpty((HSTRING)v5[6]) )
    {
      if ( v5[3] == (wchar_t *)-1LL || v28 )
      {
        IsGameManager::RegisterKGLLocationForNotifications(
          (IsGameManager *)(9LL * v4),
          (struct KGLUpdateLocationInfo *)((char *)&g_rgKGLUpdateLocations + 72 * v4));
        v6 = v32;
      }
      else
      {
        v6 = v32;
      }
    }
LABEL_15:
    if ( (_BYTE)v37 )
      goto LABEL_16;
    if ( KGLLocationForApp < 0 )
      goto LABEL_26;
    do
    {
      v15 = (struct KnownGameList::IQueryKnownGameList **)WindowsGetStringRawBuffer((HSTRING)v5[5], 0LL);
      QueryKnownGameListInstance = KnownGameList::CreateQueryKnownGameListInstance((KnownGameList *)&v32, v15, v16);
      if ( !v7 )
        break;
      if ( QueryKnownGameListInstance != -2147024864 )
        break;
      Sleep(0x64u);
      --v7;
    }
    while ( v7 );
    v6 = v32;
    if ( QueryKnownGameListInstance < 0 )
    {
LABEL_26:
      if ( *((_BYTE *)v5 + 16) )
      {
        v19 = WindowsGetStringRawBuffer((HSTRING)v5[5], 0LL);
        DeleteFileW(v19);
      }
      goto LABEL_41;
    }
    if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v32 + 80LL))(v32, &v31) >= 0 )
    {
      this = v29;
      if ( v31 > a2 && v31 > v29 || *((_BYTE *)v5 + 17) && v31 >= a2 && v31 >= v29 )
      {
        v29 = v31;
        if ( v30 != -1 )
        {
          this = 9LL * v30;
          if ( *((_BYTE *)&g_rgKGLUpdateLocations + 72 * v30 + 24) )
          {
            v20 = WindowsGetStringRawBuffer(*((HSTRING *)&g_rgKGLUpdateLocations + 9 * v30 + 6), 0LL);
            DeleteFileW(v20);
          }
        }
        v30 = v4;
      }
      else if ( *((_BYTE *)v5 + 16) )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
        v21 = WindowsGetStringRawBuffer((HSTRING)v5[5], 0LL);
        DeleteFileW(v21);
        v6 = v32;
      }
    }
LABEL_41:
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
LABEL_16:
    ++v4;
    v5 += 9;
  }
  while ( v4 < 7 );
  if ( v30 != -1 )
  {
    v37 = 0LL;
    if ( GetKnownFolderSubFolder(
           &FOLDERID_LocalAppData,
           L"Microsoft\\GameDVR\\KnownGameList.bin",
           0LL,
           (struct Windows::Internal::String *)&v37) >= 0 )
    {
      AcquireSRWLockExclusive((PSRWLOCK)(v34 + 32));
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(v34 + 24));
      if ( *((_BYTE *)&g_rgKGLUpdateLocations + 72 * v30 + 24) )
      {
        v22 = WindowsGetStringRawBuffer(v37, 0LL);
        v23 = WindowsGetStringRawBuffer(*((HSTRING *)&g_rgKGLUpdateLocations + 9 * v30 + 6), 0LL);
        v24 = MoveFileExW(v23, v22, 3u);
      }
      else
      {
        v25 = WindowsGetStringRawBuffer(v37, 0LL);
        v26 = WindowsGetStringRawBuffer(*((HSTRING *)&g_rgKGLUpdateLocations + 9 * v30 + 6), 0LL);
        v24 = CopyFileW(v26, v25, 0);
      }
      v27 = v24;
      if ( !v24 )
        LastError = GetLastError();
      GameDVRTraceProvider::IsGameManager_KGLUpdated(v30, v27, LastError);
      *a3 = 1;
      ReleaseSRWLockExclusive((PSRWLOCK)(v34 + 32));
    }
    Windows::Internal::String::~String(&v37);
  }
}
