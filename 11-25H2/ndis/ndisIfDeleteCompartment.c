/*
 * XREFs of ndisIfDeleteCompartment @ 0x1400D1CEC
 * Callers:
 *     ?ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z @ 0x1400D2368 (-ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z.c)
 *     ?ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1400D2970 (-ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x140062240 (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x140069280 (-COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_dd @ 0x1400758B0 (WPP_RECORDER_SF_dd_ea_1400758B0.c)
 *     ndisNsiScheduleCompartmentBlockChangeNotification @ 0x1400D2904 (ndisNsiScheduleCompartmentBlockChangeNotification.c)
 *     Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline @ 0x1400D2B9C (Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_TCPIP_RevertContainerAsyncNotification__private_IsEnabledDeviceUsageNoInline @ 0x1400D2BF0 (Feature_TCPIP_RevertContainerAsyncNotification__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_SF_Ll @ 0x1400D2E48 (WPP_RECORDER_SF_Ll_ea_1400D2E48.c)
 *     WPP_RECORDER_SF_ld @ 0x1400D31D4 (WPP_RECORDER_SF_ld_ea_1400D31D4.c)
 *     WPP_RECORDER_SF_lq @ 0x1400D3290 (WPP_RECORDER_SF_lq_ea_1400D3290.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x140152AD4 (-ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140160790 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     NdisIfFreeNetLuidIndex @ 0x1401713B0 (NdisIfFreeNetLuidIndex.c)
 *     NdisIfDeregisterInterface @ 0x140173220 (NdisIfDeregisterInterface.c)
 */

__int64 __fastcall ndisIfDeleteCompartment(unsigned int a1)
{
  int v2; // ebx
  char v3; // r14
  KIRQL v4; // r12
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v8; // rsi
  unsigned __int16 v9; // r9
  unsigned __int16 v10; // r9
  __int64 v11; // rcx
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  char v15; // di
  __int64 v16; // rcx
  _QWORD **v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rdx
  int v20; // eax
  __int64 v21; // rax
  int v22; // edx
  int v23; // r8d
  int v24; // r9d
  int v25; // edx
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rdx
  __int64 v29; // rcx
  NET_IFTYPE v30; // bx
  __int64 v31; // rdi
  NDIS_STATUS v32; // eax
  KIRQL v33; // di
  __int64 v34; // r8
  struct _NDIS_IF_COMPARTMENT_BLOCK **v35; // rdx
  void **v36; // r14
  PVOID *v37; // rdi
  PVOID v38; // rcx
  void **v39; // rax
  int v40; // edx
  int v41; // r8d
  int v42; // r9d
  KIRQL v43; // al
  int v45; // [rsp+20h] [rbp-E0h]
  struct _KEVENT Event; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v47[10]; // [rsp+60h] [rbp-A0h] BYREF
  struct _KEVENT v48; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v49[132]; // [rsp+D0h] [rbp-30h] BYREF

  v2 = 0;
  memset(v47, 0, 0x48uLL);
  memset(v49, 0, sizeof(v49));
  v3 = 0;
  memset(&v48, 0, sizeof(v48));
  memset(&Event, 0, sizeof(Event));
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x20u,
      (struct _GUID *)&WPP_a2f9ce1be4323b4178fc783abbe12af0_Traceguids);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  CompartmentBlock = ndisIfFindCompartmentBlock(a1);
  v8 = CompartmentBlock;
  if ( !CompartmentBlock )
  {
    if ( !(unsigned int)Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline(v7, v6)
      || *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    {
      goto LABEL_8;
    }
    v9 = 33;
LABEL_7:
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0x16u,
      v9,
      (struct _GUID *)&WPP_a2f9ce1be4323b4178fc783abbe12af0_Traceguids,
      a1);
LABEL_8:
    v2 = -1073741072;
    goto LABEL_55;
  }
  if ( *((_DWORD *)CompartmentBlock + 4) == 1 )
  {
    if ( !(unsigned int)Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline(v7, v6)
      || *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    {
      goto LABEL_51;
    }
    v10 = 34;
    goto LABEL_13;
  }
  v11 = *((unsigned int *)CompartmentBlock + 10);
  if ( (v11 & 8) != 0 )
  {
    if ( !(unsigned int)Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline(v11, v6)
      || *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    {
      goto LABEL_8;
    }
    v9 = 35;
    goto LABEL_7;
  }
  if ( (v11 & 0x11) == 1 )
  {
    if ( !(unsigned int)Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline(v11, v6)
      || *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    {
      goto LABEL_51;
    }
    v10 = 36;
LABEL_13:
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0x16u,
      v10,
      (struct _GUID *)&WPP_a2f9ce1be4323b4178fc783abbe12af0_Traceguids,
      a1);
LABEL_51:
    v2 = -1073741811;
    goto LABEL_55;
  }
  if ( (v11 & 2) == 0 )
  {
    *((_DWORD *)CompartmentBlock + 10) = v11 | 2;
    if ( (unsigned int)Feature_TCPIP_RevertContainerAsyncNotification__private_IsEnabledDeviceUsageNoInline() )
      v3 = 1;
    else
      ndisNsiScheduleCompartmentBlockChangeNotification(v8);
  }
  if ( *((int *)v8 + 12) > 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        0x16u,
        0x25u,
        (struct _GUID *)&WPP_a2f9ce1be4323b4178fc783abbe12af0_Traceguids,
        a1);
    v2 = -1073740024;
    goto LABEL_55;
  }
  v12 = (_QWORD *)((char *)v8 + 24);
  v13 = (_QWORD *)*((_QWORD *)v8 + 3);
  if ( v13 != (_QWORD *)((char *)v8 + 24) )
  {
    v14 = (_QWORD *)*((_QWORD *)v8 + 7);
    while ( 1 )
    {
      v15 = (_BYTE)v13 - 16;
      if ( v13 - 2 != v14 )
        break;
      v13 = (_QWORD *)*v13;
      if ( v13 == v12 )
        goto LABEL_34;
    }
    if ( !(unsigned int)Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline(v12, v14)
      || *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    {
      goto LABEL_51;
    }
    v24 = 38;
LABEL_50:
    WPP_RECORDER_SF_lq(*((_QWORD *)WPP_GLOBAL_Control + 8), v22, v23, v24, v45, a1, v15);
    goto LABEL_51;
  }
LABEL_34:
  v16 = *((_QWORD *)v8 + 7);
  if ( v16 )
  {
    v17 = (_QWORD **)(v16 + 56);
    v18 = *v17;
    if ( *v17 != v17 )
    {
      v19 = (_QWORD *)*((_QWORD *)v8 + 213);
      while ( 1 )
      {
        v15 = (_BYTE)v18 + 16;
        if ( v18 - 158 != v19 )
          break;
        v18 = (_QWORD *)*v18;
        if ( v18 == v17 )
          goto LABEL_39;
      }
      if ( !(unsigned int)Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline(
                            v17,
                            v19)
        || *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      {
        goto LABEL_51;
      }
      v24 = 39;
      goto LABEL_50;
    }
  }
LABEL_39:
  v20 = *((_DWORD *)v8 + 10);
  if ( (v20 & 0x10) != 0 )
  {
    *((_DWORD *)v8 + 10) = v20 & 0xFFFFFFEF;
    if ( !(unsigned int)Feature_TCPIP_RevertContainerAsyncNotification__private_IsEnabledDeviceUsageNoInline() )
      KeInitializeEvent(&Event, NotificationEvent, 1u);
  }
  else
  {
    *((_DWORD *)v8 + 10) = v20 | 1;
    v21 = *((_QWORD *)v8 + 7);
    if ( v21 )
      *(_DWORD *)(v21 + 72) |= 2u;
    if ( (unsigned int)Feature_TCPIP_RevertContainerAsyncNotification__private_IsEnabledDeviceUsageNoInline() )
    {
      v3 = 1;
    }
    else
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      *((_QWORD *)v8 + 220) = &Event;
      ndisNsiScheduleCompartmentBlockChangeNotification(v8);
    }
  }
LABEL_55:
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v4);
  if ( (unsigned int)Feature_TCPIP_RevertContainerAsyncNotification__private_IsEnabledDeviceUsageNoInline() && v3 )
    ndisNsiNotifyClientCompartmentChange(v8, 2LL);
  if ( v2 < 0 )
    goto LABEL_80;
  if ( !(unsigned int)Feature_TCPIP_RevertContainerAsyncNotification__private_IsEnabledDeviceUsageNoInline() )
    ndisWaitForKernelObject(&Event);
  v29 = *((_QWORD *)v8 + 213);
  if ( v29 )
  {
    v30 = *(_WORD *)(v29 + 524);
    v31 = (*(_QWORD *)(v29 + 1312) >> 24) & 0xFFFFFFLL;
    NdisIfDeregisterInterface(*(_DWORD *)(v29 + 4));
    v32 = NdisIfFreeNetLuidIndex(v30, v31);
    *((_QWORD *)v8 + 213) = 0LL;
    v2 = v32;
  }
  if ( *((_QWORD *)v8 + 7) )
  {
    v47[0] = 0LL;
    v47[1] = 0LL;
    v47[2] = &NPI_MS_NDIS_MODULEID;
    v47[5] = (char *)v8 + 80;
    v47[3] = 6LL;
    v47[4] = 0x300000002LL;
    v47[6] = 16LL;
    memset(&v49[1], 0, 0x20CuLL);
    v49[0] = 34603436;
    v47[8] = 528LL;
    v47[7] = v49;
    v2 = NsiSetAllParametersEx(v47);
    if ( v2 >= 0 )
    {
      *((_QWORD *)v8 + 7) = 0LL;
      goto LABEL_67;
    }
LABEL_76:
    if ( (unsigned int)Feature_TCPIP_2025_Wave3_CompartmentDiagnostics__private_IsEnabledDeviceUsageNoInline(v29, v28)
      && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_ld(*((_QWORD *)WPP_GLOBAL_Control + 8), v40, v41, v42, v45, a1, v2);
    }
    v43 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
    *((_DWORD *)v8 + 10) |= 0x10u;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v43);
    goto LABEL_80;
  }
  if ( v2 < 0 )
    goto LABEL_76;
LABEL_67:
  KeInitializeEvent(&v48, NotificationEvent, 0);
  v33 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  *((_QWORD *)v8 + 214) = &v48;
  v34 = *(_QWORD *)v8;
  if ( *(struct _NDIS_IF_COMPARTMENT_BLOCK **)(*(_QWORD *)v8 + 8LL) != v8
    || (v35 = (struct _NDIS_IF_COMPARTMENT_BLOCK **)*((_QWORD *)v8 + 1), *v35 != v8) )
  {
LABEL_75:
    __fastfail(3u);
  }
  *v35 = (struct _NDIS_IF_COMPARTMENT_BLOCK *)v34;
  *(_QWORD *)(v34 + 8) = v35;
  _InterlockedDecrement(&dword_1401275C4);
  COMPARTMENTBLOCK_DECREMENT_REF(v8);
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v33);
  ndisWaitForKernelObject(&v48);
  *((_QWORD *)v8 + 214) = 0LL;
  v36 = (void **)((char *)v8 + 1728);
  while ( 1 )
  {
    v37 = (PVOID *)*v36;
    if ( *v36 == v36 )
      break;
    ObfDereferenceObject(v37[2]);
    v38 = *v37;
    if ( *((PVOID **)*v37 + 1) != v37 )
      goto LABEL_75;
    v39 = (void **)v37[1];
    if ( *v39 != v37 )
      goto LABEL_75;
    *v39 = v38;
    *((_QWORD *)v38 + 1) = v39;
    --*((_DWORD *)v8 + 430);
    ExFreePoolWithTag(v37, 0);
  }
  ExFreePoolWithTag(v8, 0);
LABEL_80:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Ll(*((_QWORD *)WPP_GLOBAL_Control + 8), v25, v26, v27, v45, v2, a1);
  return (unsigned int)v2;
}
