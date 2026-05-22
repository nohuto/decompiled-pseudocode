/*
 * XREFs of ??0GameInputServerProxy@@AEAA@PEAUIGameInputServerInputRouter@@@Z @ 0x180071300
 * Callers:
 *     ?CreateSingleton@GameInputServerProxy@@SAJPEAUIGameInputServerInputRouter@@PEAPEAV1@@Z @ 0x180071208 (-CreateSingleton@GameInputServerProxy@@SAJPEAUIGameInputServerInputRouter@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0GameInputWatcher@@QEAA@XZ @ 0x18007138C (--0GameInputWatcher@@QEAA@XZ.c)
 *     ??0?$RefCountedObjectBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@IEAA@XZ @ 0x180098E00 (--0-$RefCountedObjectBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@IEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

GameInputServerProxy *__fastcall GameInputServerProxy::GameInputServerProxy(
        GameInputServerProxy *this,
        struct IGameInputServerInputRouter *a2)
{
  __int64 v3; // r8
  __int64 v4; // rcx

  RefCountedObjectBase<IGameInputServer,IAgileObject,INoMarshal>::RefCountedObjectBase<IGameInputServer,IAgileObject,INoMarshal>(
    this,
    a2,
    a2);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 1) = &GameInputServerProxy::`vftable'{for `IAgileObject'};
  *(_QWORD *)this = &GameInputServerProxy::`vftable'{for `IGameInputServer'};
  *((_QWORD *)this + 2) = &GameInputServerProxy::`vftable'{for `INoMarshal'};
  *((_QWORD *)this + 6) = v3;
  GameInputWatcher::GameInputWatcher((GameInputServerProxy *)((char *)this + 64));
  *((_DWORD *)this + 52) = 0;
  *((_QWORD *)this + 25) = (char *)this + 192;
  *((_QWORD *)this + 24) = (char *)this + 192;
  *((_QWORD *)this + 27) = 0LL;
  v4 = *((_QWORD *)this + 6);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return this;
}
