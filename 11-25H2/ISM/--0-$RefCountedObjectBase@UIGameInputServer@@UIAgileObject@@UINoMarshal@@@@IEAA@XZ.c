/*
 * XREFs of ??0?$RefCountedObjectBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@IEAA@XZ @ 0x180098CA0
 * Callers:
 *     ??0GameInputServerProxy@@AEAA@PEAUIGameInputServerInputRouter@@@Z @ 0x1800715D0 (--0GameInputServerProxy@@AEAA@PEAUIGameInputServerInputRouter@@@Z.c)
 * Callees:
 *     ??0?$ObjectBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@IEAA@XZ @ 0x180098CE0 (--0-$ObjectBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@IEAA@XZ.c)
 */

__int64 RefCountedObjectBase<IGameInputServer,IAgileObject,INoMarshal>::RefCountedObjectBase<IGameInputServer,IAgileObject,INoMarshal>()
{
  __int64 v0; // rcx
  __int64 result; // rax

  ObjectBase<IGameInputServer,IAgileObject,INoMarshal>::ObjectBase<IGameInputServer,IAgileObject,INoMarshal>();
  *(_QWORD *)(v0 + 8) = &RefCountedObjectBase<IGameInputServer,IAgileObject,INoMarshal>::`vftable'{for `IAgileObject'};
  *(_QWORD *)v0 = &RefCountedObjectBase<IGameInputServer,IAgileObject,INoMarshal>::`vftable'{for `IGameInputServer'};
  *(_QWORD *)(v0 + 16) = &RefCountedObjectBase<IGameInputServer,IAgileObject,INoMarshal>::`vftable'{for `INoMarshal'};
  result = v0;
  *(_DWORD *)(v0 + 24) = 1;
  return result;
}
