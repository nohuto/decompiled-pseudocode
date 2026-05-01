/*
 * XREFs of ?PopulateAsync@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@SAXXZ @ 0x18003B9BC
 * Callers:
 *     ?RuntimeClassInitialize@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x180021768 (-RuntimeClassInitialize@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@QEAAJ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000221C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180002240 (--2@YAPEAX_K@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000E8B4 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::PopulateAsync(void)
{
  _DWORD *v0; // rbx
  HANDLE EventW; // rdi
  HANDLE v2; // rcx
  volatile signed __int32 *v3; // rbx
  struct _TP_WORK *ThreadpoolWork; // rax
  struct _TP_WORK *v5; // rbx
  signed int LastError; // eax
  _DWORD *v7; // [rsp+50h] [rbp+18h]

  EnterCriticalSection(&Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_initializeLock);
  if ( !Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_instance )
  {
    v0 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v0 )
      goto LABEL_15;
    *(_QWORD *)v0 = &Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::`vftable';
    v0[2] = 0;
    *((_QWORD *)v0 + 2) = 0LL;
    v0[6] = 0;
    *((_BYTE *)v0 + 28) = 0;
    *((_QWORD *)v0 + 4) = 0LL;
    *((_QWORD *)v0 + 5) = 0LL;
    EventW = CreateEventW(0LL, 1, 0, L"DefaultsReady");
    v2 = qword_180059168;
    if ( EventW != qword_180059168 )
    {
      if ( qword_180059168
        && !((unsigned __int8 (__fastcall *)(void *))*Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_readyEvent)(&Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_readyEvent) )
      {
        LastError = GetLastError();
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)LastError);
        JUMPOUT(0x18003BB9ALL);
      }
      v2 = EventW;
      qword_180059168 = EventW;
    }
    if ( v2 )
    {
      v7 = operator new(0x18uLL);
      *(_OWORD *)v7 = 0LL;
      v7[2] = 1;
      v7[3] = 1;
      *(_QWORD *)v7 = &std::_Ref_count<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>::`vftable';
      *((_QWORD *)v7 + 2) = v0;
      Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_instance = (Windows::Gaming::Preview::GamesEnumeration::SystemDefaults *)v0;
      v3 = (volatile signed __int32 *)qword_18005A068;
      qword_18005A068 = (__int64)v7;
      if ( v3 )
      {
        if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
          if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
        }
      }
    }
  }
  if ( !Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_populateThread )
  {
    ThreadpoolWork = CreateThreadpoolWork(
                       Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::PopulateValuesThreadProc,
                       0LL,
                       0LL);
    v5 = ThreadpoolWork;
    if ( ThreadpoolWork )
    {
      SubmitThreadpoolWork(ThreadpoolWork);
      Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_populateThread = v5;
    }
  }
LABEL_15:
  LeaveCriticalSection(&Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_initializeLock);
}
