/*
 * XREFs of CmInitializeProcessor @ 0x1407D50BC
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407393A8 (KiStartDynamicProcessor.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x140318B30 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140319730 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwCreateKey @ 0x1406A7750 (ZwCreateKey.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1407D5208 (CmpAddProcessorConfigurationEntry.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall CmInitializeProcessor(__int64 a1)
{
  int v1; // ebx
  NTSTATUS result; // eax
  unsigned int v4; // ecx
  HANDLE KeyHandle; // [rsp+48h] [rbp-9h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+50h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+Fh] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+90h] [rbp+3Fh] BYREF

  v1 = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &CmRegistryMachineHardwareDescriptionSystemName;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateKey(&KeyHandle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( result >= 0 )
  {
    CmpConfigurationData = (PVOID)ExAllocatePool2(0x100uLL, (unsigned int)CmpConfigurationAreaSize, 0x20204D43u);
    if ( CmpConfigurationData )
    {
      v4 = *((_DWORD *)KiGlobalState + *(unsigned int *)(a1 + 36));
      Affinity.Reserved[1] = 0;
      Affinity.Reserved[2] = 0;
      *(_DWORD *)&Affinity.Group = (unsigned __int16)(v4 >> 6);
      Affinity.Mask = 1LL << (v4 & 0x3F);
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      CmpAddProcessorConfigurationEntry(a1, *(unsigned int *)(a1 + 36), KeyHandle);
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
      ExFreePoolWithTag(CmpConfigurationData, 0);
      CmpConfigurationData = 0LL;
    }
    else
    {
      v1 = -1073741670;
    }
    ZwClose(KeyHandle);
    return v1;
  }
  return result;
}
