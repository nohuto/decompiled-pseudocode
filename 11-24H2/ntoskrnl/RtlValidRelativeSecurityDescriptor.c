/*
 * XREFs of RtlValidRelativeSecurityDescriptor @ 0x140833A70
 * Callers:
 *     CmpVerifyLogRecord @ 0x1407E12B8 (CmpVerifyLogRecord.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140819A14 (_CmSetInstallerClassRegPropWorker.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1408328B8 (CmpValidateHiveSecurityDescriptors.c)
 *     ExpWnfLookupPermanentName @ 0x140833714 (ExpWnfLookupPermanentName.c)
 *     _PnpValidatePropertyData @ 0x1408B6740 (_PnpValidatePropertyData.c)
 *     _CmSetDeviceRegPropWorker @ 0x14097BFD0 (_CmSetDeviceRegPropWorker.c)
 *     PipGetRegistrySecurityWithFallback @ 0x14097FB88 (PipGetRegistrySecurityWithFallback.c)
 * Callees:
 *     RtlValidAcl @ 0x140910580 (RtlValidAcl.c)
 */

BOOLEAN __stdcall RtlValidRelativeSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptorInput,
        ULONG SecurityDescriptorLength,
        SECURITY_INFORMATION RequiredInformation)
{
  __int16 v5; // r9
  __int64 v6; // rax
  unsigned int v7; // edx
  int v8; // eax
  __int64 v9; // rax
  unsigned int v10; // edx
  int v11; // eax
  __int64 v12; // rax
  ACL *v13; // rcx
  __int64 v15; // rax
  unsigned int v16; // ebx

  if ( SecurityDescriptorLength < 0x14 )
    return 0;
  if ( *(_BYTE *)SecurityDescriptorInput != 1 )
    return 0;
  v5 = *((_WORD *)SecurityDescriptorInput + 1);
  if ( v5 >= 0 )
    return 0;
  v6 = *((unsigned int *)SecurityDescriptorInput + 1);
  if ( (_DWORD)v6 )
  {
    if ( (unsigned int)v6 < 0x14 )
      return 0;
    if ( (unsigned int)v6 >= SecurityDescriptorLength )
      return 0;
    v7 = SecurityDescriptorLength - v6;
    if ( v7 < 0xC )
      return 0;
    if ( (v6 & 3) != 0 )
      return 0;
    if ( *((_BYTE *)SecurityDescriptorInput + v6) != 1 )
      return 0;
    v8 = *((unsigned __int8 *)SecurityDescriptorInput + v6 + 1);
    if ( (unsigned __int8)v8 > 0xFu || v7 < 4 * v8 + 8 )
      return 0;
  }
  else if ( (RequiredInformation & 1) != 0 )
  {
    return 0;
  }
  v9 = *((unsigned int *)SecurityDescriptorInput + 2);
  if ( (_DWORD)v9 )
  {
    if ( (unsigned int)v9 >= 0x14 && (unsigned int)v9 < SecurityDescriptorLength )
    {
      v10 = SecurityDescriptorLength - v9;
      if ( SecurityDescriptorLength - (unsigned int)v9 >= 0xC
        && (v9 & 3) == 0
        && *((_BYTE *)SecurityDescriptorInput + v9) == 1 )
      {
        v11 = *((unsigned __int8 *)SecurityDescriptorInput + v9 + 1);
        if ( (unsigned __int8)v11 <= 0xFu && v10 >= 4 * v11 + 8 )
          goto LABEL_20;
      }
    }
    return 0;
  }
  if ( (RequiredInformation & 2) != 0 )
    return 0;
LABEL_20:
  if ( (v5 & 4) != 0 )
  {
    v12 = *((unsigned int *)SecurityDescriptorInput + 4);
    if ( (_DWORD)v12 )
    {
      if ( (unsigned int)v12 < 0x14 )
        return 0;
      if ( (unsigned int)v12 >= SecurityDescriptorLength )
        return 0;
      if ( SecurityDescriptorLength - (unsigned int)v12 < 8 )
        return 0;
      if ( (v12 & 3) != 0 )
        return 0;
      v13 = (ACL *)((char *)SecurityDescriptorInput + v12);
      if ( SecurityDescriptorLength - (unsigned int)v12 < v13->AclSize || !RtlValidAcl(v13) )
        return 0;
    }
  }
  if ( (*((_BYTE *)SecurityDescriptorInput + 2) & 0x10) == 0 )
    return 1;
  v15 = *((unsigned int *)SecurityDescriptorInput + 3);
  if ( !(_DWORD)v15 )
    return 1;
  if ( (unsigned int)v15 < 0x14 )
    return 0;
  if ( (unsigned int)v15 >= SecurityDescriptorLength )
    return 0;
  v16 = SecurityDescriptorLength - v15;
  if ( v16 < 8 || (v15 & 3) != 0 || v16 < *(unsigned __int16 *)((char *)SecurityDescriptorInput + v15 + 2) )
    return 0;
  return RtlValidAcl((PACL)((char *)SecurityDescriptorInput + v15)) != 0;
}
