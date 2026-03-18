/*
 * XREFs of ?Initialize@CGlobalSurfaceManager@@IEAAJPEAPEAX0@Z @ 0x1802259C0
 * Callers:
 *     ?Create@CGlobalSurfaceManager@@SAJPEAPEAX0PEAPEAVCSurfaceManager@@@Z @ 0x1800EF368 (-Create@CGlobalSurfaceManager@@SAJPEAPEAX0PEAPEAVCSurfaceManager@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180157710 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?CreateTokenThread@CSurfaceManager@@IEAAJP6AKPEAX@ZPEBG@Z @ 0x180226E78 (-CreateTokenThread@CSurfaceManager@@IEAAJP6AKPEAX@ZPEBG@Z.c)
 */

__int64 __fastcall CGlobalSurfaceManager::Initialize(CGlobalSurfaceManager *this, void **a2, void **a3)
{
  void **v3; // rsi
  void **v4; // r14
  HANDLE *v5; // r13
  int v9; // ebx
  int v10; // ebx
  int v11; // r9d
  LPVOID v12; // rax
  unsigned int (*v13)(void *); // rdx
  const unsigned __int16 *v14; // r8
  signed int LastError; // eax
  int TokenThread; // eax
  unsigned int dwNumberOfBytesToMap; // [rsp+20h] [rbp-60h]
  void **v19; // [rsp+30h] [rbp-50h]
  void *v20; // [rsp+38h] [rbp-48h] BYREF
  char v21; // [rsp+40h] [rbp-40h]
  void **v22; // [rsp+48h] [rbp-38h]
  void *v23; // [rsp+50h] [rbp-30h] BYREF
  char v24; // [rsp+58h] [rbp-28h]
  void **v25; // [rsp+60h] [rbp-20h]
  void *v26; // [rsp+68h] [rbp-18h] BYREF
  char v27; // [rsp+70h] [rbp-10h]

  v27 = 1;
  v3 = (void **)((char *)this + 496);
  v26 = 0LL;
  v4 = (void **)((char *)this + 136);
  v25 = (void **)((char *)this + 496);
  v5 = (HANDLE *)((char *)this + 96);
  v22 = (void **)((char *)this + 136);
  v23 = 0LL;
  v24 = 1;
  v19 = (void **)((char *)this + 96);
  v20 = 0LL;
  v21 = 1;
  v9 = NtTokenManagerOpenSectionAndEvents(&v20, (char *)this + 112, &v23, &v26);
  if ( v21 )
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v19,
      v20);
  if ( v24 )
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v22,
      v23);
  if ( v27 )
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v25,
      v26);
  if ( v9 < 0 )
  {
    v10 = v9 | 0x10000000;
    dwNumberOfBytesToMap = 107;
LABEL_9:
    v11 = v10;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, dwNumberOfBytesToMap, 0LL);
    return (unsigned int)v10;
  }
  SetLastError(0);
  v12 = MapViewOfFile(*v5, 4u, 0, 0, *((_QWORD *)this + 14));
  if ( !v12 )
  {
    LastError = GetLastError();
    v10 = LastError;
    if ( LastError > 0 )
      v10 = (unsigned __int16)LastError | 0x80070000;
    if ( v10 >= 0 )
      v10 = -2003304445;
    dwNumberOfBytesToMap = 113;
    goto LABEL_9;
  }
  *((_QWORD *)this + 13) = v12;
  TokenThread = CSurfaceManager::CreateTokenThread(this, v13, v14);
  v10 = TokenThread;
  if ( TokenThread < 0 )
  {
    v11 = TokenThread;
    dwNumberOfBytesToMap = 118;
    goto LABEL_19;
  }
  *a2 = *v4;
  *a3 = *v3;
  return (unsigned int)v10;
}
