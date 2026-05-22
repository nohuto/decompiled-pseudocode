/*
 * XREFs of ?LoadGameInput@GameInputServerProxy@@AEAAJXZ @ 0x1800713E0
 * Callers:
 *     ?CreateSingleton@GameInputServerProxy@@SAJPEAUIGameInputServerInputRouter@@PEAPEAV1@@Z @ 0x180071208 (-CreateSingleton@GameInputServerProxy@@SAJPEAUIGameInputServerInputRouter@@PEAPEAV1@@Z.c)
 *     ?OnModuleUpdated@GameInputServerProxy@@CAXPEAX@Z @ 0x18010C3D0 (-OnModuleUpdated@GameInputServerProxy@@CAXPEAX@Z.c)
 * Callees:
 *     ?UnloadGameInput@GameInputServerProxy@@AEAAXXZ @ 0x1800714E8 (-UnloadGameInput@GameInputServerProxy@@AEAAXXZ.c)
 *     ?LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z @ 0x18007155C (-LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z.c)
 *     ?CreateServer@GameInputServerProxy@@AEAAJPEAVGameInputModule@@@Z @ 0x180071720 (-CreateServer@GameInputServerProxy@@AEAAJPEAVGameInputModule@@@Z.c)
 *     ?GetSystemDirPath@GameInputModule@@CAJPEBGAEAV?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@utl@@@utl@@PEA_K@Z @ 0x18008CD98 (-GetSystemDirPath@GameInputModule@@CAJPEBGAEAV-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@ut.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E848 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_GGameInputModule@@QEAAPEAXI@Z @ 0x18010C214 (--_GGameInputModule@@QEAAPEAXI@Z.c)
 *     ?StartWatching@GameInputWatcher@@QEAAJPEBGPEAXP6AX1@Z@Z @ 0x18010C738 (-StartWatching@GameInputWatcher@@QEAAJPEBGPEAXP6AX1@Z@Z.c)
 */

__int64 __fastcall GameInputServerProxy::LoadGameInput(GameInputServerProxy *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rax
  struct GameInputModule *v3; // rbx
  int Server; // esi
  GameInputModule *v5; // rdi
  int Module; // eax
  int SystemDirPath; // eax
  const struct std::nothrow_t *v8; // rdx
  void (*v9)(void *); // r9
  WCHAR *v10; // rbx
  LPCWSTR lpFileName; // [rsp+38h] [rbp+10h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = (struct GameInputModule *)v2;
  if ( !v2 )
  {
    Server = -2147024882;
LABEL_3:
    v5 = 0LL;
    goto LABEL_7;
  }
  LODWORD(v2->DebugInfo) = 0;
  *(_QWORD *)&v2->LockCount = 0LL;
  v2->OwningThread = 0LL;
  v2->LockSemaphore = 0LL;
  v2->SpinCount = 0LL;
  InitializeCriticalSection(v2 + 1);
  GameInputServerProxy::UnloadGameInput(this);
  Module = GameInputModule::LoadModule(v3);
  Server = Module;
  v5 = v3;
  if ( Module == 1 )
  {
    Server = -2147418113;
  }
  else if ( Module >= 0 )
  {
    Server = GameInputServerProxy::CreateServer(this, v3);
    if ( Server >= 0 )
    {
      *((_QWORD *)this + 7) = v3;
      goto LABEL_3;
    }
  }
LABEL_7:
  lpFileName = 0LL;
  SystemDirPath = GameInputModule::GetSystemDirPath(0LL, &lpFileName);
  v10 = (WCHAR *)lpFileName;
  if ( SystemDirPath >= 0 )
    GameInputWatcher::StartWatching((GameInputServerProxy *)((char *)this + 64), lpFileName, this, v9);
  if ( v10 )
    operator delete(v10, v8);
  if ( v5 )
    GameInputModule::`scalar deleting destructor'(v5, (unsigned int)v8);
  return (unsigned int)Server;
}
