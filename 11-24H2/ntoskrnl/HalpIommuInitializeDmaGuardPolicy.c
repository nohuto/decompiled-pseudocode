/*
 * XREFs of HalpIommuInitializeDmaGuardPolicy @ 0x140553F08
 * Callers:
 *     HalpIommuInitSystem @ 0x140B4D550 (HalpIommuInitSystem.c)
 * Callees:
 *     strstr @ 0x1404FD9B0 (strstr.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuInitializeDmaGuardPolicy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  bool v6; // si
  const char *v7; // rcx
  char v8; // [rsp+38h] [rbp+10h] BYREF

  if ( HalpHvIommu )
  {
    v8 = 0;
    result = guard_dispatch_icall_no_overrides(&v8, a2, a3, a4);
    if ( (int)result >= 0 )
    {
      HalpDmaGuardEnabled = v8;
      if ( v8 )
      {
        HalpIommuPolicy = 3;
        HalpIommuSecurityPolicy = 1;
      }
    }
  }
  else
  {
    v6 = 0;
    if ( a1 )
    {
      v7 = *(const char **)(a1 + 216);
      if ( v7 )
        v6 = strstr(v7, "DMAGUARDPOLICY=ENABLE") != 0LL;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 240) + 2648LL) & 8) != 0 || v6 )
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
