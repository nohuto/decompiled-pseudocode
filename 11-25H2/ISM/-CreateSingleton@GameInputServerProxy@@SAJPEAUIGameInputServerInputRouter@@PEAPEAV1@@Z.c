/*
 * XREFs of ?CreateSingleton@GameInputServerProxy@@SAJPEAUIGameInputServerInputRouter@@PEAPEAV1@@Z @ 0x1800714D8
 * Callers:
 *     ??0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x18007F234 (--0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z.c)
 * Callees:
 *     ??0GameInputServerProxy@@AEAA@PEAUIGameInputServerInputRouter@@@Z @ 0x1800715D0 (--0GameInputServerProxy@@AEAA@PEAUIGameInputServerInputRouter@@@Z.c)
 *     ?LoadGameInput@GameInputServerProxy@@AEAAJXZ @ 0x1800716B0 (-LoadGameInput@GameInputServerProxy@@AEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E558 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GameInputServerProxy::CreateSingleton(
        struct IGameInputServerInputRouter *a1,
        struct GameInputServerProxy **a2)
{
  unsigned int v3; // ebx
  GameInputServerProxy *v5; // rax
  struct GameInputServerProxy *v6; // rax
  int GameInput; // edi
  struct GameInputServerProxy *v8; // rcx

  v3 = 0;
  *a2 = 0LL;
  AcquireSRWLockExclusive(&GameInputServerProxy::s_singletonLock);
  if ( GameInputServerProxy::s_singleton )
  {
    v3 = -2147418113;
    goto LABEL_13;
  }
  v5 = (GameInputServerProxy *)operator new(0xE0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v5 )
  {
    GameInputServerProxy::s_singleton = 0LL;
    goto LABEL_12;
  }
  v6 = GameInputServerProxy::GameInputServerProxy(v5, a1);
  GameInputServerProxy::s_singleton = v6;
  if ( !v6 )
  {
LABEL_12:
    v3 = -2147024882;
    goto LABEL_13;
  }
  GameInput = GameInputServerProxy::LoadGameInput(v6);
  if ( GameInput < 0 )
  {
    v8 = GameInputServerProxy::s_singleton;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)GameInputServerProxy::s_singleton + 6, 0xFFFFFFFF) == 1
      && v8 )
    {
      (*(void (__fastcall **)(struct GameInputServerProxy *, __int64))(*(_QWORD *)v8 + 96LL))(v8, 1LL);
    }
    GameInputServerProxy::s_singleton = 0LL;
    v3 = GameInput;
  }
  else
  {
    *a2 = GameInputServerProxy::s_singleton;
  }
LABEL_13:
  ReleaseSRWLockExclusive(&GameInputServerProxy::s_singletonLock);
  return v3;
}
