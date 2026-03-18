/*
 * XREFs of HalpApicTimerIsInvariant @ 0x140560FAC
 * Callers:
 *     HalpApicTimerDiscover @ 0x140560DA0 (HalpApicTimerDiscover.c)
 * Callees:
 *     HalSocRequestApi @ 0x1404AE160 (HalSocRequestApi.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

bool __fastcall HalpApicTimerIsInvariant(__int64 a1)
{
  char v1; // al
  char v3; // [rsp+40h] [rbp+10h] BYREF
  int v4; // [rsp+48h] [rbp+18h] BYREF
  unsigned int v5; // [rsp+50h] [rbp+20h] BYREF
  int v6; // [rsp+58h] [rbp+28h] BYREF

  v4 = 0;
  v5 = 0;
  v3 = 0;
  if ( (int)HalSocRequestApi(a1, 0LL, 2, 16LL, &HalpApicTimerCpuApi) < 0 )
    return 0;
  v1 = guard_dispatch_icall_no_overrides(0LL, 0LL, 0LL, &v3);
  if ( v1 )
    v1 = v3;
  else
    v3 = 0;
  if ( v1 == 1 )
  {
    if ( KeGetCurrentPrcb()->CpuType < 0x15u )
      return 0;
  }
  else if ( v1 != 2 )
  {
    return 0;
  }
  v6 = 0;
  guard_dispatch_icall_no_overrides(0LL, &v5, &v4, &v4);
  if ( v5 >= 6 )
    guard_dispatch_icall_no_overrides(6LL, &v6, &v4, &v4);
  return (v6 & 4) != 0;
}
