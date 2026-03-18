/*
 * XREFs of PsPicoSystemCallDispatch @ 0x140A97A68
 * Callers:
 *     PsPicoAltSystemCallDispatch @ 0x1405D9F50 (PsPicoAltSystemCallDispatch.c)
 *     PsSyscallProviderDispatch @ 0x140A978D0 (PsSyscallProviderDispatch.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PsPicoSystemCallDispatch(__int64 a1)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  guard_dispatch_icall_no_overrides(&v3);
  return *(_QWORD *)(a1 + 48);
}
