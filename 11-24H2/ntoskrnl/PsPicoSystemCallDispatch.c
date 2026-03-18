/*
 * XREFs of PsPicoSystemCallDispatch @ 0x140A9D598
 * Callers:
 *     PsPicoAltSystemCallDispatch @ 0x1405E6120 (PsPicoAltSystemCallDispatch.c)
 *     PsSyscallProviderDispatch @ 0x140A9D400 (PsSyscallProviderDispatch.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PsPicoSystemCallDispatch(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  guard_dispatch_icall_no_overrides(&v6, a2, a3, a4);
  return *(_QWORD *)(a1 + 48);
}
