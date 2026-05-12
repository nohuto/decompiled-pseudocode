/*
 * XREFs of RegisterForNvmeIceInterfaceCallback @ 0x140183D80
 * Callers:
 *     <none>
 * Callees:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140056648 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     AddNvmeIceInterfaceToList @ 0x140069104 (AddNvmeIceInterfaceToList.c)
 *     RemoveNvmeIceInterfaceFromList @ 0x14006ABFC (RemoveNvmeIceInterfaceFromList.c)
 *     GetNvmeIceInterface @ 0x1401839B0 (GetNvmeIceInterface.c)
 */

__int64 __fastcall RegisterForNvmeIceInterfaceCallback(char *NotificationStructure, PVOID Context)
{
  _QWORD *v2; // rsi
  int v3; // edi
  PVOID *i; // rdi
  int NvmeIceInterface; // eax
  int v7; // eax
  _QWORD *v9; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v10; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0LL;
  v3 = 0;
  v10 = 0LL;
  v9 = 0LL;
  if ( !(unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
    ExAcquireResourceExclusiveLite(&NvmeIceListLock, 1u);
  if ( *(_QWORD *)(NotificationStructure + 20) == *(_QWORD *)&GUID_DEVINTERFACE_NVME_ICE.Data1
    && *(_QWORD *)(NotificationStructure + 28) == *(_QWORD *)GUID_DEVINTERFACE_NVME_ICE.Data4 )
  {
    if ( *(_QWORD *)(NotificationStructure + 4) == *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1
      && *(_QWORD *)(NotificationStructure + 12) == *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4 )
    {
      if ( !(unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
      {
        for ( i = (PVOID *)NvmeIceList; i != &NvmeIceList; i = (PVOID *)*i )
        {
          if ( RtlEqualUnicodeString((PCUNICODE_STRING)(i + 3), *((PCUNICODE_STRING *)NotificationStructure + 5), 1u) )
          {
            v3 = 0;
            goto LABEL_19;
          }
        }
      }
      NvmeIceInterface = GetNvmeIceInterface(*((struct _UNICODE_STRING **)NotificationStructure + 5), &v9, &v10);
      v2 = v9;
      v3 = NvmeIceInterface;
      if ( NvmeIceInterface >= 0 )
      {
        v7 = AddNvmeIceInterfaceToList(*((PCUNICODE_STRING *)NotificationStructure + 5), v9, v10);
LABEL_18:
        v3 = v7;
      }
    }
    else if ( *(_QWORD *)(NotificationStructure + 4) == *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1
           && *(_QWORD *)(NotificationStructure + 12) == *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4 )
    {
      v7 = RemoveNvmeIceInterfaceFromList(*((PCUNICODE_STRING *)NotificationStructure + 5));
      goto LABEL_18;
    }
  }
LABEL_19:
  if ( !(unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
    ExReleaseResourceLite(&NvmeIceListLock);
  if ( v3 < 0 && v2 )
    ExFreePoolWithTag(v2, 0x72436152u);
  return (unsigned int)v3;
}
