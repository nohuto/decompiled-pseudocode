/*
 * XREFs of RtlValidSecurityDescriptor @ 0x180019910
 * Callers:
 *     RtlNormalizeSecurityDescriptor @ 0x1801375E0 (RtlNormalizeSecurityDescriptor.c)
 *     RtlpConvertToAutoInheritSecurityObject @ 0x180138570 (RtlpConvertToAutoInheritSecurityObject.c)
 * Callees:
 *     RtlValidSid @ 0x1800194A0 (RtlValidSid.c)
 *     RtlValidAcl @ 0x1800194E0 (RtlValidAcl.c)
 */

BOOLEAN __cdecl RtlValidSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int64 v2; // rax
  char *v3; // rcx
  unsigned int *v4; // rdi
  __int64 v5; // rax
  char *v6; // rcx
  __int16 v7; // ax
  __int64 v8; // rax
  ACL *v9; // rcx
  __int16 v10; // ax
  __int64 v11; // rax
  ACL *v12; // rcx
  BOOLEAN result; // al

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return 0;
  if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
  {
    v4 = (unsigned int *)((char *)SecurityDescriptor + 8);
    v3 = (char *)*((_QWORD *)SecurityDescriptor + 1);
  }
  else
  {
    v2 = *((unsigned int *)SecurityDescriptor + 1);
    if ( !(_DWORD)v2 )
    {
      v4 = (unsigned int *)((char *)SecurityDescriptor + 8);
      goto LABEL_7;
    }
    v3 = (char *)SecurityDescriptor + v2;
    v4 = (unsigned int *)((char *)SecurityDescriptor + 8);
  }
  if ( v3 && !RtlValidSid(v3) )
    return 0;
LABEL_7:
  if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
  {
    v6 = (char *)*((_QWORD *)SecurityDescriptor + 2);
  }
  else
  {
    v5 = *v4;
    if ( !(_DWORD)v5 )
      goto LABEL_12;
    v6 = (char *)SecurityDescriptor + v5;
  }
  if ( v6 && !RtlValidSid(v6) )
    return 0;
LABEL_12:
  v7 = *((_WORD *)SecurityDescriptor + 1);
  if ( (v7 & 4) == 0 )
    goto LABEL_17;
  if ( v7 >= 0 )
  {
    v9 = (ACL *)*((_QWORD *)SecurityDescriptor + 4);
  }
  else
  {
    v8 = *((unsigned int *)SecurityDescriptor + 4);
    if ( !(_DWORD)v8 )
      goto LABEL_17;
    v9 = (ACL *)((char *)SecurityDescriptor + v8);
  }
  if ( !v9 || (result = RtlValidAcl(v9)) != 0 )
  {
LABEL_17:
    v10 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v10 & 0x10) != 0 )
    {
      if ( v10 >= 0 )
      {
        v12 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
      }
      else
      {
        v11 = *((unsigned int *)SecurityDescriptor + 3);
        if ( !(_DWORD)v11 )
          return 1;
        v12 = (ACL *)((char *)SecurityDescriptor + v11);
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
