/*
 * XREFs of PiRegStateReadStackCreationSettingsFromKey @ 0x1400DA424
 * Callers:
 *     PpRegStateReadCreateClassCreationSettings @ 0x1400DA5E8 (PpRegStateReadCreateClassCreationSettings.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1400AAEF0 (WdmlibRtlInitUnicodeStringEx.c)
 *     SeUtilSecurityInfoFromSecurityDescriptor @ 0x1400DA8B4 (SeUtilSecurityInfoFromSecurityDescriptor.c)
 *     CmRegUtilUcValueGetFullBuffer @ 0x1400DAB4C (CmRegUtilUcValueGetFullBuffer.c)
 *     CmRegUtilWstrValueGetDword @ 0x1400DAE14 (CmRegUtilWstrValueGetDword.c)
 */

__int64 __fastcall PiRegStateReadStackCreationSettingsFromKey(
        void *ClassOrDeviceKey,
        STACK_CREATION_SETTINGS *StackCreationSettings)
{
  _KEY_VALUE_FULL_INFORMATION *v4; // rsi
  int inited; // edi
  unsigned int v6; // r8d
  unsigned int v7; // r9d
  int FullBuffer; // eax
  __int64 v9; // r9
  void *v10; // rax
  int Dword; // eax
  unsigned int v12; // r8d
  int v13; // eax
  unsigned int v14; // r8d
  int v15; // eax
  void *SecurityDescriptor; // rcx
  _KEY_VALUE_FULL_INFORMATION *keyInfo; // [rsp+30h] [rbp-20h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int8 daclFromDefaultMechanism; // [rsp+98h] [rbp+48h] BYREF
  unsigned int securityInformation; // [rsp+A0h] [rbp+50h] BYREF
  void *newSecurityDescriptor; // [rsp+A8h] [rbp+58h] BYREF

  *(_QWORD *)&StackCreationSettings->Flags = 0LL;
  StackCreationSettings->SecurityDescriptor = 0LL;
  *(_QWORD *)&StackCreationSettings->Characteristics = 0LL;
  newSecurityDescriptor = 0LL;
  securityInformation = 0;
  v4 = 0LL;
  daclFromDefaultMechanism = 0;
  keyInfo = 0LL;
  DestinationString = 0LL;
  inited = WdmlibRtlInitUnicodeStringEx(&DestinationString, (wchar_t *)L"Security");
  if ( inited < 0
    || (FullBuffer = CmRegUtilUcValueGetFullBuffer(ClassOrDeviceKey, &DestinationString, v6, v7, &keyInfo),
        v4 = keyInfo,
        inited = FullBuffer,
        FullBuffer < 0) )
  {
    if ( inited == -1073741772 )
      inited = 0;
  }
  else
  {
    LOBYTE(v9) = 1;
    inited = SeCaptureSecurityDescriptor((char *)keyInfo + keyInfo->DataOffset, 0LL, 1LL, v9, &newSecurityDescriptor);
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( inited < 0 )
    goto $ErrorExit_0;
  if ( newSecurityDescriptor )
  {
    inited = SeUtilSecurityInfoFromSecurityDescriptor(
               newSecurityDescriptor,
               &daclFromDefaultMechanism,
               &securityInformation);
    if ( inited < 0 )
      goto $ErrorExit_0;
    if ( daclFromDefaultMechanism )
    {
      ExFreePoolWithTag(newSecurityDescriptor, 0);
    }
    else
    {
      v10 = newSecurityDescriptor;
      StackCreationSettings->Flags |= 2u;
      StackCreationSettings->SecurityDescriptor = v10;
    }
  }
  Dword = CmRegUtilWstrValueGetDword(ClassOrDeviceKey, (wchar_t *)L"DeviceType", v6, &StackCreationSettings->DeviceType);
  inited = Dword;
  if ( Dword < 0 )
  {
    if ( Dword != -1073741772 )
      goto $ErrorExit_0;
  }
  else
  {
    StackCreationSettings->Flags |= 1u;
  }
  v13 = CmRegUtilWstrValueGetDword(
          ClassOrDeviceKey,
          (wchar_t *)L"DeviceCharacteristics",
          v12,
          &StackCreationSettings->Characteristics);
  inited = v13;
  if ( v13 < 0 )
  {
    if ( v13 != -1073741772 )
      goto $ErrorExit_0;
  }
  else
  {
    StackCreationSettings->Flags |= 4u;
  }
  v15 = CmRegUtilWstrValueGetDword(ClassOrDeviceKey, (wchar_t *)L"Exclusive", v14, &StackCreationSettings->Exclusivity);
  inited = v15;
  if ( v15 >= 0 )
  {
    StackCreationSettings->Flags |= 8u;
    return (unsigned int)inited;
  }
  if ( v15 == -1073741772 )
    return 0;
$ErrorExit_0:
  SecurityDescriptor = StackCreationSettings->SecurityDescriptor;
  if ( SecurityDescriptor )
    ExFreePoolWithTag(SecurityDescriptor, 0);
  *(_QWORD *)&StackCreationSettings->Flags = 0LL;
  StackCreationSettings->SecurityDescriptor = 0LL;
  *(_QWORD *)&StackCreationSettings->Characteristics = 0LL;
  return (unsigned int)inited;
}
