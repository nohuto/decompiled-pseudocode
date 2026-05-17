/*
 * XREFs of RtlGetGroupSecurityDescriptor @ 0x1800EF590
 * Callers:
 *     RtlReplaceSidInSd @ 0x180139690 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetGroupSecurityDescriptor(__int64 a1, _QWORD *a2, bool *a3)
{
  __int64 v3; // rax

  if ( *(_BYTE *)a1 != 1 )
    return 3221225560LL;
  v3 = 0LL;
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v3 = *(_QWORD *)(a1 + 16);
  }
  else if ( *(_DWORD *)(a1 + 8) )
  {
    v3 = a1 + *(unsigned int *)(a1 + 8);
  }
  *a2 = v3;
  *a3 = (*(_BYTE *)(a1 + 2) & 2) != 0;
  return 0LL;
}
