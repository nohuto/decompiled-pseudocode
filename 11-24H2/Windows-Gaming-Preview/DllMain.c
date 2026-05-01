/*
 * XREFs of DllMain @ 0x18000BB50
 * Callers:
 *     dllmain_dispatch @ 0x180001B78 (dllmain_dispatch.c)
 * Callees:
 *     __security_check_cookie @ 0x180001D00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rbx
  REGHANDLE v5; // rcx
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  if ( fdwReason )
  {
    if ( fdwReason == 1 )
    {
      ProviderId = (GUID)*((_OWORD *)off_180059008 - 1);
      if ( RegHandle )
        __fastfail(5u);
      xmmword_180059028 = 0LL;
      if ( !EventRegister(&ProviderId, (PENABLECALLBACK)tlgEnableCallback, &dword_180059000, &RegHandle) )
        EventSetInformation(
          RegHandle,
          2LL,
          off_180059008,
          *(unsigned __int16 *)off_180059008,
          *(_QWORD *)&ProviderId.Data1,
          *(_QWORD *)ProviderId.Data4);
    }
  }
  else
  {
    v3 = (volatile signed __int32 *)qword_18005A068;
    qword_18005A068 = 0LL;
    Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_instance = 0LL;
    if ( v3 )
    {
      if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *, DWORD, LPVOID))v3)(v3, fdwReason, lpvReserved);
        if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
      }
    }
    v4 = (volatile signed __int32 *)qword_18005A058;
    qword_18005A058 = 0LL;
    Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_instance = 0LL;
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *, _QWORD, LPVOID))v4)(v4, *(_QWORD *)&fdwReason, lpvReserved);
        if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      }
    }
    v5 = RegHandle;
    RegHandle = 0LL;
    dword_180059000 = 0;
    EventUnregister(v5);
  }
  return 1;
}
