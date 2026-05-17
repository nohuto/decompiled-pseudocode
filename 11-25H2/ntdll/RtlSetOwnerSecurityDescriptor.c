/*
 * XREFs of RtlSetOwnerSecurityDescriptor @ 0x1800662F0
 * Callers:
 *     RtlCreateAndSetSD @ 0x180065F40 (RtlCreateAndSetSD.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800668AC (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpSysVolTakeOwnership @ 0x1801459E0 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetOwnerSecurityDescriptor(__int64 a1, __int64 a2, char a3)
{
  __int16 v3; // ax
  __int16 v4; // ax

  if ( *(_BYTE *)a1 != 1 )
    return 3221225560LL;
  v3 = *(_WORD *)(a1 + 2);
  if ( v3 < 0 )
    return 3221225593LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( a2 )
    *(_QWORD *)(a1 + 8) = a2;
  v4 = v3 & 0xFFFE;
  *(_WORD *)(a1 + 2) = v4;
  if ( a3 )
    *(_WORD *)(a1 + 2) = v4 | 1;
  return 0LL;
}
