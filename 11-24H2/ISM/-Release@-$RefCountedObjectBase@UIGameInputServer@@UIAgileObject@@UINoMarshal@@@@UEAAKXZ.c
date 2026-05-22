/*
 * XREFs of ?Release@?$RefCountedObjectBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@UEAAKXZ @ 0x18010C540
 * Callers:
 *     ?Release@?$RefCountedObjectBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@W7EAAKXZ @ 0x18010C580 (-Release@-$RefCountedObjectBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@W7EAAKXZ.c)
 *     ?Release@?$RefCountedObjectBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@WBA@EAAKXZ @ 0x18010C590 (-Release@-$RefCountedObjectBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@WBA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RefCountedObjectBase<IGameInputServer,IAgileObject,INoMarshal>::Release(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 6);
  if ( !v1 && a1 )
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 96LL))(a1, 1LL);
  return v1;
}
