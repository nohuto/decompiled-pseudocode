/*
 * XREFs of ExpCrossVmIntHostCallback @ 0x1407C54F0
 * Callers:
 *     <none>
 * Callees:
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x14044FE80 (ExReleaseExtensionTable.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpCrossVmIntHostCallback(int a1, struct _EX_RUNDOWN_REF **a2)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  unsigned __int64 ExtensionTable; // rbx
  __int64 v4; // r9
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  if ( a1 == 1 )
  {
    v2 = *a2;
    ExtensionTable = ExGetExtensionTable(*a2);
    if ( ExtensionTable )
    {
      if ( (int)guard_dispatch_icall_no_overrides(
                  ExpObCloseCrossVmEvent,
                  ExpObDeleteCrossVmEvent,
                  &ExCrossVmEventObjectType,
                  v4) >= 0
        && (int)guard_dispatch_icall_no_overrides(
                  ExpObCloseCrossVmMutant,
                  ExpObDeleteCrossVmMutant,
                  &ExCrossVmMutantObjectType,
                  v5) >= 0 )
      {
        if ( v2 == (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest && *(_QWORD *)(ExtensionTable + 128) )
          guard_dispatch_icall_no_overrides(ExWnfCrossVmCallback, 0LL, v6, v7);
        if ( v2 == (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostRoot )
        {
          if ( *(_QWORD *)(ExtensionTable + 128) )
          {
            guard_dispatch_icall_no_overrides(ExWnfCrossVmCallback, 1LL, v6, v7);
            v9 = qword_140EF6F18;
            if ( (int)ZwUpdateWnfStateData((__int64)&WNF_CMFC_HOST_OS_FEATURE_CONFIGURATION_CHANGED, (__int64)&v9) >= 0 )
              byte_140EF709B = 1;
          }
        }
      }
      ExReleaseExtensionTable(v2);
    }
  }
  return 0LL;
}
