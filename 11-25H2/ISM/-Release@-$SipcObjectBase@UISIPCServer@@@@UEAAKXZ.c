/*
 * XREFs of ?Release@?$SipcObjectBase@UISIPCServer@@@@UEAAKXZ @ 0x18010E3B0
 * Callers:
 *     ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAUISIPCServer@@PEBUSIPC_CLIENT_INFO@@PEAX@Z44PEAPEAU4@@Z @ 0x180060F10 (-Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAUISIPCServer@@PEBUSIPC_CLIENT_.c)
 * Callees:
 *     SipcFailFast @ 0x18010E99C (SipcFailFast.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SipcObjectBase<ISIPCServer>::Release(volatile signed __int64 *a1)
{
  unsigned int v2; // ebx

  v2 = _InterlockedExchangeAdd64(a1 + 1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( v2 <= 1 )
  {
    SipcFailFast(2147943113LL);
    __debugbreak();
  }
  if ( v2 == 2 )
  {
    (*(void (__fastcall **)(volatile signed __int64 *))(*a1 + 56))(a1);
    if ( !((unsigned __int64)_InterlockedExchangeAdd64(a1 + 1, 0xFFFFFFFFFFFFFFFFuLL) >> 32) )
      (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*a1 + 48))(a1, 1LL);
  }
  return v2 - 2;
}
