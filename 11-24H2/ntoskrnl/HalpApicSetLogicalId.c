/*
 * XREFs of HalpApicSetLogicalId @ 0x1405690F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpApicSetLogicalId(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rdx

  v4 = 0;
  if ( HalpApicX2Mode )
    return (unsigned int)-1073741637;
  switch ( *(_DWORD *)a2 )
  {
    case 4:
      guard_dispatch_icall_no_overrides(208LL, 0LL, a3, a4);
      if ( !HalpApicClusterModeEnabled )
        return v4;
      v21 = 0xFFFFFFFLL;
      v20 = 224LL;
LABEL_13:
      guard_dispatch_icall_no_overrides(v20, v21, v18, v19);
      return v4;
    case 5:
      HalpApicClusterModeEnabled = 0;
      guard_dispatch_icall_no_overrides(224LL, 0xFFFFFFFFLL, a3, a4);
      v20 = 208LL;
      v21 = (unsigned int)(*(_DWORD *)(a2 + 8) << 24);
      goto LABEL_13;
    case 6:
      HalpApicClusterModeEnabled = 1;
      guard_dispatch_icall_no_overrides(224LL, 0xFFFFFFFLL, a3, a4);
      if ( (unsigned int)guard_dispatch_icall_no_overrides(224LL, v6, v7, v8) == 0xFFFFFFF )
      {
        v12 = (*(unsigned __int16 *)(a2 + 12) | (unsigned __int16)(16 * *(_WORD *)(a2 + 8))) << 24;
        guard_dispatch_icall_no_overrides(208LL, v12, v9, v10);
        if ( (unsigned int)guard_dispatch_icall_no_overrides(208LL, v13, v14, v15) == v12 )
          return v4;
        guard_dispatch_icall_no_overrides(208LL, 0LL, v16, v17);
      }
      return 3221225659LL;
  }
  return (unsigned int)-1073741637;
}
