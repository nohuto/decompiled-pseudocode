/*
 * XREFs of ?VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140223950
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x140066170 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x14006B1F0 (-RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 *     ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x140070F98 (-RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_GETREGISTRYKEYS@@@@YAPEAUDXGKVMB_COMMAND_GETREGISTRYKEYS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14007AF68 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_GETREGISTRYKEYS@@@@YAPEAUDXGKVMB_COMMAND_GETREGISTRYKEYS@.c)
 *     Feature_490959160__private_IsEnabledDeviceUsageNoInline @ 0x14007BFA0 (Feature_490959160__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ??1DXG_REGISTRY_KEY_LIST@@QEAA@XZ @ 0x1401CC4E4 (--1DXG_REGISTRY_KEY_LIST@@QEAA@XZ.c)
 *     ?AppendSubKeys@DXG_REGISTRY_KEY_LIST@@QEAAJPEAXPEAU_KEY_FULL_INFORMATION@@PEAU_UNICODE_STRING@@@Z @ 0x1401CC528 (-AppendSubKeys@DXG_REGISTRY_KEY_LIST@@QEAAJPEAXPEAU_KEY_FULL_INFORMATION@@PEAU_UNICODE_STRING@@@.c)
 *     ?InsertHead@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1401CE0E8 (-InsertHead@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?ReadNextPath@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1401CE858 (-ReadNextPath@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?CloseRegistrySubkey@@YAXPEAX@Z @ 0x14033C79C (-CloseRegistrySubkey@@YAXPEAX@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetRegistryKeys(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // di
  unsigned int v4; // ebx
  _DWORD *v5; // r13
  unsigned int *v6; // r14
  __int64 v7; // rsi
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // rbx
  const wchar_t *v9; // r9
  NTSTATUS v10; // eax
  int v11; // eax
  int inserted; // eax
  int v13; // eax
  NTSTATUS v14; // eax
  NTSTATUS v15; // eax
  ULONG Values; // eax
  ULONG v17; // ebx
  NTSTATUS v18; // eax
  unsigned int *v19; // rbx
  int appended; // eax
  const wchar_t *v21; // r9
  unsigned int v22; // eax
  __int64 ResultLength; // [rsp+28h] [rbp-E0h]
  void *KeyHandle; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A8h]
  struct _UNICODE_STRING v26; // [rsp+68h] [rbp-A0h] BYREF
  wchar_t *v27[2]; // [rsp+78h] [rbp-90h] BYREF
  ULONG v28; // [rsp+88h] [rbp-80h] BYREF
  ULONG v29; // [rsp+8Ch] [rbp-7Ch] BYREF
  ULONG Length[2]; // [rsp+90h] [rbp-78h]
  void *DeviceRegKey; // [rsp+98h] [rbp-70h] BYREF
  size_t Size; // [rsp+A0h] [rbp-68h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v34[24]; // [rsp+D8h] [rbp-30h] BYREF
  struct _KEY_FULL_INFORMATION KeyInformation; // [rsp+F0h] [rbp-18h] BYREF
  char v36; // [rsp+128h] [rbp+20h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v34,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    *(_QWORD *)Length = CastToVmBusCommand<DXGKVMB_COMMAND_GETREGISTRYKEYS>((__int64)a1);
    if ( *(_QWORD *)Length )
    {
      DeviceRegKey = 0LL;
      KeyHandle = 0LL;
      v26.Buffer = (wchar_t *)&v36;
      v4 = 130040;
      *(_QWORD *)&v26.Length = 34078720LL;
      v27[1] = (wchar_t *)v27;
      v27[0] = (wchar_t *)v27;
      memset(&KeyInformation, 0, sizeof(KeyInformation));
      v5 = 0LL;
      memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
      v6 = (unsigned int *)operator new[](0x1FBF8uLL, 0x4B677844u, 64LL);
      if ( v6 )
      {
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(*(_QWORD *)(*((_QWORD *)a1 + 10)
                                                                                             + 16LL)
                                                                                 + 216LL));
        v7 = IoOpenDeviceRegistryKey(DeviceAttachmentBaseRef, 2u, 0x20019u, &DeviceRegKey);
        ObfDereferenceObject(DeviceAttachmentBaseRef);
        if ( (int)v7 >= 0 )
        {
          v10 = RtlUnicodeStringCopyString(&v26, (wchar_t *)(*(_QWORD *)Length + 24LL));
          v7 = v10;
          if ( v10 >= 0 )
          {
            v11 = RtlUnicodeStringCatString(&v26, word_140124984);
            v7 = v11;
            if ( v11 >= 0 )
            {
              inserted = DXG_REGISTRY_KEY_LIST::InsertHead((DXG_REGISTRY_KEY_LIST *)v27, &v26);
              v7 = inserted;
              if ( inserted >= 0 )
              {
                while ( 1 )
                {
                  if ( (wchar_t **)v27[0] == v27 )
                    goto LABEL_39;
                  v13 = DXG_REGISTRY_KEY_LIST::ReadNextPath(v27, &v26);
                  v7 = v13;
                  if ( v13 < 0 )
                  {
                    WdLogSingleEntry1(2LL, v13);
                    v21 = L"Failed to initialize subkey string for VmBusGetRegistryKeys (status = 0x%I64x).";
                    WdLogGlobalForLineNumber = 6065;
                    goto LABEL_38;
                  }
                  ObjectAttributes.RootDirectory = DeviceRegKey;
                  ObjectAttributes.Length = 48;
                  ObjectAttributes.ObjectName = &v26;
                  ObjectAttributes.Attributes = 576;
                  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                  v14 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
                  v7 = v14;
                  if ( v14 < 0 )
                    break;
                  v28 = 0;
                  v15 = ZwQueryKey(KeyHandle, KeyFullInformation, &KeyInformation, 0x30u, &v28);
                  v7 = v15;
                  if ( v15 < 0 )
                  {
                    WdLogSingleEntry1(2LL, v15);
                    v21 = L"Failed to query key for VmBusGetRegistryKeys (status = 0x%I64x).";
                    WdLogGlobalForLineNumber = 6094;
LABEL_38:
                    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v21, v7, 0LL, 0LL, 0LL, 0LL);
LABEL_39:
                    v5 = 0LL;
                    goto LABEL_40;
                  }
                  Length[0] = KeyInformation.MaxValueDataLen + 24 + 2 * KeyInformation.MaxValueNameLen;
                  Size = Length[0];
                  v5 = (_DWORD *)operator new[](Length[0], 0x4B677844u, 256LL);
                  if ( !v5 )
                  {
                    LODWORD(v7) = -1073741801;
                    WdLogSingleEntry0(6LL);
                    WdLogGlobalForLineNumber = 6105;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262145LL,
                      0xFFFFFFFFLL,
                      L"Cannot allocate memory for KEY_VALUE_FULL_INFORMATION",
                      6105LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                    goto LABEL_40;
                  }
                  Values = KeyInformation.Values;
                  v17 = 0;
                  LODWORD(v25) = 0;
                  if ( KeyInformation.Values )
                  {
                    while ( *v6 != 42 )
                    {
                      memset(v5, 0, Size);
                      v29 = 0;
                      v18 = ZwEnumerateValueKey(KeyHandle, v17, KeyValueFullInformation, v5, Length[0], &v29);
                      v7 = v18;
                      if ( v18 < 0 )
                      {
                        WdLogSingleEntry1(2LL, v18);
                        v9 = L"Failed to Enumerate Value for VmBusGetRegistryKeys (status = 0x%I64x).";
                        WdLogGlobalForLineNumber = 6131;
                        goto LABEL_8;
                      }
                      v19 = &v6[774 * *v6];
                      RtlStringCbCopyUnicodeString((char *)v19 + 2056, 0x208uLL, &v26);
                      memmove(v19 + 644, v5 + 5, (unsigned int)v5[4]);
                      memmove(v19 + 2, (char *)v5 + (unsigned int)v5[2], (unsigned int)v5[3]);
                      v19[774] = v5[1];
                      v19[775] = v5[3];
                      LODWORD(v19) = v25;
                      ++*v6;
                      v17 = (_DWORD)v19 + 1;
                      Values = KeyInformation.Values;
                      LODWORD(v25) = v17;
                      if ( v17 >= KeyInformation.Values )
                        goto LABEL_26;
                    }
                    WdLogSingleEntry1(2LL, (unsigned int)v7);
                    v9 = L"Maximum number of KeyValues reached, aborting VmBusGetRegistryKeys (status = 0x%I64x).";
                    ResultLength = (unsigned int)v7;
                    WdLogGlobalForLineNumber = 6115;
                    goto LABEL_9;
                  }
LABEL_26:
                  if ( !KeyInformation.SubKeys && !Values )
                  {
                    RtlStringCbCopyUnicodeString((char *)&v6[774 * *v6 + 514], 0x208uLL, &v26);
                    ++*v6;
                  }
                  appended = DXG_REGISTRY_KEY_LIST::AppendSubKeys(
                               (DXG_REGISTRY_KEY_LIST *)v27,
                               KeyHandle,
                               &KeyInformation,
                               &v26);
                  v7 = appended;
                  if ( appended < 0 )
                  {
                    WdLogSingleEntry1(2LL, appended);
                    v9 = L"Failed to Append SubKeys for VmBusGetRegistryKeys (status = 0x%I64x).";
                    WdLogGlobalForLineNumber = 6157;
                    goto LABEL_8;
                  }
                  CloseRegistrySubkey(KeyHandle);
                  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v5);
                  KeyHandle = 0LL;
                }
                WdLogSingleEntry1(2LL, v14);
                v21 = L"Failed to open PnP registry subkey for VmBusGetRegistryKeys (status = 0x%I64x).";
                WdLogGlobalForLineNumber = 6079;
                goto LABEL_38;
              }
              WdLogSingleEntry1(2LL, inserted);
              v9 = L"Failed to insert root registry key name into list for VmBusGetRegistryKeys (status = 0x%I64x).";
              WdLogGlobalForLineNumber = 6054;
            }
            else
            {
              WdLogSingleEntry1(2LL, v11);
              v9 = L"Failed to append null char to CurrentRegistryPath for VmBusGetRegistryKeys (status = 0x%I64x).";
              WdLogGlobalForLineNumber = 6046;
            }
          }
          else
          {
            WdLogSingleEntry1(2LL, v10);
            v9 = L"Failed to copy root registry key name for VmBusGetRegistryKeys (status = 0x%I64x).";
            WdLogGlobalForLineNumber = 6038;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, v7);
          v9 = L"Failed to read PnP registry key name for VmBusGetRegistryKeys (status = 0x%I64x).";
          WdLogGlobalForLineNumber = 6029;
        }
LABEL_8:
        ResultLength = v7;
LABEL_9:
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v9, ResultLength, 0LL, 0LL, 0LL, 0LL);
LABEL_40:
        v4 = 130040;
      }
      else
      {
        LODWORD(v7) = -1073741801;
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 6015;
        DxgkLogInternalTriageEvent(
          0LL,
          262145LL,
          0xFFFFFFFFLL,
          L"Cannot allocate memory for DXGKVMB_COMMAND_GETREGISTRYKEYS_RETURN",
          6015LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      CloseRegistrySubkey(DeviceRegKey);
      CloseRegistrySubkey(KeyHandle);
      if ( !(unsigned int)Feature_490959160__private_IsEnabledDeviceUsageNoInline() || v6 )
      {
        v22 = *v6;
        v6[1] = v7;
        if ( v22 < 0x2A )
          v4 = 3096 * v22 + 8;
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v6, v4);
        v2 = 1;
      }
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v6);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v5);
      DXG_REGISTRY_KEY_LIST::~DXG_REGISTRY_KEY_LIST((DXG_REGISTRY_KEY_LIST *)v27);
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v34);
    return v2;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 5995;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      5995LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v34);
    return 0;
  }
}
