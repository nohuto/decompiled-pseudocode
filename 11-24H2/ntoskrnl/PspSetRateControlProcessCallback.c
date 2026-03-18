/*
 * XREFs of PspSetRateControlProcessCallback @ 0x1407785A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PspSetRateControlProcessCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 result; // rax

  v4 = *(_QWORD *)(a2 + 8);
  result = 0LL;
  if ( v4 )
    return guard_dispatch_icall_no_overrides(a1, *(_QWORD *)(a2 + 16), v4, a4);
  return result;
}
