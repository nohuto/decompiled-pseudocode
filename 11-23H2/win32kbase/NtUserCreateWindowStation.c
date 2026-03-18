/*
 * XREFs of NtUserCreateWindowStation @ 0x1C00BDEA0
 * Callers:
 *     <none>
 * Callees:
 *     IsEditionGetProcessWindowStationEntryPointSupported @ 0x1C00ABDF4 (IsEditionGetProcessWindowStationEntryPointSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserCreateWindowStation(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  __int64 v12; // rbx

  v12 = 0LL;
  if ( (int)IsEditionGetProcessWindowStationEntryPointSupported() >= 0 && qword_1C0295358 )
    return qword_1C0295358(a1, a2, a3, a4, a5, a6, a7, a8);
  return v12;
}
