/*
 * XREFs of HalpPmuArbiterQueryRegistryQuantum @ 0x1406FE324
 * Callers:
 *     HalpHwPerfCntInitSystem @ 0x140B4C570 (HalpHwPerfCntInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MmGetSystemRoutineAddress @ 0x1408B0D70 (MmGetSystemRoutineAddress.c)
 */

__int64 HalpPmuArbiterQueryRegistryQuantum()
{
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v2[8]; // [rsp+40h] [rbp-19h] BYREF
  int v3; // [rsp+48h] [rbp-11h]
  const wchar_t *v4; // [rsp+50h] [rbp-9h]
  unsigned int *v5; // [rsp+58h] [rbp-1h]
  int v6; // [rsp+60h] [rbp+7h]
  unsigned int v7; // [rsp+C0h] [rbp+67h] BYREF

  v7 = 0;
  memset_0(v2, 0, 0x70uLL);
  v3 = 288;
  v4 = L"ArbiterQuantumInMs";
  v6 = 0x4000000;
  v5 = &v7;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  MmGetSystemRoutineAddress(&DestinationString);
  result = guard_dispatch_icall_no_overrides(2LL, L"HAL\\PMU", v2, 0LL);
  if ( (int)result >= 0 )
  {
    result = v7;
    if ( v7 )
      dword_140FC1E00 = v7;
  }
  return result;
}
