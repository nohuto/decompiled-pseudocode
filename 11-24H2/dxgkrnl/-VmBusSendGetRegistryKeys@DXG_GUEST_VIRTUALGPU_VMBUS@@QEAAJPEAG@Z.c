/*
 * XREFs of ?VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z @ 0x14022BDB8
 * Callers:
 *     ?CopyRegistryKeys@DXGADAPTER@@QEAAJXZ @ 0x14018DCD4 (-CopyRegistryKeys@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x14002F1C4 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400644F8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x140070EC8 (-RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?RtlUnicodeStringCchCatStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z @ 0x14007B2D0 (-RtlUnicodeStringCchCatStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z.c)
 *     DpiGetRegistryPathFromPDO @ 0x14007C5A0 (DpiGetRegistryPathFromPDO.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z @ 0x1401AB4A8 (-TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z.c)
 *     ?TranslateUmdFileNameToVmMultiString@@YAJPEAGIPEAK@Z @ 0x1401AB63C (-TranslateUmdFileNameToVmMultiString@@YAJPEAGIPEAK@Z.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x14022EE3C (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?CloseRegistrySubkey@@YAXPEAX@Z @ 0x14033C79C (-CloseRegistrySubkey@@YAXPEAX@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1403E0D70 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1403E708C (-OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetRegistryKeys(DXG_GUEST_VIRTUALGPU_VMBUS *this, char *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 RegistryPathFromPDO; // rdi
  int *v7; // rax
  int *v8; // r14
  const wchar_t *v9; // r9
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // rbx
  int v11; // eax
  int v12; // r15d
  int *Data; // rbx
  ULONG v14; // r8d
  int v15; // r13d
  unsigned __int16 v16; // ax
  const unsigned __int16 *v17; // r12
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  unsigned int v25; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v27; // [rsp+60h] [rbp-A0h] BYREF
  int v28; // [rsp+64h] [rbp-9Ch] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING SourceString; // [rsp+78h] [rbp-88h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+88h] [rbp-78h] BYREF
  struct _UNICODE_STRING v32; // [rsp+98h] [rbp-68h] BYREF
  __int128 v33; // [rsp+B0h] [rbp-50h] BYREF
  int v34; // [rsp+C0h] [rbp-40h]
  char v35; // [rsp+1D0h] [rbp+D0h] BYREF
  char v36; // [rsp+3E0h] [rbp+2E0h] BYREF
  char v37; // [rsp+5F0h] [rbp+4F0h] BYREF

  v34 = 0;
  v33 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v33, this, 0x220u, 0LL, 0LL, 0LL);
  v4 = v33;
  if ( !(_QWORD)v33 )
    goto LABEL_6;
  *(_BYTE *)(v33 + 12) = 0;
  *(_DWORD *)(v4 + 12) &= 0x1FFu;
  *(_QWORD *)v4 = 0LL;
  *(_DWORD *)(v4 + 8) = 0;
  *(_QWORD *)(v4 + 16) = 63LL;
  SourceString.Buffer = (wchar_t *)&v35;
  DestinationString.Buffer = (wchar_t *)&v36;
  ValueName.Buffer = (wchar_t *)&v37;
  KeyHandle = 0LL;
  v25 = 1;
  *(_QWORD *)&SourceString.Length = 34078720LL;
  *(_QWORD *)&DestinationString.Length = 34078720LL;
  *(_QWORD *)&ValueName.Length = 34078720LL;
  v5 = RtlStringCbCopyW((char *)(v4 + 24), 0x208uLL, a2);
  RegistryPathFromPDO = v5;
  if ( v5 >= 0 )
  {
    v27 = 130040;
    v7 = (int *)operator new[](0x1FBF8uLL, 0x4B677844u, 64LL);
    v8 = v7;
    if ( !v7 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 13068;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Cannot allocate memory for DXGKVMB_COMMAND_GETREGISTRYKEYS_RETURN",
        13068LL,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_6:
      LODWORD(RegistryPathFromPDO) = -1073741801;
      goto LABEL_45;
    }
    RegistryPathFromPDO = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(
                            this,
                            (struct DXGVMBUSMESSAGE *)&v33,
                            v7,
                            &v27);
    if ( v27 )
    {
      if ( v8[1] >= 0 )
      {
        if ( (int)RegistryPathFromPDO < 0 )
        {
          WdLogSingleEntry1(2LL, RegistryPathFromPDO);
          v9 = L"VmBusSendReadRegistryKeys failed: 0x%I64x";
          WdLogGlobalForLineNumber = 13216;
          goto LABEL_43;
        }
        if ( *v8 )
        {
          DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(*((_QWORD *)this + 9) + 216LL));
          RegistryPathFromPDO = (int)DpiGetRegistryPathFromPDO(DeviceAttachmentBaseRef, 0, &SourceString.Length);
          ObfDereferenceObject(DeviceAttachmentBaseRef);
          if ( (int)RegistryPathFromPDO < 0 )
          {
            WdLogSingleEntry1(2LL, RegistryPathFromPDO);
            v9 = L"Failed to read PnP registry key name for VmBusGetRegistryKeys (status = 0x%I64x).";
            WdLogGlobalForLineNumber = 13104;
            goto LABEL_43;
          }
          wcscpy((wchar_t *)&v28, L"\\");
          *(_QWORD *)&v32.Length = 262146LL;
          v32.Buffer = (wchar_t *)&v28;
          v11 = RtlUnicodeStringCat(&SourceString, &v32);
          RegistryPathFromPDO = v11;
          if ( v11 < 0 )
          {
            WdLogSingleEntry1(2LL, v11);
            v9 = L"Failed to concat \\ to RegPathRoot for VmBusGetRegistryKeys (status = 0x%I64x).";
            WdLogGlobalForLineNumber = 13112;
            goto LABEL_43;
          }
          v12 = 0;
          if ( *v8 )
          {
            while ( 1 )
            {
              Data = &v8[774 * v12 + 2];
              RtlCopyUnicodeString(&DestinationString, &SourceString);
              v15 = 0;
              v16 = *((_WORD *)Data + 1024);
              if ( v16 )
                break;
LABEL_26:
              v25 = 1;
              v20 = OpenRegistrySubkey(&KeyHandle, 0x20006u, 0LL, &DestinationString, &v25);
              RegistryPathFromPDO = v20;
              if ( v20 < 0 )
              {
                WdLogSingleEntry1(2LL, v20);
                v9 = L"Failed to create registry subkey for VmBusGetRegistryKeys (status = 0x%I64x).";
                WdLogGlobalForLineNumber = 13164;
                goto LABEL_43;
              }
              if ( Data != (int *)-2568LL || MEMORY[0x20C] )
              {
                v21 = Data[772];
                if ( (unsigned int)(v21 - 1) <= 1 )
                {
                  v23 = TranslateUmdFileNameToVm((char *)Data, 0x400u, (unsigned int *)Data + 773);
                  RegistryPathFromPDO = v23;
                  if ( v23 < 0 )
                  {
                    WdLogSingleEntry1(2LL, v23);
                    v9 = L"Failed to translate UmdFileName to VM namespace for VmBusGetRegistryKeys (status = 0x%I64x).";
                    WdLogGlobalForLineNumber = 13179;
                    goto LABEL_43;
                  }
                }
                else if ( v21 == 7 )
                {
                  v22 = TranslateUmdFileNameToVmMultiString((unsigned __int16 *)Data, 1024, (unsigned int *)Data + 773);
                  RegistryPathFromPDO = v22;
                  if ( v22 < 0 )
                  {
                    WdLogSingleEntry1(2LL, v22);
                    v9 = L"Failed to translate UmdFileNames in Multi String Type to VM namespace for VmBusGetRegistryKeys "
                          "(status = 0x%I64x).";
                    WdLogGlobalForLineNumber = 13189;
                    goto LABEL_43;
                  }
                }
                RtlInitUnicodeString(&ValueName, (PCWSTR)Data + 1284);
                RegistryPathFromPDO = ZwSetValueKey(KeyHandle, &ValueName, 0, Data[772], Data, Data[773]);
                CloseRegistrySubkey(KeyHandle);
                KeyHandle = 0LL;
                if ( (int)RegistryPathFromPDO < 0 )
                {
                  WdLogSingleEntry1(2LL, RegistryPathFromPDO);
                  v9 = L"Failed to set value of reg key for VmBusGetRegistryKeys (status = 0x%I64x).";
                  WdLogGlobalForLineNumber = 13207;
                  goto LABEL_43;
                }
              }
              if ( ++v12 >= (unsigned int)*v8 )
                goto LABEL_44;
            }
            v17 = (const unsigned __int16 *)(Data + 512);
            while ( 1 )
            {
              if ( v16 == 92 )
              {
                v25 = 1;
                v18 = OpenRegistrySubkey(&KeyHandle, 0x20006u, 0LL, &DestinationString, &v25);
                RegistryPathFromPDO = v18;
                if ( v18 < 0 )
                {
                  WdLogSingleEntry1(2LL, v18);
                  WdLogGlobalForLineNumber = 13138;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000LL,
                    0xFFFFFFFFLL,
                    L"Failed to create registry key for VmBusGetRegistryKeys (status = 0x%I64x).",
                    RegistryPathFromPDO,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  goto LABEL_44;
                }
                CloseRegistrySubkey(KeyHandle);
                KeyHandle = 0LL;
              }
              v19 = RtlUnicodeStringCchCatStringN(&DestinationString, v17, v14);
              RegistryPathFromPDO = v19;
              if ( v19 < 0 )
                break;
              v17 = (const unsigned __int16 *)Data + (unsigned int)++v15 + 1024;
              v16 = *v17;
              if ( !*v17 )
                goto LABEL_26;
            }
            WdLogSingleEntry1(2LL, v19);
            v9 = L"Failed to build registry subkey for VmBusGetRegistryKeys (status = 0x%I64x).";
            WdLogGlobalForLineNumber = 13149;
            goto LABEL_43;
          }
        }
        else
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 13093;
        }
LABEL_44:
        CloseRegistrySubkey(KeyHandle);
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
        goto LABEL_45;
      }
      RegistryPathFromPDO = v8[1];
      WdLogSingleEntry1(2LL, RegistryPathFromPDO);
      v9 = L"VmBusSendSyncMessage Output failed for VmBusGetRegistryKeys (status = 0x%I64x).";
      WdLogGlobalForLineNumber = 13085;
    }
    else
    {
      RegistryPathFromPDO = -1073741823LL;
      WdLogSingleEntry1(2LL, -1073741823LL);
      v9 = L"VmBusSendSyncMessage failed for VmBusGetRegistryKeys (status = 0x%I64x).";
      WdLogGlobalForLineNumber = 13077;
    }
LABEL_43:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v9, RegistryPathFromPDO, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_44;
  }
  WdLogSingleEntry1(2LL, v5);
  WdLogGlobalForLineNumber = 13059;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Failed to copy RegPathIn to VMBus Command for VmBusGetRegistryKeys (status = 0x%I64x).",
    RegistryPathFromPDO,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_45:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v33);
  return (unsigned int)RegistryPathFromPDO;
}
