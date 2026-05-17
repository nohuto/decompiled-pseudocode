/*
 * XREFs of RtlLengthSecurityDescriptor @ 0x1800EB2D0
 * Callers:
 *     RtlNormalizeSecurityDescriptor @ 0x18013AB20 (RtlNormalizeSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlLengthSecurityDescriptor(__int64 a1)
{
  __int16 v1; // r9
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx

  v1 = *(_WORD *)(a1 + 2);
  result = ((v1 >> 31) & 0xFFFFFFEC) + 40;
  if ( v1 >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 8);
  }
  else
  {
    v4 = *(unsigned int *)(a1 + 4);
    if ( !(_DWORD)v4 )
      goto LABEL_7;
    v5 = a1 + v4;
  }
  if ( v5 )
    result = ((4 * *(unsigned __int8 *)(v5 + 1) + 11) & 0xFFFFFFFC) + (unsigned int)result;
  if ( v1 >= 0 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    goto LABEL_9;
  }
LABEL_7:
  v6 = *(unsigned int *)(a1 + 8);
  if ( !(_DWORD)v6 )
    goto LABEL_11;
  v7 = a1 + v6;
LABEL_9:
  if ( v7 )
    result = ((4 * *(unsigned __int8 *)(v7 + 1) + 11) & 0xFFFFFFFC) + (unsigned int)result;
LABEL_11:
  if ( (v1 & 4) == 0 )
    goto LABEL_17;
  if ( v1 >= 0 )
  {
    v9 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    v8 = *(unsigned int *)(a1 + 16);
    if ( !(_DWORD)v8 )
      goto LABEL_17;
    v9 = a1 + v8;
  }
  if ( v9 )
    result = ((*(unsigned __int16 *)(v9 + 2) + 3) & 0xFFFFFFFC) + (unsigned int)result;
LABEL_17:
  if ( (v1 & 0x10) == 0 )
    return result;
  if ( v1 >= 0 )
  {
    v11 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    v10 = *(unsigned int *)(a1 + 12);
    if ( !(_DWORD)v10 )
      return result;
    v11 = a1 + v10;
  }
  if ( v11 )
    return ((*(unsigned __int16 *)(v11 + 2) + 3) & 0xFFFFFFFC) + (unsigned int)result;
  return result;
}
