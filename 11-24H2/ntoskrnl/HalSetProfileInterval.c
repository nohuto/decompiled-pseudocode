/*
 * XREFs of HalSetProfileInterval @ 0x140544FF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalSetProfileInterval(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  if ( (int)guard_dispatch_icall_no_overrides(0LL, &v5, a3, a4) >= 0 )
    return v5;
  else
    return 0LL;
}
