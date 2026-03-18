/*
 * XREFs of ?VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021D4F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140013C98 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x140066604 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x14006B5D0 (-RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 *     ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x140070618 (-RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_GETREGISTRYKEYS@@@@YAPEAUDXGKVMB_COMMAND_GETREGISTRYKEYS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14007AA88 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_GETREGISTRYKEYS@@@@YAPEAUDXGKVMB_COMMAND_GETREGISTRYKEYS@.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ??1DXG_REGISTRY_KEY_LIST@@QEAA@XZ @ 0x1401C7254 (--1DXG_REGISTRY_KEY_LIST@@QEAA@XZ.c)
 *     ?AppendSubKeys@DXG_REGISTRY_KEY_LIST@@QEAAJPEAXPEAU_KEY_FULL_INFORMATION@@PEAU_UNICODE_STRING@@@Z @ 0x1401C7298 (-AppendSubKeys@DXG_REGISTRY_KEY_LIST@@QEAAJPEAXPEAU_KEY_FULL_INFORMATION@@PEAU_UNICODE_STRING@@@.c)
 *     ?InsertHead@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1401C8E58 (-InsertHead@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?ReadNextPath@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1401C95C8 (-ReadNextPath@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?CloseRegistrySubkey@@YAXPEAX@Z @ 0x14036809C (-CloseRegistrySubkey@@YAXPEAX@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetRegistryKeys(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  struct DXGADAPTER_VMBUS_PACKET *v1; // rbx
  char v2; // di
  __int64 v4; // r9
  __int64 v5; // r13
  unsigned int v6; // r14d
  _DWORD *v7; // r15
  unsigned int *v8; // r12
  __int64 v9; // rsi
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // rbx
  const wchar_t *v11; // r9
  NTSTATUS v12; // eax
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  int inserted; // eax
  int v17; // eax
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  __int64 v20; // r9
  ULONG v21; // ebx
  ULONG i; // r13d
  NTSTATUS v23; // eax
  unsigned int *v24; // rbx
  int appended; // eax
  const wchar_t *v26; // r9
  unsigned int v27; // eax
  __int64 ResultLength; // [rsp+28h] [rbp-E0h]
  void *KeyHandle; // [rsp+60h] [rbp-A8h] BYREF
  struct _UNICODE_STRING v31; // [rsp+68h] [rbp-A0h] BYREF
  wchar_t *v32[2]; // [rsp+78h] [rbp-90h] BYREF
  ULONG v33; // [rsp+88h] [rbp-80h] BYREF
  ULONG v34; // [rsp+8Ch] [rbp-7Ch] BYREF
  ULONG v35; // [rsp+90h] [rbp-78h]
  void *DeviceRegKey; // [rsp+98h] [rbp-70h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v38[24]; // [rsp+D0h] [rbp-38h] BYREF
  struct _KEY_FULL_INFORMATION KeyInformation; // [rsp+E8h] [rbp-20h] BYREF
  char v40; // [rsp+118h] [rbp+10h] BYREF

  v1 = a1;
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v38,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)v1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 5983;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      5983LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v38);
    return 0;
  }
  v5 = CastToVmBusCommand<DXGKVMB_COMMAND_GETREGISTRYKEYS>((__int64)v1);
  if ( v5 )
  {
    DeviceRegKey = 0LL;
    KeyHandle = 0LL;
    v31.Buffer = (wchar_t *)&v40;
    v6 = 130040;
    *(_QWORD *)&v31.Length = 34078720LL;
    v32[1] = (wchar_t *)v32;
    v32[0] = (wchar_t *)v32;
    memset(&KeyInformation, 0, sizeof(KeyInformation));
    v7 = 0LL;
    memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
    v8 = (unsigned int *)operator new[](0x1FBF8uLL, 0x4B677844u, 64LL, v4);
    if ( !v8 )
    {
      LODWORD(v9) = -1073741801;
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 6003;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Cannot allocate memory for DXGKVMB_COMMAND_GETREGISTRYKEYS_RETURN",
        6003LL,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_42:
      CloseRegistrySubkey(DeviceRegKey);
      CloseRegistrySubkey(KeyHandle);
      v27 = *v8;
      v8[1] = v9;
      if ( v27 < 0x2A )
        v6 = 3096 * v27 + 8;
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v1 + 16), v8, v6);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v7);
      DXG_REGISTRY_KEY_LIST::~DXG_REGISTRY_KEY_LIST((DXG_REGISTRY_KEY_LIST *)v32);
      v2 = 1;
      goto LABEL_45;
    }
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(*(_QWORD *)(*((_QWORD *)v1 + 10) + 16LL)
                                                                             + 216LL));
    v9 = IoOpenDeviceRegistryKey(DeviceAttachmentBaseRef, 2u, 0x20019u, &DeviceRegKey);
    ObfDereferenceObject(DeviceAttachmentBaseRef);
    if ( (int)v9 < 0 )
    {
      WdLogSingleEntry1(2LL, v9);
      v11 = L"Failed to read PnP registry key name for VmBusGetRegistryKeys (status = 0x%I64x).";
      WdLogGlobalForLineNumber = 6017;
      goto LABEL_8;
    }
    v12 = RtlUnicodeStringCopyString(&v31, (wchar_t *)(v5 + 24));
    v9 = v12;
    if ( v12 < 0 )
    {
      WdLogSingleEntry1(2LL, v12);
      v11 = L"Failed to copy root registry key name for VmBusGetRegistryKeys (status = 0x%I64x).";
      WdLogGlobalForLineNumber = 6026;
      goto LABEL_8;
    }
    v13 = RtlUnicodeStringCatString(&v31, word_1401226D0);
    v9 = v13;
    if ( v13 < 0 )
    {
      WdLogSingleEntry1(2LL, v13);
      v11 = L"Failed to append null char to CurrentRegistryPath for VmBusGetRegistryKeys (status = 0x%I64x).";
      WdLogGlobalForLineNumber = 6034;
      goto LABEL_8;
    }
    inserted = DXG_REGISTRY_KEY_LIST::InsertHead((DXG_REGISTRY_KEY_LIST *)v32, &v31, v14, v15);
    v9 = inserted;
    if ( inserted < 0 )
    {
      WdLogSingleEntry1(2LL, inserted);
      v11 = L"Failed to insert root registry key name into list for VmBusGetRegistryKeys (status = 0x%I64x).";
      WdLogGlobalForLineNumber = 6042;
LABEL_8:
      ResultLength = v9;
LABEL_9:
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v11, ResultLength, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_41;
    }
    while ( 2 )
    {
      if ( (wchar_t **)v32[0] != v32 )
      {
        v17 = DXG_REGISTRY_KEY_LIST::ReadNextPath(v32, &v31);
        v9 = v17;
        if ( v17 < 0 )
        {
          WdLogSingleEntry1(2LL, v17);
          v26 = L"Failed to initialize subkey string for VmBusGetRegistryKeys (status = 0x%I64x).";
          WdLogGlobalForLineNumber = 6053;
        }
        else
        {
          ObjectAttributes.RootDirectory = DeviceRegKey;
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &v31;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v18 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
          v9 = v18;
          if ( v18 < 0 )
          {
            WdLogSingleEntry1(2LL, v18);
            v26 = L"Failed to open PnP registry subkey for VmBusGetRegistryKeys (status = 0x%I64x).";
            WdLogGlobalForLineNumber = 6067;
          }
          else
          {
            v33 = 0;
            v19 = ZwQueryKey(KeyHandle, KeyFullInformation, &KeyInformation, 0x30u, &v33);
            v9 = v19;
            if ( v19 >= 0 )
            {
              v21 = KeyInformation.MaxValueDataLen + 2 * (KeyInformation.MaxValueNameLen + 12);
              v35 = v21;
              v7 = (_DWORD *)operator new[](v21, 0x4B677844u, 256LL, v20);
              if ( v7 )
              {
                for ( i = 0; i < KeyInformation.Values; ++i )
                {
                  if ( *v8 == 42 )
                  {
                    WdLogSingleEntry1(2LL, (unsigned int)v9);
                    v11 = L"Maximum number of KeyValues reached, aborting VmBusGetRegistryKeys (status = 0x%I64x).";
                    ResultLength = (unsigned int)v9;
                    WdLogGlobalForLineNumber = 6103;
                    goto LABEL_9;
                  }
                  memset(v7, 0, v21);
                  v34 = 0;
                  v23 = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, v7, v21, &v34);
                  v9 = v23;
                  if ( v23 < 0 )
                  {
                    WdLogSingleEntry1(2LL, v23);
                    v11 = L"Failed to Enumerate Value for VmBusGetRegistryKeys (status = 0x%I64x).";
                    WdLogGlobalForLineNumber = 6119;
                    goto LABEL_8;
                  }
                  v24 = &v8[774 * *v8];
                  RtlStringCbCopyUnicodeString((char *)v24 + 2056, 0x208uLL, &v31);
                  memmove(v24 + 644, v7 + 5, (unsigned int)v7[4]);
                  memmove(v24 + 2, (char *)v7 + (unsigned int)v7[2], (unsigned int)v7[3]);
                  v24[774] = v7[1];
                  v24[775] = v7[3];
                  ++*v8;
                  v21 = v35;
                }
                if ( !KeyInformation.SubKeys && !KeyInformation.Values )
                {
                  RtlStringCbCopyUnicodeString((char *)&v8[774 * *v8 + 514], 0x208uLL, &v31);
                  ++*v8;
                }
                appended = DXG_REGISTRY_KEY_LIST::AppendSubKeys(
                             (DXG_REGISTRY_KEY_LIST *)v32,
                             KeyHandle,
                             &KeyInformation,
                             &v31);
                v9 = appended;
                if ( appended >= 0 )
                {
                  CloseRegistrySubkey(KeyHandle);
                  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v7);
                  KeyHandle = 0LL;
                  continue;
                }
                WdLogSingleEntry1(2LL, appended);
                v11 = L"Failed to Append SubKeys for VmBusGetRegistryKeys (status = 0x%I64x).";
                WdLogGlobalForLineNumber = 6145;
                goto LABEL_8;
              }
              LODWORD(v9) = -1073741801;
              WdLogSingleEntry0(6LL);
              WdLogGlobalForLineNumber = 6093;
              DxgkLogInternalTriageEvent(
                0LL,
                262145,
                0xFFFFFFFFLL,
                L"Cannot allocate memory for KEY_VALUE_FULL_INFORMATION",
                6093LL,
                0LL,
                0LL,
                0LL,
                0LL);
LABEL_41:
              v1 = a1;
              v6 = 130040;
              goto LABEL_42;
            }
            WdLogSingleEntry1(2LL, v19);
            v26 = L"Failed to query key for VmBusGetRegistryKeys (status = 0x%I64x).";
            WdLogGlobalForLineNumber = 6082;
          }
        }
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v26, v9, 0LL, 0LL, 0LL, 0LL);
      }
      break;
    }
    v7 = 0LL;
    goto LABEL_41;
  }
LABEL_45:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v38);
  return v2;
}
