/*
 * XREFs of NtUserGetProcessWindowStation @ 0x1C00AFAF0
 * Callers:
 *     <none>
 * Callees:
 *     IsEditionGetProcessWindowStationEntryPointSupported @ 0x1C00ABDF4 (IsEditionGetProcessWindowStationEntryPointSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 NtUserGetProcessWindowStation()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( (int)IsEditionGetProcessWindowStationEntryPointSupported() >= 0 && qword_1C0295390 )
    qword_1C0295390(&v1);
  return v1;
}
