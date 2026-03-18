/*
 * XREFs of HalpTscDiscover @ 0x1405610F8
 * Callers:
 *     HalpTimerRegisterBuiltinPluginsCommon @ 0x1405488E4 (HalpTimerRegisterBuiltinPluginsCommon.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     HalSocRequestApi @ 0x1404AE160 (HalSocRequestApi.c)
 *     HalpTimerRegister @ 0x14056008C (HalpTimerRegister.c)
 *     HalpTscGetAttributes @ 0x140561240 (HalpTscGetAttributes.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 HalpTscDiscover()
{
  int v0; // ebx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  __int128 v10; // [rsp+30h] [rbp-59h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-49h] BYREF
  _DWORD v12[2]; // [rsp+50h] [rbp-39h] BYREF
  __int64 (__fastcall *v13)(); // [rsp+58h] [rbp-31h]
  __int64 (__fastcall *v14)(__int64, __int64); // [rsp+60h] [rbp-29h]
  int *v15; // [rsp+A8h] [rbp+1Fh]
  int v16; // [rsp+B0h] [rbp+27h]
  int v17; // [rsp+B4h] [rbp+2Bh]
  __int64 v18; // [rsp+B8h] [rbp+2Fh]
  int v19; // [rsp+C4h] [rbp+3Bh]
  int v20; // [rsp+D8h] [rbp+4Fh]
  char v21; // [rsp+F0h] [rbp+67h] BYREF
  int v22; // [rsp+F8h] [rbp+6Fh] BYREF

  v22 = 0;
  v21 = 0;
  v10 = 0LL;
  DestinationString = 0LL;
  memset_0(v12, 0, 0x90uLL);
  v18 = 0LL;
  v15 = &v22;
  v12[1] = 144;
  v0 = 7;
  v12[0] = 1;
  v17 = 64;
  v20 = 5;
  v16 = 4;
  if ( (int)HalSocRequestApi(v1, 0LL, 6, 16LL, &v10) >= 0 )
  {
    v6 = guard_dispatch_icall_no_overrides(v3, v2, v4, v5);
    v7 = 0LL;
    if ( v6 )
      v7 = v6;
    v18 = v7;
  }
  if ( (int)HalpTscGetAttributes(&HalpTscPerformanceStateInvariant, &HalpTscIdleStateInvariant, &v21) < 0 )
  {
    v0 = 24583;
LABEL_11:
    v19 = v0;
    goto LABEL_12;
  }
  if ( !HalpTscPerformanceStateInvariant )
    v0 = 8199;
  v19 = v0;
  if ( !HalpTscIdleStateInvariant )
  {
    v0 |= 0x4000u;
    goto LABEL_11;
  }
LABEL_12:
  v13 = HalpTscInitialize;
  if ( v21 )
  {
    v8 = HalpTscQueryCounterOrdered;
    v19 = v0 | 0x1000000;
  }
  else
  {
    v8 = (__int64 (__fastcall *)(__int64, __int64))HalpTscQueryCounter;
  }
  v14 = v8;
  RtlInitUnicodeString(&DestinationString, L"VEN_vvvv&DEV_dddd&SUBVEN_ssss&SUBDEV_yyyy&REV_rrrr&INST_iiii&UID_uuuuuuuu");
  HalpTimerRegister((__int64)v12, &DestinationString);
  return 0LL;
}
