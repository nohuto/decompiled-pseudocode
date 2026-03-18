/*
 * XREFs of HalpIommuInitializeDmaGuardPolicy @ 0x140551608
 * Callers:
 *     HalpIommuInitSystem @ 0x140B3D550 (HalpIommuInitSystem.c)
 * Callees:
 *     strstr @ 0x1404FB230 (strstr.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuInitializeDmaGuardPolicy(__int64 a1)
{
  __int64 result; // rax
  bool v3; // si
  const char *v4; // rcx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  if ( HalpHvIommu )
  {
    v5 = 0;
    result = guard_dispatch_icall_no_overrides(&v5);
    if ( (int)result >= 0 )
    {
      HalpDmaGuardEnabled = v5;
      if ( v5 )
      {
        HalpIommuPolicy = 3;
        HalpIommuSecurityPolicy = 1;
      }
    }
  }
  else
  {
    v3 = 0;
    if ( a1 )
    {
      v4 = *(const char **)(a1 + 216);
      if ( v4 )
        v3 = strstr(v4, "DMAGUARDPOLICY=ENABLE") != 0LL;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 240) + 2648LL) & 8) != 0 || v3 )
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
