/*
 * XREFs of PpRegStateUpdateStackCreationSettings @ 0x1400DA74C
 * Callers:
 *     IoDevObjCreateDeviceSecure @ 0x1400D95E0 (IoDevObjCreateDeviceSecure.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1400AAFC0 (WdmlibRtlInitUnicodeStringEx.c)
 *     PiRegStateOpenClassKey @ 0x1400DA288 (PiRegStateOpenClassKey.c)
 *     CmRegUtilCreateWstrKey @ 0x1400DAA58 (CmRegUtilCreateWstrKey.c)
 */

int __fastcall PpRegStateUpdateStackCreationSettings(
        const _GUID *DeviceClassGuid,
        STACK_CREATION_SETTINGS *StackCreationSettings)
{
  int result; // eax
  unsigned int v4; // r8d
  __int64 v5; // r9
  unsigned int *v6; // rbx
  int inited; // ebx
  ULONG v8; // r9d
  void *Data; // r10
  void *classPropertyKey; // [rsp+40h] [rbp-20h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  void *tempDescriptor; // [rsp+90h] [rbp+30h] BYREF
  void *classKey; // [rsp+98h] [rbp+38h] BYREF

  tempDescriptor = 0LL;
  classPropertyKey = 0LL;
  classKey = 0LL;
  result = PiRegStateOpenClassKey(DeviceClassGuid, (unsigned int)StackCreationSettings, 0, 0LL, &classKey);
  if ( result >= 0 )
  {
    v6 = PiRegStateSysAllInherittedSecurityDescriptor;
    if ( PiRegStateDiscriptor == NOT_VALIDATED )
    {
      LOBYTE(v5) = 1;
      if ( (int)SeCaptureSecurityDescriptor(PiRegStateSysAllInherittedSecurityDescriptor, 0LL, 1LL, v5, &tempDescriptor) < 0 )
      {
        PiRegStateDiscriptor = VALIDATED_UNSUCCESSFULLY;
      }
      else
      {
        PiRegStateDiscriptor = VALIDATED_SUCCESSFULLY;
        ExFreePoolWithTag(tempDescriptor, 0);
      }
    }
    if ( PiRegStateDiscriptor != VALIDATED_SUCCESSFULLY )
      v6 = 0LL;
    tempDescriptor = v6;
    inited = CmRegUtilCreateWstrKey(classKey, (wchar_t *)L"Properties", v4, v5, v6, 0LL, &classPropertyKey);
    ZwClose(classKey);
    if ( inited >= 0 )
    {
      RtlLengthSecurityDescriptor(StackCreationSettings->SecurityDescriptor);
      DestinationString = 0LL;
      inited = WdmlibRtlInitUnicodeStringEx(&DestinationString, (wchar_t *)L"Security");
      if ( inited >= 0 )
        inited = ZwSetValueKey(classPropertyKey, &DestinationString, 0, 3u, Data, v8);
      ZwClose(classPropertyKey);
    }
    return inited;
  }
  return result;
}
