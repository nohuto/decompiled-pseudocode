/*
 * XREFs of ?RuntimeClassInitialize@IsGameManager@@QEAAJXZ @ 0x180062A7C
 * Callers:
 *     ??$MakeAndInitialize@VIsGameManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVIsGameManager@@@Z @ 0x1800629B0 (--$MakeAndInitialize@VIsGameManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVIsGameManager@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180062C4C (--4-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A5D64 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Initialize@PiiFilter@@QEAAJXZ @ 0x1802CB9AC (-Initialize@PiiFilter@@QEAAJXZ.c)
 */

__int64 __fastcall IsGameManager::RuntimeClassInitialize(IsGameManager *this)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v5; // rcx
  int v6; // edi
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF
  HANDLE hObject; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  v2 = CreateGameConfigStoreClient(&v9);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = v9;
    if ( v5 )
      FreeGameConfigStoreClient();
    IsGameManager::_pStaticThis = this;
    v6 = PiiFilter::Initialize((IsGameManager *)((char *)this + 72));
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xFA,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(v6 | 0x10000000u));
    *((_BYTE *)this + 88) = v6 >= 0;
    hObject = CreateEventW(0LL, 1, 0, 0LL);
    wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator=(
      (char *)this + 96,
      &hObject);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    if ( !*((_QWORD *)this + 12) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0xFE,
        (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        v7);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF2,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}
