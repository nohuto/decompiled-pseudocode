/*
 * XREFs of UsbhSetupDevice @ 0x1400280C8
 * Callers:
 *     UsbhReset2Complete @ 0x140028D20 (UsbhReset2Complete.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     UsbhQueryPortState @ 0x140009A20 (UsbhQueryPortState.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x140018260 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhBuildDeviceID @ 0x14001B254 (UsbhBuildDeviceID.c)
 *     UsbhBuildHardwareID @ 0x14001B560 (UsbhBuildHardwareID.c)
 *     UsbhBuildCompatibleID @ 0x14001BCD8 (UsbhBuildCompatibleID.c)
 *     UsbhGetLanguageIdString @ 0x14002686C (UsbhGetLanguageIdString.c)
 *     UsbhSyncSendCommandToDevice @ 0x140026E60 (UsbhSyncSendCommandToDevice.c)
 *     UsbhGetInitRegUsbDeviceFlags @ 0x1400275C4 (UsbhGetInitRegUsbDeviceFlags.c)
 *     UsbhGetProductIdString @ 0x1400277A4 (UsbhGetProductIdString.c)
 *     UsbhFreeID @ 0x14002796C (UsbhFreeID.c)
 *     Usbh__TestPoint__Ulong @ 0x1400279A4 (Usbh__TestPoint__Ulong.c)
 *     UsbhGetSerialNumber @ 0x140027A08 (UsbhGetSerialNumber.c)
 *     UsbhGetDeviceInformation @ 0x140027C88 (UsbhGetDeviceInformation.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhUpdateUxdSettings @ 0x14002A6CC (UsbhUpdateUxdSettings.c)
 *     UsbhValidateDeviceDescriptor @ 0x1400396FC (UsbhValidateDeviceDescriptor.c)
 *     UsbhGetMSOS_Descriptor @ 0x140041B98 (UsbhGetMSOS_Descriptor.c)
 *     UsbhGetMsOs20DescriptorSet @ 0x140041E50 (UsbhGetMsOs20DescriptorSet.c)
 *     UsbhGetMsOsContainerID @ 0x140041F94 (UsbhGetMsOsContainerID.c)
 *     UsbhGetMsOsExtendedConfigDesc @ 0x140042298 (UsbhGetMsOsExtendedConfigDesc.c)
 *     UsbhSendMsOs20AltEnumCommand @ 0x140042A50 (UsbhSendMsOs20AltEnumCommand.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x140046448 (UsbhGetAlternateUsbDescriptors.c)
 *     UsbhGetBillboardInfo @ 0x1400465D8 (UsbhGetBillboardInfo.c)
 *     WPP_RECORDER_SF_S @ 0x140048F98 (WPP_RECORDER_SF_S.c)
 *     UsbhBusIf_SetClearRootPortResumeTime @ 0x140056E20 (UsbhBusIf_SetClearRootPortResumeTime.c)
 *     UsbhBusIf_SetMsOs20Support @ 0x140056F2C (UsbhBusIf_SetMsOs20Support.c)
 *     UsbhValidateBOSDescriptorSet @ 0x14005B050 (UsbhValidateBOSDescriptorSet.c)
 *     UsbhValidateMsOs20DescriptorSet @ 0x14005B4BC (UsbhValidateMsOs20DescriptorSet.c)
 *     UsbhGetBosDescriptor @ 0x14005BF68 (UsbhGetBosDescriptor.c)
 *     UsbhGetDeviceDescriptor @ 0x14005C10C (UsbhGetDeviceDescriptor.c)
 *     UsbhGetQualifierDescriptorFromDevice @ 0x14005C1E8 (UsbhGetQualifierDescriptorFromDevice.c)
 *     WnfPublishUsbPartnerDualRoleFeatures @ 0x14005FBF0 (WnfPublishUsbPartnerDualRoleFeatures.c)
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1400607F0 (UsbDualRoleFeaturesQueryLocalMachine.c)
 *     _guard_dispatch_icall @ 0x140060F80 (_guard_dispatch_icall.c)
 *     memset @ 0x140061340 (memset.c)
 */

__int64 __fastcall UsbhSetupDevice(__int64 a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v6; // rbx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  int *v14; // r13
  __int64 result; // rax
  __int64 v16; // rax
  __int64 v17; // r14
  _DWORD *v18; // rax
  int (__fastcall *v19)(_QWORD, __int64, _DWORD *, int *, _QWORD); // r10
  __int64 v20; // rcx
  int v21; // r8d
  int BosDescriptor; // r14d
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  char AlternateUsbDescriptors; // r12
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rcx
  const EVENT_DESCRIPTOR *v30; // r9
  __int64 v31; // r8
  int v32; // ecx
  __int64 v33; // r9
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // r8
  char v37; // cl
  __int64 v38; // rcx
  char v39; // al
  __int128 v40; // xmm0
  int MSOS_Descriptor; // eax
  int v42; // r8d
  PDEVICE_OBJECT v43; // rcx
  __int64 v44; // rdx
  int v45; // r9d
  signed int v46; // r14d
  int v47; // r8d
  void *Pool2; // r14
  int QualifierDescriptorFromDevice; // eax
  int v50; // eax
  unsigned int v51; // r10d
  PVOID ValueData; // [rsp+20h] [rbp-69h]
  int *ValueLength; // [rsp+28h] [rbp-61h]
  int v54; // [rsp+50h] [rbp-39h] BYREF
  char v55[2]; // [rsp+58h] [rbp-31h] BYREF
  int v56; // [rsp+5Ah] [rbp-2Fh]
  __int16 v57; // [rsp+5Eh] [rbp-2Bh]
  int v58; // [rsp+60h] [rbp-29h] BYREF
  int v59; // [rsp+64h] [rbp-25h] BYREF
  _DWORD *v60; // [rsp+68h] [rbp-21h]
  __int128 v61; // [rsp+70h] [rbp-19h] BYREF
  __int128 v62; // [rsp+80h] [rbp-9h]
  __int128 v63; // [rsp+90h] [rbp+7h]
  __int64 v64; // [rsp+A0h] [rbp+17h]
  __int16 v65; // [rsp+100h] [rbp+77h] BYREF
  int v66; // [rsp+108h] [rbp+7Fh] BYREF

  v66 = 0;
  v54 = 0;
  LOBYTE(v65) = 0;
  v60 = FdoExt(a1);
  v6 = PdoExt(a2);
  Log(a1, 4, 1936028740, a2, *((unsigned __int16 *)v6 + 714));
  v7 = (void *)*((_QWORD *)v6 + 299);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *((_QWORD *)v6 + 299) = 0LL;
  }
  v8 = (void *)*((_QWORD *)v6 + 142);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *((_QWORD *)v6 + 142) = 0LL;
  }
  v9 = (void *)*((_QWORD *)v6 + 143);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *((_QWORD *)v6 + 143) = 0LL;
  }
  v10 = (void *)*((_QWORD *)v6 + 280);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *((_QWORD *)v6 + 280) = 0LL;
  }
  v11 = (void *)*((_QWORD *)v6 + 300);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    *((_QWORD *)v6 + 300) = 0LL;
  }
  v12 = (void *)*((_QWORD *)v6 + 355);
  *((_QWORD *)v6 + 301) = 0LL;
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    *((_QWORD *)v6 + 355) = 0LL;
  }
  UsbhFreeID((__int64)(v6 + 532));
  v6[355] &= ~0x200u;
  UsbhFreeID((__int64)(v6 + 544));
  UsbhFreeID((__int64)(v6 + 548));
  v13 = (void *)*((_QWORD *)v6 + 316);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0);
    *((_QWORD *)v6 + 316) = 0LL;
  }
  v14 = v6 + 706;
  memset(v6 + 706, 0, 0x40uLL);
  result = UsbhQueryPortState(a1, *((unsigned __int16 *)v6 + 714), (__int64)&v66, &v54);
  if ( a3 )
    *a3 = v54;
  if ( (result & 0xC0000000) == 0xC0000000 )
  {
    v6[705] = 1073807368;
    return result;
  }
  v16 = 1LL;
  if ( (v66 & 0x200) != 0 )
  {
    v6[292] = 0;
    v16 = 0LL;
  }
  else if ( (v66 & 0x400) != 0 )
  {
    v6[292] = 2;
    v16 = 2LL;
  }
  else
  {
    v6[292] = 1;
  }
  Log(a1, 4, 1936999473, a2, v16);
  v59 = 18;
  v58 = 0;
  v17 = *((_QWORD *)v6 + 145);
  v18 = FdoExt(a1);
  v19 = (int (__fastcall *)(_QWORD, __int64, _DWORD *, int *, _QWORD))*((_QWORD *)v18 + 534);
  if ( !v19 )
    goto LABEL_118;
  ValueLength = &v58;
  if ( v19(*((_QWORD *)v18 + 529), v17, v6 + 350, &v59, 0LL) < 0 )
    goto LABEL_118;
  UsbhGetInitRegUsbDeviceFlags(v20, a2);
  if ( !*((_BYTE *)v6 + 2895) )
    goto LABEL_32;
  if ( (int)UsbhSendMsOs20AltEnumCommand(a1, a2, v6 + 722) < 0 )
  {
LABEL_42:
    v6[705] = 1073807390;
    return 3221225485LL;
  }
  if ( (int)UsbhGetDeviceDescriptor(a1, a2) < 0 )
  {
LABEL_118:
    v6[705] = 1073807360;
    return 3221225485LL;
  }
  if ( !(unsigned __int8)UsbhValidateDeviceDescriptor(a1, (int)v6 + 1400, v21, 0, 0LL) )
  {
    v6[705] = 1073807365;
    return 3221225485LL;
  }
  UsbhBusIf_SetMsOs20Support(a1, *((_QWORD *)v6 + 145), v6 + 350, 0LL);
LABEL_32:
  result = UsbhGetDeviceInformation(a1, a2);
  BosDescriptor = result;
  if ( (result & 0xC0000000) == 0xC0000000 )
    return result;
  if ( *((_WORD *)v6 + 701) > 0x200u && (v6[358] & 0x20000) == 0 )
  {
    v23 = *((_QWORD *)v6 + 148);
    v66 = 0;
    BosDescriptor = UsbhGetBosDescriptor(v23, a2, &v66);
    if ( BosDescriptor < 0 )
      return (unsigned int)BosDescriptor;
    v24 = *((_QWORD *)v6 + 300);
    v64 = 0LL;
    v61 = 0LL;
    v62 = 0LL;
    v63 = 0LL;
    AlternateUsbDescriptors = UsbhValidateBOSDescriptorSet(a1, v24, (int)v6 + 1400, v66, (__int64)&v61);
    if ( AlternateUsbDescriptors == 1 )
      v6[701] |= 0x20u;
    v27 = *((_QWORD *)&v62 + 1);
    if ( *((_QWORD *)&v62 + 1) )
    {
      if ( *(_BYTE *)(*((_QWORD *)&v62 + 1) + 7LL) && (v6[355] & 0x40000000) == 0 )
      {
        v28 = **((_QWORD **)&v62 + 1);
        *v14 |= 4u;
        *((_QWORD *)v6 + 361) = v28;
        BosDescriptor = UsbhSendMsOs20AltEnumCommand(a1, a2, v27);
        if ( BosDescriptor < 0 )
          goto LABEL_42;
        AlternateUsbDescriptors = UsbhGetAlternateUsbDescriptors(a1, a2, &v61);
        if ( !AlternateUsbDescriptors )
          return 3221225485LL;
        RtlWriteRegistryValue(0, *((PCWSTR *)v6 + 143), L"MsOs20DescriptorSetInfo", 3u, v6 + 722, 8u);
        v27 = *((_QWORD *)&v62 + 1);
      }
      if ( v27 )
      {
        *v14 |= 1u;
        v6[358] &= 0xFFFFF9FF;
        if ( *(_WORD *)(v27 + 4) )
        {
          LOBYTE(v27) = *(_BYTE *)(v27 + 6);
          UsbhBusIf_SetMsOs20Support(a1, *((_QWORD *)v6 + 145), 0LL, v27);
          BosDescriptor = UsbhGetMsOs20DescriptorSet(a1, a2, *((_QWORD *)&v62 + 1));
          v29 = a1;
          if ( BosDescriptor < 0 )
          {
            v30 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_HUB_ENUM_MSOS20_DESC_FAILURE;
            LODWORD(ValueLength) = BosDescriptor;
            LODWORD(ValueData) = *((unsigned __int16 *)v6 + 714);
            v6[705] = 1073807388;
LABEL_49:
            UsbhEtwLogHubIrpEvent(v29, 0LL, 0LL, v30, ValueData, ValueLength);
            return (unsigned int)BosDescriptor;
          }
          AlternateUsbDescriptors = UsbhValidateMsOs20DescriptorSet(a1, a2, *((_QWORD *)&v62 + 1));
          if ( !AlternateUsbDescriptors )
          {
            LODWORD(ValueLength) = -1073741811;
            LODWORD(ValueData) = *((unsigned __int16 *)v6 + 714);
            v6[705] = 1073807389;
            UsbhEtwLogHubIrpEvent(
              a1,
              0LL,
              0LL,
              &USBHUB_ETW_EVENT_HUB_ENUM_MSOS20_DESC_VALIDATION_FAILURE,
              ValueData,
              ValueLength);
            return 3221225485LL;
          }
          v32 = *v14;
          if ( (*v14 & 0x200) != 0 )
            v6[355] |= 0x20u;
          if ( (v6[295] & 0x10) != 0 && (v6[355] & 4) == 0 && (v32 & 0x80u) != 0 )
          {
            LOBYTE(v31) = 1;
            v33 = *(unsigned __int8 *)(*((_QWORD *)v6 + 357) + 5LL);
            if ( (v60[640] & 1) == 0 )
              v33 = 20LL;
            UsbhBusIf_SetClearRootPortResumeTime(a1, *((_QWORD *)v6 + 145), v31, v33);
            v6[355] |= 0x20000000u;
          }
        }
      }
    }
    v34 = v63;
    if ( (_QWORD)v63 )
    {
      v6[358] |= 0x40000u;
      LOBYTE(v25) = 1;
      v35 = *((_QWORD *)v6 + 382);
      v6[762] = *(_DWORD *)(v34 + 22);
      v36 = *(unsigned int *)(v34 + 22);
      v66 = 0;
      WnfPublishUsbPartnerDualRoleFeatures(v35, v25, v36);
      UsbDualRoleFeaturesQueryLocalMachine(&v66);
      v55[0] = 64;
      v57 = 0;
      v37 = *(_BYTE *)(v63 + 21);
      v56 = v66;
      v55[1] = v37;
      v38 = *((_QWORD *)v6 + 148);
      LOWORD(v66) = 0;
      BosDescriptor = UsbhSyncSendCommandToDevice(v38, a2, v55, 0LL, &v66, (__int64)ValueLength, &v54);
      if ( BosDescriptor < 0 )
        Log(a1, 4, 1399075121, 0, 0LL);
    }
    if ( *((_QWORD *)&v63 + 1) )
    {
      result = UsbhGetBillboardInfo(*((_QWORD *)v6 + 148), a2);
      BosDescriptor = result;
      if ( (int)result < 0 )
        return result;
      *((_QWORD *)v6 + 301) = *((_QWORD *)&v63 + 1);
    }
    if ( *(_BYTE *)(*((_QWORD *)v6 + 299) + 4LL) > 1u && (_BYTE)v64 == 1 )
    {
      v39 = *((_BYTE *)v6 + 1404);
      if ( !v39 || v39 == -17 && *((_BYTE *)v6 + 1405) == 2 && *((_BYTE *)v6 + 1406) == 1 )
        v6[355] |= 0x20u;
    }
    if ( !*((_BYTE *)v6 + 2732) && AlternateUsbDescriptors == 1 && (_QWORD)v62 )
    {
      v40 = *(_OWORD *)(v62 + 4);
      *((_BYTE *)v6 + 2732) = 1;
      *(_OWORD *)(v6 + 679) = v40;
    }
    if ( *((_QWORD *)&v61 + 1) )
    {
      v6[355] |= 0x80000u;
      v6[701] |= 0x200u;
    }
  }
  if ( BosDescriptor < 0 )
    return (unsigned int)BosDescriptor;
  if ( (*(_BYTE *)v14 & 2) == 0 )
  {
    MSOS_Descriptor = UsbhGetMSOS_Descriptor(a1, a2);
    BosDescriptor = MSOS_Descriptor;
    if ( (MSOS_Descriptor & 0xC0000000) == 0xC0000000 && MSOS_Descriptor != -1073741637 )
    {
      v30 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_HUB_ENUM_MSOS_DESC_FAILURE;
LABEL_85:
      LODWORD(ValueLength) = BosDescriptor;
      LODWORD(ValueData) = *((unsigned __int16 *)v6 + 714);
      v29 = a1;
      goto LABEL_49;
    }
  }
  result = UsbhUpdateUxdSettings(a1, a2, 0LL, &v65);
  if ( (result & 0xC0000000) == 0xC0000000 )
    return result;
  BosDescriptor = UsbhGetSerialNumber(a1, a2, (__int64)(v6 + 532));
  v43 = (PDEVICE_OBJECT)(BosDescriptor & 0xC0000000);
  if ( (_DWORD)v43 == -1073741824 )
  {
    v30 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_HUB_ENUM_SERIAL_NUMBER_FAILURE;
    goto LABEL_85;
  }
  v44 = *((_QWORD *)v6 + 267);
  if ( v44 )
  {
    v6[355] |= 0x200u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v43 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          v44,
          v42,
          40,
          (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
          v44);
    }
  }
  if ( (v6[358] & 0x400) != 0 && (v6[355] & 0x20) == 0 )
    *((_QWORD *)v6 + 316) = UsbhGetMsOsExtendedConfigDesc(v43, a2);
  if ( (v6[295] & 0x10) == 0 )
    BosDescriptor = UsbhGetMsOsContainerID(a1, a2);
  if ( (BosDescriptor & 0xC0000000) == 0xC0000000 && BosDescriptor != -1073741637 )
    return (unsigned int)BosDescriptor;
  UsbhFreeID((__int64)(v6 + 524));
  UsbhFreeID((__int64)(v6 + 520));
  UsbhFreeID((__int64)(v6 + 528));
  v46 = UsbhBuildDeviceID(a1, a2, (__int64)(v6 + 520), v45);
  if ( v46 >= 0 )
  {
    v46 = UsbhBuildHardwareID(a1, a2, (__int64)(v6 + 524));
    if ( v46 >= 0 )
    {
      v46 = UsbhBuildCompatibleID(a1, a2, (__int64)(v6 + 528));
      if ( (v46 & 0xC0000000) != 0xC0000000 )
        goto LABEL_105;
      UsbhFreeID((__int64)(v6 + 524));
    }
    UsbhFreeID((__int64)(v6 + 520));
  }
LABEL_105:
  UsbhGetLanguageIdString(a1, a2, (__int64)(v6 + 544));
  if ( *((_BYTE *)v6 + 1415) && (v6[358] & 0x800) == 0 )
    UsbhGetProductIdString(*((_QWORD *)v6 + 148), a2, 0x409u, (__int64)(v6 + 540));
  if ( v46 >= 0 && v60[634] == 1 && v6[292] == 1 && *((_WORD *)v6 + 701) >= 0x200u )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, 10LL, 1112885333LL);
    if ( Pool2 )
    {
      v65 = 10;
      QualifierDescriptorFromDevice = UsbhGetQualifierDescriptorFromDevice(a1, a2, v47, (_DWORD)Pool2, (__int64)&v65);
      if ( QualifierDescriptorFromDevice >= 0 )
      {
        UsbhException(
          a1,
          *((unsigned __int16 *)v6 + 714),
          100LL,
          Pool2,
          0xAu,
          QualifierDescriptorFromDevice,
          0,
          usbfile_bus_c,
          4689,
          0);
        v6[355] |= 1u;
      }
      ExFreePoolWithTag(Pool2, 0);
    }
    v46 = 0;
  }
  v50 = Usbh__TestPoint__Ulong(a1, 6u, v46, *((unsigned __int16 *)v6 + 714));
  Log(a1, 4, 1936999486, a2, v50);
  return v51;
}
