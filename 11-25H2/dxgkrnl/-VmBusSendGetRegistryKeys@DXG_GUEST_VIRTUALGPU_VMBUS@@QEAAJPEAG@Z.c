/*
 * XREFs of ?VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z @ 0x1402254CC
 * Callers:
 *     ?CopyRegistryKeys@DXGADAPTER@@QEAAJXZ @ 0x14018BA9C (-CopyRegistryKeys@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x14002ED20 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400648D8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x140070548 (-RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?RtlUnicodeStringCchCatStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z @ 0x14007ADC8 (-RtlUnicodeStringCchCatStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z.c)
 *     DpiGetRegistryPathFromPDO @ 0x14007C100 (DpiGetRegistryPathFromPDO.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z @ 0x1401A8FA8 (-TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z.c)
 *     ?TranslateUmdFileNameToVmMultiString@@YAJPEAGIPEAK@Z @ 0x1401A913C (-TranslateUmdFileNameToVmMultiString@@YAJPEAGIPEAK@Z.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x140228550 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402FACC0 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?CloseRegistrySubkey@@YAXPEAX@Z @ 0x14036809C (-CloseRegistrySubkey@@YAXPEAX@Z.c)
 *     ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1403ED6C0 (-OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetRegistryKeys(DXG_GUEST_VIRTUALGPU_VMBUS *this, char *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // r9
  __int64 RegistryPathFromPDO; // rdi
  int *v8; // rax
  int *v9; // r14
  const wchar_t *v10; // r9
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // rbx
  int v12; // eax
  int v13; // r15d
  int *Data; // rbx
  ULONG v15; // r8d
  int v16; // r13d
  unsigned __int16 v17; // ax
  const unsigned __int16 *v18; // r12
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 v22; // r9
  int v23; // ecx
  int v24; // eax
  int v25; // eax
  unsigned int v27; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v29; // [rsp+60h] [rbp-A0h] BYREF
  int v30; // [rsp+64h] [rbp-9Ch] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING SourceString; // [rsp+78h] [rbp-88h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+88h] [rbp-78h] BYREF
  struct _UNICODE_STRING v34; // [rsp+98h] [rbp-68h] BYREF
  __int128 v35; // [rsp+B0h] [rbp-50h] BYREF
  int v36; // [rsp+C0h] [rbp-40h]
  char v37; // [rsp+1D0h] [rbp+D0h] BYREF
  char v38; // [rsp+3E0h] [rbp+2E0h] BYREF
  char v39; // [rsp+5F0h] [rbp+4F0h] BYREF

  v36 = 0;
  v35 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v35, this, 0x220u, 0LL, 0LL, 0LL);
  v4 = v35;
  if ( !(_QWORD)v35 )
    goto LABEL_6;
  *(_BYTE *)(v35 + 12) = 0;
  *(_DWORD *)(v4 + 12) &= 0x1FFu;
  *(_QWORD *)v4 = 0LL;
  *(_DWORD *)(v4 + 8) = 0;
  *(_QWORD *)(v4 + 16) = 63LL;
  SourceString.Buffer = (wchar_t *)&v37;
  DestinationString.Buffer = (wchar_t *)&v38;
  ValueName.Buffer = (wchar_t *)&v39;
  KeyHandle = 0LL;
  v27 = 1;
  *(_QWORD *)&SourceString.Length = 34078720LL;
  *(_QWORD *)&DestinationString.Length = 34078720LL;
  *(_QWORD *)&ValueName.Length = 34078720LL;
  v5 = RtlStringCbCopyW((char *)(v4 + 24), 0x208uLL, a2);
  RegistryPathFromPDO = v5;
  if ( v5 >= 0 )
  {
    v29 = 130040;
    v8 = (int *)operator new[](0x1FBF8uLL, 0x4B677844u, 64LL, v6);
    v9 = v8;
    if ( !v8 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 12880;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Cannot allocate memory for DXGKVMB_COMMAND_GETREGISTRYKEYS_RETURN",
        12880LL,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_6:
      LODWORD(RegistryPathFromPDO) = -1073741801;
      goto LABEL_45;
    }
    RegistryPathFromPDO = (int)DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(
                                 this,
                                 (struct DXGVMBUSMESSAGE *)&v35,
                                 v8,
                                 &v29);
    if ( v29 )
    {
      if ( v9[1] >= 0 )
      {
        if ( (int)RegistryPathFromPDO < 0 )
        {
          WdLogSingleEntry1(2LL, RegistryPathFromPDO);
          v10 = L"VmBusSendReadRegistryKeys failed: 0x%I64x";
          WdLogGlobalForLineNumber = 13028;
          goto LABEL_43;
        }
        if ( *v9 )
        {
          DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(*((_QWORD *)this + 9) + 216LL));
          RegistryPathFromPDO = (int)DpiGetRegistryPathFromPDO(DeviceAttachmentBaseRef, 0, &SourceString.Length);
          ObfDereferenceObject(DeviceAttachmentBaseRef);
          if ( (int)RegistryPathFromPDO < 0 )
          {
            WdLogSingleEntry1(2LL, RegistryPathFromPDO);
            v10 = L"Failed to read PnP registry key name for VmBusGetRegistryKeys (status = 0x%I64x).";
            WdLogGlobalForLineNumber = 12916;
            goto LABEL_43;
          }
          wcscpy((wchar_t *)&v30, L"\\");
          *(_QWORD *)&v34.Length = 262146LL;
          v34.Buffer = (wchar_t *)&v30;
          v12 = RtlUnicodeStringCat(&SourceString, &v34);
          RegistryPathFromPDO = v12;
          if ( v12 < 0 )
          {
            WdLogSingleEntry1(2LL, v12);
            v10 = L"Failed to concat \\ to RegPathRoot for VmBusGetRegistryKeys (status = 0x%I64x).";
            WdLogGlobalForLineNumber = 12924;
            goto LABEL_43;
          }
          v13 = 0;
          if ( *v9 )
          {
            while ( 1 )
            {
              Data = &v9[774 * v13 + 2];
              RtlCopyUnicodeString(&DestinationString, &SourceString);
              v16 = 0;
              v17 = *((_WORD *)Data + 1024);
              if ( v17 )
                break;
LABEL_26:
              v27 = 1;
              v21 = OpenRegistrySubkey(&KeyHandle, 0x20006u, 0LL, &DestinationString, &v27);
              RegistryPathFromPDO = v21;
              if ( v21 < 0 )
              {
                WdLogSingleEntry1(2LL, v21);
                v10 = L"Failed to create registry subkey for VmBusGetRegistryKeys (status = 0x%I64x).";
                WdLogGlobalForLineNumber = 12976;
                goto LABEL_43;
              }
              if ( Data != (int *)-2568LL || MEMORY[0x20C] )
              {
                v23 = Data[772];
                if ( (unsigned int)(v23 - 1) <= 1 )
                {
                  v25 = TranslateUmdFileNameToVm((char *)Data, 0x400u, (unsigned int *)Data + 773);
                  RegistryPathFromPDO = v25;
                  if ( v25 < 0 )
                  {
                    WdLogSingleEntry1(2LL, v25);
                    v10 = L"Failed to translate UmdFileName to VM namespace for VmBusGetRegistryKeys (status = 0x%I64x).";
                    WdLogGlobalForLineNumber = 12991;
                    goto LABEL_43;
                  }
                }
                else if ( v23 == 7 )
                {
                  v24 = TranslateUmdFileNameToVmMultiString(
                          (unsigned __int16 *)Data,
                          1024,
                          (unsigned int *)Data + 773,
                          v22);
                  RegistryPathFromPDO = v24;
                  if ( v24 < 0 )
                  {
                    WdLogSingleEntry1(2LL, v24);
                    v10 = L"Failed to translate UmdFileNames in Multi String Type to VM namespace for VmBusGetRegistryKeys"
                           " (status = 0x%I64x).";
                    WdLogGlobalForLineNumber = 13001;
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
                  v10 = L"Failed to set value of reg key for VmBusGetRegistryKeys (status = 0x%I64x).";
                  WdLogGlobalForLineNumber = 13019;
                  goto LABEL_43;
                }
              }
              if ( ++v13 >= (unsigned int)*v9 )
                goto LABEL_44;
            }
            v18 = (const unsigned __int16 *)(Data + 512);
            while ( 1 )
            {
              if ( v17 == 92 )
              {
                v27 = 1;
                v19 = OpenRegistrySubkey(&KeyHandle, 0x20006u, 0LL, &DestinationString, &v27);
                RegistryPathFromPDO = v19;
                if ( v19 < 0 )
                {
                  WdLogSingleEntry1(2LL, v19);
                  WdLogGlobalForLineNumber = 12950;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
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
              v20 = RtlUnicodeStringCchCatStringN(&DestinationString, v18, v15);
              RegistryPathFromPDO = v20;
              if ( v20 < 0 )
                break;
              v18 = (const unsigned __int16 *)Data + (unsigned int)++v16 + 1024;
              v17 = *v18;
              if ( !*v18 )
                goto LABEL_26;
            }
            WdLogSingleEntry1(2LL, v20);
            v10 = L"Failed to build registry subkey for VmBusGetRegistryKeys (status = 0x%I64x).";
            WdLogGlobalForLineNumber = 12961;
            goto LABEL_43;
          }
        }
        else
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 12905;
        }
LABEL_44:
        CloseRegistrySubkey(KeyHandle);
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
        goto LABEL_45;
      }
      RegistryPathFromPDO = v9[1];
      WdLogSingleEntry1(2LL, RegistryPathFromPDO);
      v10 = L"VmBusSendSyncMessage Output failed for VmBusGetRegistryKeys (status = 0x%I64x).";
      WdLogGlobalForLineNumber = 12897;
    }
    else
    {
      RegistryPathFromPDO = -1073741823LL;
      WdLogSingleEntry1(2LL, -1073741823LL);
      v10 = L"VmBusSendSyncMessage failed for VmBusGetRegistryKeys (status = 0x%I64x).";
      WdLogGlobalForLineNumber = 12889;
    }
LABEL_43:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v10, RegistryPathFromPDO, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_44;
  }
  WdLogSingleEntry1(2LL, v5);
  WdLogGlobalForLineNumber = 12871;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Failed to copy RegPathIn to VMBus Command for VmBusGetRegistryKeys (status = 0x%I64x).",
    RegistryPathFromPDO,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_45:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v35);
  return (unsigned int)RegistryPathFromPDO;
}
