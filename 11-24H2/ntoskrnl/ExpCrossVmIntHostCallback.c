/*
 * XREFs of ExpCrossVmIntHostCallback @ 0x1407C5950
 * Callers:
 *     <none>
 * Callees:
 *     ExGetExtensionTable @ 0x140398F94 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1404450F0 (ExReleaseExtensionTable.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpCrossVmIntHostCallback(int a1, struct _EX_RUNDOWN_REF **a2)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  unsigned __int64 ExtensionTable; // rbx
  __int64 Buffer; // [rsp+68h] [rbp+20h] BYREF

  if ( a1 == 1 )
  {
    v2 = *a2;
    ExtensionTable = ExGetExtensionTable(*a2);
    if ( ExtensionTable )
    {
      if ( (int)guard_dispatch_icall_no_overrides(ExpObCloseCrossVmEvent, ExpObDeleteCrossVmEvent) >= 0
        && (int)guard_dispatch_icall_no_overrides(ExpObCloseCrossVmMutant, ExpObDeleteCrossVmMutant) >= 0 )
      {
        if ( v2 == (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest && *(_QWORD *)(ExtensionTable + 128) )
          guard_dispatch_icall_no_overrides(ExWnfCrossVmCallback, 0LL);
        if ( v2 == (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostRoot )
        {
          if ( *(_QWORD *)(ExtensionTable + 128) )
          {
            guard_dispatch_icall_no_overrides(ExWnfCrossVmCallback, 1LL);
            Buffer = qword_140EF7158;
            if ( ZwUpdateWnfStateData(&WNF_CMFC_HOST_OS_FEATURE_CONFIGURATION_CHANGED, &Buffer, 8u, 0LL, 0LL, 0, 0) >= 0 )
              byte_140EF72DB = 1;
          }
        }
      }
      ExReleaseExtensionTable(v2);
    }
  }
  return 0LL;
}
