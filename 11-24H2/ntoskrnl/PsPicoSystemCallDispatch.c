/*
 * XREFs of PsPicoSystemCallDispatch @ 0x140A98B08
 * Callers:
 *     PsPicoAltSystemCallDispatch @ 0x1405E3720 (PsPicoAltSystemCallDispatch.c)
 *     PsSyscallProviderDispatch @ 0x140A98970 (PsSyscallProviderDispatch.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PsPicoSystemCallDispatch(__int64 a1, __int64 a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  guard_dispatch_icall_no_overrides(&v4, a2);
  return *(_QWORD *)(a1 + 48);
}
