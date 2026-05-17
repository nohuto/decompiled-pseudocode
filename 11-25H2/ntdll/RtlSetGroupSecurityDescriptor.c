/*
 * XREFs of RtlSetGroupSecurityDescriptor @ 0x180066340
 * Callers:
 *     RtlCreateAndSetSD @ 0x180065F40 (RtlCreateAndSetSD.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetGroupSecurityDescriptor(__int64 a1, __int64 a2, char a3)
{
  __int16 v3; // ax
  __int16 v4; // ax

  if ( *(_BYTE *)a1 != 1 )
    return 3221225560LL;
  v3 = *(_WORD *)(a1 + 2);
  if ( v3 < 0 )
    return 3221225593LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a2 )
    *(_QWORD *)(a1 + 16) = a2;
  v4 = v3 & 0xFFFD;
  *(_WORD *)(a1 + 2) = v4;
  if ( a3 )
    *(_WORD *)(a1 + 2) = v4 | 2;
  return 0LL;
}
