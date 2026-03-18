/*
 * XREFs of GreDxgkSessionConnected @ 0x14015C0F0
 * Callers:
 *     xxxRemoteConnect @ 0x140167F90 (xxxRemoteConnect.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreDxgkSessionConnected(__int64 a1)
{
  char v1; // bl
  __int64 DxgkWin32kInterface; // rax
  __int64 v3; // rcx

  v1 = a1;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1);
  LOBYTE(v3) = v1;
  return (*(__int64 (__fastcall **)(__int64))(DxgkWin32kInterface + 360))(v3);
}
