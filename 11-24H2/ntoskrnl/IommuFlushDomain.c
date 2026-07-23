/*
 * XREFs of IommuFlushDomain @ 0x140564650
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuFlushDomain(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 8) != 2 )
    return 3221225711LL;
  if ( !HalpHvIommu )
    return 3221225474LL;
  LOBYTE(a2) = *(_BYTE *)(a1 + 52);
  v3 = 0LL;
  if ( !(_BYTE)a2 )
    return 3221225659LL;
  LODWORD(v3) = *(_DWORD *)(a1 + 48);
  BYTE4(v3) = a2;
  return guard_dispatch_icall_no_overrides(&v3, a2);
}
