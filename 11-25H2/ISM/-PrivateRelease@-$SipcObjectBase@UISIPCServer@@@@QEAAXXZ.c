/*
 * XREFs of ?PrivateRelease@?$SipcObjectBase@UISIPCServer@@@@QEAAXXZ @ 0x18010DD3C
 * Callers:
 *     ?OnDisposePublic@SipcServer@@EEAAXXZ @ 0x18010D940 (-OnDisposePublic@SipcServer@@EEAAXXZ.c)
 *     ?ReleasePrivateReference@SipcServer@@UEAAXXZ @ 0x18010E430 (-ReleasePrivateReference@SipcServer@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SipcObjectBase<ISIPCServer>::PrivateRelease(volatile signed __int64 *a1)
{
  unsigned __int64 v1; // r8
  __int64 result; // rax

  v1 = _InterlockedExchangeAdd64(a1 + 1, 0xFFFFFFFF00000000uLL);
  result = HIDWORD(v1);
  if ( v1 == 0x100000000LL )
  {
    if ( a1 )
      return (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 48))(a1);
  }
  return result;
}
