/*
 * XREFs of IommuFlushDomain @ 0x1405640E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuFlushDomain(__int64 a1)
{
  char v2; // dl
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 8) != 2 )
    return 3221225711LL;
  if ( !HalpHvIommu )
    return 3221225474LL;
  v2 = *(_BYTE *)(a1 + 52);
  v3 = 0LL;
  if ( !v2 )
    return 3221225659LL;
  LODWORD(v3) = *(_DWORD *)(a1 + 48);
  BYTE4(v3) = v2;
  return guard_dispatch_icall_no_overrides(&v3);
}
