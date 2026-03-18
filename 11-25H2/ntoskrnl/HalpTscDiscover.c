/*
 * XREFs of HalpTscDiscover @ 0x14055E7F8
 * Callers:
 *     HalpTimerRegisterBuiltinPluginsCommon @ 0x140545FF4 (HalpTimerRegisterBuiltinPluginsCommon.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     HalSocRequestApi @ 0x1404AD34C (HalSocRequestApi.c)
 *     HalpTimerRegister @ 0x14055D78C (HalpTimerRegister.c)
 *     HalpTscGetAttributes @ 0x14055E940 (HalpTscGetAttributes.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 HalpTscDiscover()
{
  int v0; // ebx
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(__int64, __int64); // rax
  __int128 v7; // [rsp+30h] [rbp-59h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-49h] BYREF
  _DWORD v9[2]; // [rsp+50h] [rbp-39h] BYREF
  __int64 (__fastcall *v10)(); // [rsp+58h] [rbp-31h]
  __int64 (__fastcall *v11)(__int64, __int64); // [rsp+60h] [rbp-29h]
  int *v12; // [rsp+A8h] [rbp+1Fh]
  int v13; // [rsp+B0h] [rbp+27h]
  int v14; // [rsp+B4h] [rbp+2Bh]
  __int64 v15; // [rsp+B8h] [rbp+2Fh]
  int v16; // [rsp+C4h] [rbp+3Bh]
  int v17; // [rsp+D8h] [rbp+4Fh]
  char v18; // [rsp+F0h] [rbp+67h] BYREF
  int v19; // [rsp+F8h] [rbp+6Fh] BYREF

  v19 = 0;
  v18 = 0;
  v7 = 0LL;
  DestinationString = 0LL;
  memset_0(v9, 0, 0x90uLL);
  v15 = 0LL;
  v12 = &v19;
  v9[1] = 144;
  v0 = 7;
  v9[0] = 1;
  v14 = 64;
  v17 = 5;
  v13 = 4;
  if ( (int)HalSocRequestApi(v1, 0LL, 6, 16LL, &v7) >= 0 )
  {
    v3 = guard_dispatch_icall_no_overrides(v2);
    v4 = 0LL;
    if ( v3 )
      v4 = v3;
    v15 = v4;
  }
  if ( (int)HalpTscGetAttributes(&HalpTscPerformanceStateInvariant, &HalpTscIdleStateInvariant, &v18) < 0 )
  {
    v0 = 24583;
LABEL_11:
    v16 = v0;
    goto LABEL_12;
  }
  if ( !HalpTscPerformanceStateInvariant )
    v0 = 8199;
  v16 = v0;
  if ( !HalpTscIdleStateInvariant )
  {
    v0 |= 0x4000u;
    goto LABEL_11;
  }
LABEL_12:
  v10 = HalpTscInitialize;
  if ( v18 )
  {
    v5 = HalpTscQueryCounterOrdered;
    v16 = v0 | 0x1000000;
  }
  else
  {
    v5 = (__int64 (__fastcall *)(__int64, __int64))HalpTscQueryCounter;
  }
  v11 = v5;
  RtlInitUnicodeString(&DestinationString, L"VEN_vvvv&DEV_dddd&SUBVEN_ssss&SUBDEV_yyyy&REV_rrrr&INST_iiii&UID_uuuuuuuu");
  HalpTimerRegister((__int64)v9, &DestinationString);
  return 0LL;
}
