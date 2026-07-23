/*
 * XREFs of HalpDmaCvmQueryRegistryKeys @ 0x140C124F0
 * Callers:
 *     HalpDmaInitializeCvmSupport @ 0x140C12AE4 (HalpDmaInitializeCvmSupport.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MmGetSystemRoutineAddress @ 0x140906FD0 (MmGetSystemRoutineAddress.c)
 */

__int64 HalpDmaCvmQueryRegistryKeys()
{
  __int64 result; // rax
  int v1; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v2; // [rsp+34h] [rbp-CCh] BYREF
  int v3; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v5[8]; // [rsp+50h] [rbp-B0h] BYREF
  int v6; // [rsp+58h] [rbp-A8h]
  const wchar_t *v7; // [rsp+60h] [rbp-A0h]
  int *v8; // [rsp+68h] [rbp-98h]
  int v9; // [rsp+70h] [rbp-90h]
  int v10; // [rsp+90h] [rbp-70h]
  const wchar_t *v11; // [rsp+98h] [rbp-68h]
  unsigned int *v12; // [rsp+A0h] [rbp-60h]
  int v13; // [rsp+A8h] [rbp-58h]
  int v14; // [rsp+C8h] [rbp-38h]
  const wchar_t *v15; // [rsp+D0h] [rbp-30h]
  int *v16; // [rsp+D8h] [rbp-28h]
  int v17; // [rsp+E0h] [rbp-20h]

  v3 = 0;
  v1 = 0;
  v2 = 0;
  memset_0(v5, 0, 0xE0uLL);
  v7 = L"EnableMockCvm";
  v6 = 288;
  v8 = &v1;
  v9 = 0x4000000;
  v11 = L"MinimumMapRegisterCount";
  v12 = &v2;
  v15 = L"EnableLog";
  v10 = 288;
  v13 = 0x4000000;
  v14 = 288;
  v17 = 0x4000000;
  v16 = &v3;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  MmGetSystemRoutineAddress(&DestinationString);
  result = guard_dispatch_icall_no_overrides(2LL, L"HAL\\CVM");
  if ( (int)result >= 0 )
  {
    if ( v1 )
      byte_140FC0D41 = 1;
    result = v2;
    if ( v2 )
    {
      if ( v2 > 0x8000 )
        result = 0x8000LL;
      dword_140FC0D44 = result;
    }
    if ( v3 )
      byte_140FC0D42 = 1;
  }
  return result;
}
