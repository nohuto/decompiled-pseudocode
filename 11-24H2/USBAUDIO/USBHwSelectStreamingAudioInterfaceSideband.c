/*
 * XREFs of USBHwSelectStreamingAudioInterfaceSideband @ 0x140035B24
 * Callers:
 *     USBHwSelectStreamingAudioInterface @ 0x14003BBEC (USBHwSelectStreamingAudioInterface.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140005138 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005BFC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B318 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     USBD_CloseHandle @ 0x140019250 (USBD_CloseHandle.c)
 *     USBD_CreateHandle @ 0x1400192D0 (USBD_CreateHandle.c)
 *     USBD_GetEndpointOffloadInformationForIndex @ 0x1400196DC (USBD_GetEndpointOffloadInformationForIndex.c)
 *     USBD_SelectInterfaceWithEndpointOffloadUrbAllocateAndBuild @ 0x140019914 (USBD_SelectInterfaceWithEndpointOffloadUrbAllocateAndBuild.c)
 *     USBD_UrbFree @ 0x140019B50 (USBD_UrbFree.c)
 *     memmove @ 0x14001BC00 (memmove.c)
 *     USBHwSubmitUrbToUsbdSynch @ 0x14003C0BC (USBHwSubmitUrbToUsbdSynch.c)
 *     USBHwFreePipes @ 0x14003C254 (USBHwFreePipes.c)
 *     USBHwFreeOffloadInformation @ 0x1400415FC (USBHwFreeOffloadInformation.c)
 */

__int64 __fastcall USBHwSelectStreamingAudioInterfaceSideband(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  unsigned int v4; // r15d
  __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // rdi
  _QWORD *Pool2; // rax
  PDEVICE_OBJECT *v11; // rdx
  ULONG *v12; // r8
  char v13; // di
  int v14; // ebx
  __int64 v15; // r12
  int v16; // edx
  int v17; // r8d
  PDEVICE_OBJECT v18; // rcx
  unsigned int *EndpointOffloadInformationForIndex; // rax
  __int16 v20; // r9
  unsigned int *v21; // rax
  __int16 v22; // r9
  PURB v23; // r14
  int v24; // eax
  unsigned int *v25; // rax
  int v26; // edx
  int v27; // r8d
  unsigned int *v28; // r15
  PDEVICE_OBJECT v29; // rcx
  void *v30; // rax
  int v31; // edx
  int v32; // r8d
  PDEVICE_OBJECT v33; // rcx
  unsigned int *v34; // rax
  unsigned int *v35; // rsi
  void *v36; // rax
  unsigned int v37; // edx
  __int64 v38; // rax
  int v39; // ecx
  PVOID v40; // rax
  int v41; // edx
  int v42; // r8d
  int v43; // edx
  PURB Urb; // [rsp+A8h] [rbp+50h] BYREF
  USBD_HANDLE USBDHandle; // [rsp+B0h] [rbp+58h] BYREF
  PVOID P; // [rsp+B8h] [rbp+60h]

  Urb = 0LL;
  v3 = *(_QWORD **)(a1 + 16);
  v4 = *(unsigned __int8 *)(a2 + 4);
  USBDHandle = 0LL;
  v5 = v3[2];
  v6 = v3[18];
  v7 = v3[19];
  v8 = *(_QWORD *)(v5 + 16);
  v9 = *(_QWORD *)(v8 + 72);
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 16LL, 1633843269LL);
  P = Pool2;
  v11 = &WPP_GLOBAL_Control;
  v12 = &WPP_RECORDER_INITIALIZED;
  if ( !Pool2 )
  {
    v13 = 1;
    LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v11,
        (_DWORD)v12,
        WPP_GLOBAL_Control->DeviceExtension);
    }
    v14 = -1073741670;
    goto LABEL_11;
  }
  Pool2[1] = 0LL;
  *Pool2 = a2;
  v14 = USBD_CreateHandle(
          *(PDEVICE_OBJECT *)(v5 + 24),
          *(PDEVICE_OBJECT *)(v5 + 40),
          (ULONG)&WPP_RECORDER_INITIALIZED,
          0x39627845u,
          &USBDHandle);
  if ( v14 < 0 )
  {
    v18 = WPP_GLOBAL_Control;
    v13 = 1;
    LOBYTE(v16) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v17) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v16 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    {
LABEL_20:
      v15 = a1;
      goto LABEL_92;
    }
LABEL_21:
    WPP_RECORDER_AND_TRACE_SF_d(v18->AttachedDevice, v16, v17, v18->DeviceExtension);
    v15 = a1;
    goto LABEL_92;
  }
  v14 = USBD_SelectInterfaceWithEndpointOffloadUrbAllocateAndBuild(
          USBDHandle,
          *(_QWORD *)(v9 + 24),
          (__int64)P,
          v4,
          &Urb);
  if ( v14 < 0 )
  {
    v18 = WPP_GLOBAL_Control;
    v13 = 1;
    LOBYTE(v16) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v17) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v16 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    goto LABEL_21;
  }
  EndpointOffloadInformationForIndex = USBD_GetEndpointOffloadInformationForIndex((__int64)Urb, 0);
  *((_WORD *)EndpointOffloadInformationForIndex + 2) = v20;
  if ( *(_DWORD *)(v8 + 868) == 2 )
    *(unsigned int *)((char *)USBD_GetEndpointOffloadInformationForIndex((__int64)Urb, 0) + 6) = *(_DWORD *)(v6 + 224);
  v13 = 1;
  if ( v4 > 1 )
  {
    if ( *(_QWORD *)(v6 + 176) )
    {
      v21 = USBD_GetEndpointOffloadInformationForIndex((__int64)Urb, 1u);
      *((_WORD *)v21 + 2) = v22;
      if ( *(_DWORD *)(v8 + 868) == 2 )
        *(unsigned int *)((char *)USBD_GetEndpointOffloadInformationForIndex((__int64)Urb, 1u) + 6) = *(_DWORD *)(v6 + 228);
    }
  }
  v23 = Urb;
  v24 = *(_DWORD *)(v6 + 216) & 0xF000;
  if ( v24 )
  {
    if ( v24 == 4096 )
    {
      LODWORD(Urb->UrbOSFeatureDescriptorRequest.hca.Reserved8[3]) = 3872;
      goto LABEL_42;
    }
    if ( v24 != 0x2000 )
      goto LABEL_42;
  }
  LODWORD(Urb->UrbOSFeatureDescriptorRequest.hca.Reserved8[3]) = 500 * *(_DWORD *)(v6 + 220);
  if ( !*(_QWORD *)(v6 + 176) )
    HIDWORD(v23->UrbOSFeatureDescriptorRequest.hca.Reserved8[3]) |= 8u;
LABEL_42:
  v14 = USBHwSubmitUrbToUsbdSynch(*(PDEVICE_OBJECT *)(v5 + 40), Urb, USBDHandle);
  if ( Urb->UrbHeader.Status < 0 )
  {
    v14 = -1073741808;
LABEL_11:
    v15 = a1;
    goto LABEL_92;
  }
  v15 = a1;
  if ( v14 < 0 )
    goto LABEL_92;
  USBHwFreeOffloadInformation(a1);
  v25 = USBD_GetEndpointOffloadInformationForIndex((__int64)Urb, 0);
  v28 = v25;
  if ( !v25 )
  {
    v29 = WPP_GLOBAL_Control;
    LOBYTE(v26) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v27) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v26 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_55;
    goto LABEL_54;
  }
  v30 = (void *)ExAllocatePool2(64LL, *v25, 1650620485LL);
  *(_QWORD *)(v7 + 96) = v30;
  if ( !v30 )
  {
    v33 = WPP_GLOBAL_Control;
    LOBYTE(v31) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v32) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v31 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_65;
    goto LABEL_64;
  }
  memmove(v30, v28, *v28);
  if ( *(_QWORD *)(v6 + 176) )
  {
    v34 = USBD_GetEndpointOffloadInformationForIndex((__int64)Urb, 1u);
    v35 = v34;
    if ( !v34 )
    {
      v29 = WPP_GLOBAL_Control;
      LOBYTE(v26) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      LOBYTE(v27) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v26 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_55;
LABEL_54:
      WPP_RECORDER_AND_TRACE_SF_(v29->AttachedDevice, v26, v27, v29->DeviceExtension);
LABEL_55:
      v14 = -1073741437;
      goto LABEL_92;
    }
    v36 = (void *)ExAllocatePool2(64LL, *v34, 1667397701LL);
    *(_QWORD *)(v7 + 104) = v36;
    if ( !v36 )
    {
      v33 = WPP_GLOBAL_Control;
      LOBYTE(v31) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      LOBYTE(v32) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v31 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_65;
LABEL_64:
      WPP_RECORDER_AND_TRACE_SF_(v33->AttachedDevice, v31, v32, v33->DeviceExtension);
LABEL_65:
      v14 = -1073741670;
      goto LABEL_92;
    }
    memmove(v36, v35, *v35);
  }
  v37 = (unsigned int)v23->UrbOSFeatureDescriptorRequest.hca.Reserved8[0];
  *(_DWORD *)(v7 + 56) = v37;
  *(_QWORD *)(v7 + 64) = v23->UrbControlTransfer.hca.Reserved8[2];
  if ( v37 > 0x14 )
  {
    v14 = -1073741438;
  }
  else
  {
    USBHwFreePipes(a1);
    v38 = ExAllocatePool2(64LL, 24LL * *(unsigned int *)(v7 + 56), 1096972357LL);
    v39 = v14;
    *(_QWORD *)(v7 + 72) = v38;
    if ( !v38 )
      v39 = -1073741670;
    v14 = v39;
    if ( v39 >= 0 )
    {
      memmove(
        *(void **)(v7 + 72),
        &v23->UrbOSFeatureDescriptorRequest.hca.Reserved8[1],
        24LL * *(unsigned int *)(v7 + 56));
      v40 = P;
LABEL_101:
      ExFreePool(v40);
      goto LABEL_102;
    }
  }
LABEL_92:
  USBHwFreeOffloadInformation(v15);
  LOBYTE(v41) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  if ( (_BYTE)v41 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v42) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qd(WPP_GLOBAL_Control->AttachedDevice, v41, v42, WPP_GLOBAL_Control->DeviceExtension);
  }
  v40 = P;
  if ( P )
    goto LABEL_101;
LABEL_102:
  v43 = (int)Urb;
  if ( Urb )
    USBD_UrbFree(USBDHandle, Urb);
  if ( USBDHandle )
    USBD_CloseHandle(USBDHandle);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v13 = 0;
  }
  if ( v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v43) = v13;
    LOBYTE(v42) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qd(WPP_GLOBAL_Control->AttachedDevice, v43, v42, WPP_GLOBAL_Control->DeviceExtension);
  }
  return (unsigned int)v14;
}
