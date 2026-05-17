/*
 * XREFs of RtlGetSaclSecurityDescriptor @ 0x1800EBF90
 * Callers:
 *     RtlReplaceSidInSd @ 0x18013AE00 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetSaclSecurityDescriptor(__int64 a1, _BYTE *a2, _QWORD *a3, bool *a4)
{
  __int16 v4; // ax
  __int64 v6; // rax
  __int64 v7; // rax

  if ( *(_BYTE *)a1 != 1 )
    return 3221225560LL;
  if ( (*(_BYTE *)(a1 + 2) & 0x10) != 0 )
  {
    *a2 = 1;
    v4 = *(_WORD *)(a1 + 2);
    if ( (v4 & 0x10) == 0 )
    {
LABEL_4:
      *a3 = 0LL;
      *a4 = (*(_BYTE *)(a1 + 2) & 0x20) != 0;
      return 0LL;
    }
    if ( v4 >= 0 )
    {
      v7 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      v6 = *(unsigned int *)(a1 + 12);
      if ( !(_DWORD)v6 )
        goto LABEL_4;
      v7 = a1 + v6;
    }
    *a3 = v7;
    *a4 = (*(_BYTE *)(a1 + 2) & 0x20) != 0;
  }
  else
  {
    *a2 = 0;
  }
  return 0LL;
}
