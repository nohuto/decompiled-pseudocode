/*
 * XREFs of HalpApicSetLogicalId @ 0x140566520
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpApicSetLogicalId(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  int v5; // ebx
  __int64 v6; // rcx

  v2 = 0;
  if ( HalpApicX2Mode )
    return (unsigned int)-1073741637;
  switch ( *(_DWORD *)a2 )
  {
    case 4:
      guard_dispatch_icall_no_overrides(208LL);
      if ( !HalpApicClusterModeEnabled )
        return v2;
      v6 = 224LL;
LABEL_13:
      guard_dispatch_icall_no_overrides(v6);
      return v2;
    case 5:
      HalpApicClusterModeEnabled = 0;
      guard_dispatch_icall_no_overrides(224LL);
      v6 = 208LL;
      goto LABEL_13;
    case 6:
      HalpApicClusterModeEnabled = 1;
      guard_dispatch_icall_no_overrides(224LL);
      if ( (unsigned int)guard_dispatch_icall_no_overrides(224LL) == 0xFFFFFFF )
      {
        v5 = (*(unsigned __int16 *)(a2 + 12) | (unsigned __int16)(16 * *(_WORD *)(a2 + 8))) << 24;
        guard_dispatch_icall_no_overrides(208LL);
        if ( (unsigned int)guard_dispatch_icall_no_overrides(208LL) == v5 )
          return v2;
        guard_dispatch_icall_no_overrides(208LL);
      }
      return 3221225659LL;
  }
  return (unsigned int)-1073741637;
}
