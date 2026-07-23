/*
 * XREFs of HalpIommuInitializeDmaGuardPolicy @ 0x140551848
 * Callers:
 *     HalpIommuInitSystem @ 0x140B4F5A0 (HalpIommuInitSystem.c)
 * Callees:
 *     strstr @ 0x1404FB270 (strstr.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuInitializeDmaGuardPolicy(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  bool v4; // si
  const char *v5; // rcx
  char v6; // [rsp+38h] [rbp+10h] BYREF

  if ( HalpHvIommu )
  {
    v6 = 0;
    result = guard_dispatch_icall_no_overrides(&v6, a2);
    if ( (int)result >= 0 )
    {
      HalpDmaGuardEnabled = v6;
      if ( v6 )
      {
        HalpIommuPolicy = 3;
        HalpIommuSecurityPolicy = 1;
      }
    }
  }
  else
  {
    v4 = 0;
    if ( a1 )
    {
      v5 = *(const char **)(a1 + 216);
      if ( v5 )
        v4 = strstr(v5, "DMAGUARDPOLICY=ENABLE") != 0LL;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 240) + 2648LL) & 8) != 0 || v4 )
        goto LABEL_11;
    }
    if ( HalpIommuDmaGuardTableOptIn )
    {
LABEL_11:
      HalpIommuPolicy = 3;
      HalpIommuSecurityPolicy = 1;
    }
    return 0LL;
  }
  return result;
}
