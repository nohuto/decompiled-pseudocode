/*
 * XREFs of RtlValidSecurityDescriptor @ 0x18005FFD0
 * Callers:
 *     RtlNormalizeSecurityDescriptor @ 0x18013AB20 (RtlNormalizeSecurityDescriptor.c)
 *     RtlpConvertToAutoInheritSecurityObject @ 0x18013BAB0 (RtlpConvertToAutoInheritSecurityObject.c)
 * Callees:
 *     RtlValidSid @ 0x18005FCD0 (RtlValidSid.c)
 *     RtlValidAcl @ 0x18005FD10 (RtlValidAcl.c)
 */

char __fastcall RtlValidSecurityDescriptor(__int64 a1)
{
  __int64 v2; // rax
  _BYTE *v3; // rcx
  unsigned int *v4; // rdi
  __int64 v5; // rax
  _BYTE *v6; // rcx
  __int16 v7; // ax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int16 v10; // ax
  __int64 v11; // rax
  __int64 v12; // rcx
  char result; // al

  if ( *(_BYTE *)a1 != 1 )
    return 0;
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v4 = (unsigned int *)(a1 + 8);
    v3 = *(_BYTE **)(a1 + 8);
  }
  else
  {
    v2 = *(unsigned int *)(a1 + 4);
    if ( !(_DWORD)v2 )
    {
      v4 = (unsigned int *)(a1 + 8);
      goto LABEL_7;
    }
    v3 = (_BYTE *)(v2 + a1);
    v4 = (unsigned int *)(a1 + 8);
  }
  if ( v3 && !RtlValidSid(v3) )
    return 0;
LABEL_7:
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v6 = *(_BYTE **)(a1 + 16);
  }
  else
  {
    v5 = *v4;
    if ( !(_DWORD)v5 )
      goto LABEL_12;
    v6 = (_BYTE *)(a1 + v5);
  }
  if ( v6 && !RtlValidSid(v6) )
    return 0;
LABEL_12:
  v7 = *(_WORD *)(a1 + 2);
  if ( (v7 & 4) == 0 )
    goto LABEL_17;
  if ( v7 >= 0 )
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
  if ( !v9 || (result = RtlValidAcl(v9)) != 0 )
  {
LABEL_17:
    v10 = *(_WORD *)(a1 + 2);
    if ( (v10 & 0x10) != 0 )
    {
      if ( v10 >= 0 )
      {
        v12 = *(_QWORD *)(a1 + 24);
      }
      else
      {
        v11 = *(unsigned int *)(a1 + 12);
        if ( !(_DWORD)v11 )
          return 1;
        v12 = a1 + v11;
      }
      if ( v12 )
      {
        result = RtlValidAcl(v12);
        if ( !result )
          return result;
      }
    }
    return 1;
  }
  return result;
}
