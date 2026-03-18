/*
 * XREFs of IommuFlushDomain @ 0x140566950
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuFlushDomain(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 8) != 2 )
    return 3221225711LL;
  if ( !HalpHvIommu )
    return 3221225474LL;
  LOBYTE(a2) = *(_BYTE *)(a1 + 52);
  v5 = 0LL;
  if ( !(_BYTE)a2 )
    return 3221225659LL;
  LODWORD(v5) = *(_DWORD *)(a1 + 48);
  BYTE4(v5) = a2;
  return guard_dispatch_icall_no_overrides(&v5, a2, a3, a4);
}
