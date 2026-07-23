/*
 * XREFs of RtlValidRelativeSecurityDescriptor @ 0x1800ECDB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidAcl @ 0x18005FD10 (RtlValidAcl.c)
 */

BOOLEAN __cdecl RtlValidRelativeSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptorInput,
        ULONG SecurityDescriptorLength,
        SECURITY_INFORMATION RequiredInformation)
{
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rax
  ACL *v9; // rcx
  __int64 v11; // rax
  unsigned int v12; // ebx

  if ( SecurityDescriptorLength < 0x14
    || *(_BYTE *)SecurityDescriptorInput != 1
    || *((__int16 *)SecurityDescriptorInput + 1) >= 0 )
  {
    return 0;
  }
  v5 = *((unsigned int *)SecurityDescriptorInput + 1);
  if ( (_DWORD)v5 )
  {
    if ( (unsigned int)v5 >= SecurityDescriptorLength )
      return 0;
    if ( (unsigned int)v5 < 0x14 )
      return 0;
    v6 = SecurityDescriptorLength - v5;
    if ( v6 < 0xC
      || (v5 & 3) != 0
      || *((_BYTE *)SecurityDescriptorInput + v5) != 1
      || *((_BYTE *)SecurityDescriptorInput + v5 + 1) > 0xFu
      || v6 < 4 * (unsigned int)*((unsigned __int8 *)SecurityDescriptorInput + v5 + 1) + 8 )
    {
      return 0;
    }
  }
  else if ( (RequiredInformation & 1) != 0 )
  {
    return 0;
  }
  v7 = *((unsigned int *)SecurityDescriptorInput + 2);
  if ( (_DWORD)v7 )
  {
    if ( (unsigned int)v7 >= SecurityDescriptorLength
      || (unsigned int)v7 < 0x14
      || SecurityDescriptorLength - (unsigned int)v7 < 0xC
      || (v7 & 3) != 0
      || *((_BYTE *)SecurityDescriptorInput + v7) != 1
      || *((_BYTE *)SecurityDescriptorInput + v7 + 1) > 0xFu
      || SecurityDescriptorLength - (unsigned int)v7 < 4
                                                     * (unsigned int)*((unsigned __int8 *)SecurityDescriptorInput
                                                                     + v7
                                                                     + 1)
                                                     + 8 )
    {
      return 0;
    }
  }
  else if ( (RequiredInformation & 2) != 0 )
  {
    return 0;
  }
  if ( (*((_BYTE *)SecurityDescriptorInput + 2) & 4) != 0 )
  {
    v8 = *((unsigned int *)SecurityDescriptorInput + 4);
    if ( (_DWORD)v8 )
    {
      if ( (unsigned int)v8 >= SecurityDescriptorLength )
        return 0;
      if ( (unsigned int)v8 < 0x14 )
        return 0;
      if ( SecurityDescriptorLength - (unsigned int)v8 < 8 )
        return 0;
      if ( (v8 & 3) != 0 )
        return 0;
      v9 = (ACL *)((char *)SecurityDescriptorInput + v8);
      if ( SecurityDescriptorLength - (unsigned int)v8 < v9->AclSize || !RtlValidAcl(v9) )
        return 0;
    }
  }
  if ( (*((_BYTE *)SecurityDescriptorInput + 2) & 0x10) == 0 )
    return 1;
  v11 = *((unsigned int *)SecurityDescriptorInput + 3);
  if ( !(_DWORD)v11 )
    return 1;
  if ( (unsigned int)v11 >= SecurityDescriptorLength )
    return 0;
  if ( (unsigned int)v11 < 0x14 )
    return 0;
  v12 = SecurityDescriptorLength - v11;
  if ( v12 < 8 || (v11 & 3) != 0 || v12 < *(unsigned __int16 *)((char *)SecurityDescriptorInput + v11 + 2) )
    return 0;
  return RtlValidAcl((PACL)((char *)SecurityDescriptorInput + v11)) != 0;
}
