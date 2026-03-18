/*
 * XREFs of ?CreateTokenThread@CSurfaceManager@@IEAAJP6AKPEAX@ZPEBG@Z @ 0x180226E78
 * Callers:
 *     ?Initialize@CGlobalSurfaceManager@@IEAAJPEAPEAX0@Z @ 0x1802259C0 (-Initialize@CGlobalSurfaceManager@@IEAAJPEAPEAX0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180157710 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 */

__int64 __fastcall CSurfaceManager::CreateTokenThread(
        CSurfaceManager *this,
        unsigned int (*a2)(void *),
        const unsigned __int16 *a3)
{
  unsigned int v4; // ebx
  int v5; // r9d
  void **v6; // rbx
  HANDLE EventW; // rax
  HANDLE *v8; // rbx
  HANDLE Thread; // rax
  DWORD dwCreationFlags; // [rsp+20h] [rbp-18h]

  if ( *((_BYTE *)this + 144) )
  {
    v4 = -2147467260;
    v5 = -2147467260;
    dwCreationFlags = 32;
LABEL_3:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, dwCreationFlags, 0LL);
    return v4;
  }
  v6 = (void **)((char *)this + 128);
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    v6,
    EventW);
  if ( (((unsigned __int64)*v6 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    v8 = (HANDLE *)((char *)this + 120);
    Thread = CreateThread(0LL, 0LL, CGlobalSurfaceManager::s_TokenThreadMain, this, 4u, 0LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)this + 15,
      Thread);
    if ( ((*((_QWORD *)this + 15) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    {
      v5 = -2147024882;
      v4 = -2147024882;
      dwCreationFlags = 51;
      goto LABEL_3;
    }
    SetThreadDescription(*((HANDLE *)this + 15), L"DWM Token Thread");
    SetThreadPriority(*v8, 15);
    ResumeThread(*v8);
    return 0;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
  }
  return v4;
}
