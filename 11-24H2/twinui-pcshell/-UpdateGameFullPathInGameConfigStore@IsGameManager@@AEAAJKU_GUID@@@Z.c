/*
 * XREFs of ?UpdateGameFullPathInGameConfigStore@IsGameManager@@AEAAJKU_GUID@@@Z @ 0x18031B5E0
 * Callers:
 *     ?IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z @ 0x1800A90D0 (-IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z.c)
 * Callees:
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x18001BF54 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessFullPathFromProcessId@IsGameManager@@AEAAJKPEAVString@Internal@Windows@@@Z @ 0x18005E430 (-GetProcessFullPathFromProcessId@IsGameManager@@AEAAJKPEAVString@Internal@Windows@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IsGameManager::UpdateGameFullPathInGameConfigStore(IsGameManager *this, DWORD a2, struct _GUID *a3)
{
  int ProcessFullPathFromProcessId; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(__int64, __int128 *, __int64, PCWSTR, UINT32); // rdi
  UINT32 v10; // ebx
  PCWSTR StringRawBuffer; // rax
  __int128 v13; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HSTRING string; // [rsp+68h] [rbp+20h] BYREF

  string = 0LL;
  ProcessFullPathFromProcessId = IsGameManager::GetProcessFullPathFromProcessId(this, a2, &string);
  v6 = ProcessFullPathFromProcessId;
  if ( ProcessFullPathFromProcessId >= 0 )
  {
    v8 = *((_QWORD *)this + 2);
    v9 = *(__int64 (__fastcall **)(__int64, __int128 *, __int64, PCWSTR, UINT32))(*(_QWORD *)v8 + 72LL);
    v10 = 2 * WindowsGetStringLen(string);
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v13 = (__int128)*a3;
    ProcessFullPathFromProcessId = v9(v8, &v13, 23LL, StringRawBuffer, v10);
    v6 = ProcessFullPathFromProcessId;
    if ( ProcessFullPathFromProcessId >= 0 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    v7 = 2577LL;
  }
  else
  {
    v7 = 2575LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
    (const char *)(unsigned int)ProcessFullPathFromProcessId);
LABEL_7:
  Windows::Internal::String::~String(&string);
  return v6;
}
