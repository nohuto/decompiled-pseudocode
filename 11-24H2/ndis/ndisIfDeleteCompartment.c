/*
 * XREFs of ndisIfDeleteCompartment @ 0x1400CA980
 * Callers:
 *     ?ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z @ 0x1400CAF20 (-ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z.c)
 *     ?ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1400CB4B0 (-ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1400483A0 (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x14004DAB0 (-COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_dd @ 0x14005AD40 (WPP_RECORDER_SF_dd_ea_14005AD40.c)
 *     WPP_RECORDER_SF_Ll @ 0x1400CB85C (WPP_RECORDER_SF_Ll_ea_1400CB85C.c)
 *     WPP_RECORDER_SF_ld @ 0x1400CBBE8 (WPP_RECORDER_SF_ld_ea_1400CBBE8.c)
 *     WPP_RECORDER_SF_lq @ 0x1400CBCA4 (WPP_RECORDER_SF_lq_ea_1400CBCA4.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x140147E04 (-ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     NdisIfFreeNetLuidIndex @ 0x140164DF0 (NdisIfFreeNetLuidIndex.c)
 *     NdisIfDeregisterInterface @ 0x140166920 (NdisIfDeregisterInterface.c)
 */

__int64 __fastcall ndisIfDeleteCompartment(unsigned int a1)
{
  int v2; // edi
  int v3; // edx
  char v4; // bl
  char v5; // r14
  KIRQL v6; // r12
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  int v8; // edx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v9; // rsi
  int v10; // r9d
  int v11; // r9d
  int v12; // ecx
  _QWORD *v13; // rax
  _QWORD *v14; // r8
  int v15; // edx
  __int64 v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  int v19; // eax
  __int64 v20; // rax
  int v21; // r9d
  int v22; // edx
  int v23; // r8d
  int v24; // r9d
  KIRQL v25; // bl
  __int64 v26; // rcx
  NET_IFTYPE v27; // bx
  __int64 v28; // rdi
  NDIS_STATUS v29; // eax
  KIRQL v30; // bl
  __int64 v31; // r8
  struct _NDIS_IF_COMPARTMENT_BLOCK **v32; // rdx
  void **v33; // r14
  PVOID *v34; // rbx
  PVOID v35; // rcx
  void **v36; // rax
  KIRQL v37; // al
  int v39; // [rsp+20h] [rbp-E0h]
  struct _KEVENT Event; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v41[10]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v42[132]; // [rsp+B0h] [rbp-50h] BYREF

  v2 = 0;
  memset(v41, 0, 0x48uLL);
  memset(v42, 0, sizeof(v42));
  v4 = 0;
  v5 = 0;
  memset(&Event, 0, sizeof(Event));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      22,
      28,
      (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
      a1);
  }
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  CompartmentBlock = ndisIfFindCompartmentBlock(a1);
  v9 = CompartmentBlock;
  if ( !CompartmentBlock )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_7:
      v2 = -1073741072;
      goto LABEL_47;
    }
    v10 = 29;
LABEL_6:
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      22,
      v10,
      (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
      a1);
    goto LABEL_7;
  }
  if ( *((_DWORD *)CompartmentBlock + 4) == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_12:
      v2 = -1073741811;
      goto LABEL_47;
    }
    v11 = 30;
LABEL_11:
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      22,
      v11,
      (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
      a1);
    goto LABEL_12;
  }
  v12 = *((_DWORD *)CompartmentBlock + 10);
  if ( (v12 & 8) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_7;
    v10 = 31;
    goto LABEL_6;
  }
  if ( (v12 & 0x11) == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_12;
    v11 = 32;
    goto LABEL_11;
  }
  if ( (v12 & 2) == 0 )
  {
    v4 = 1;
    *((_DWORD *)CompartmentBlock + 10) = v12 | 2;
  }
  if ( *((int *)CompartmentBlock + 12) > 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        0x16u,
        0x21u,
        (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
        a1);
    v2 = -1073740024;
LABEL_45:
    if ( !v4 )
      goto LABEL_47;
    goto LABEL_46;
  }
  v13 = (_QWORD *)*((_QWORD *)CompartmentBlock + 3);
  if ( v13 != (_QWORD *)((char *)v9 + 24) )
  {
    v14 = (_QWORD *)*((_QWORD *)v9 + 7);
    while ( 1 )
    {
      v15 = (_DWORD)v13 - 16;
      if ( v13 - 2 != v14 )
        break;
      v13 = (_QWORD *)*v13;
      if ( v13 == (_QWORD *)((char *)v9 + 24) )
        goto LABEL_29;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_43;
    v21 = 34;
    goto LABEL_42;
  }
LABEL_29:
  v16 = *((_QWORD *)v9 + 7);
  if ( v16 )
  {
    v17 = (_QWORD *)(v16 + 56);
    v18 = *(_QWORD **)(v16 + 56);
    if ( v18 != v17 )
    {
      v14 = (_QWORD *)*((_QWORD *)v9 + 213);
      while ( 1 )
      {
        v15 = (_DWORD)v18 - 1264;
        if ( v18 - 158 != v14 )
          break;
        v18 = (_QWORD *)*v18;
        if ( v18 == v17 )
          goto LABEL_34;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_43;
      v21 = 35;
LABEL_42:
      WPP_RECORDER_SF_lq(*((_QWORD *)WPP_GLOBAL_Control + 8), v15, (_DWORD)v14, v21, v39, a1, v15);
LABEL_43:
      v2 = -1073741811;
      goto LABEL_45;
    }
  }
LABEL_34:
  v19 = *((_DWORD *)v9 + 10);
  if ( (v19 & 0x10) != 0 )
  {
    *((_DWORD *)v9 + 10) = v19 & 0xFFFFFFEF;
    goto LABEL_45;
  }
  *((_DWORD *)v9 + 10) = v19 | 1;
  v20 = *((_QWORD *)v9 + 7);
  if ( v20 )
    *(_DWORD *)(v20 + 72) |= 2u;
  v4 = 1;
LABEL_46:
  _InterlockedIncrement((volatile signed __int32 *)v9 + 11);
  v5 = 1;
LABEL_47:
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v6);
  if ( v4 )
    ndisNsiNotifyClientCompartmentChange(v9, 2LL);
  if ( v5 )
  {
    v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
    COMPARTMENTBLOCK_DECREMENT_REF(v9);
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v25);
  }
  if ( v2 < 0 )
    goto LABEL_70;
  v26 = *((_QWORD *)v9 + 213);
  if ( v26 )
  {
    v27 = *(_WORD *)(v26 + 524);
    v28 = (*(_QWORD *)(v26 + 1312) >> 24) & 0xFFFFFFLL;
    NdisIfDeregisterInterface(*(_DWORD *)(v26 + 4));
    v29 = NdisIfFreeNetLuidIndex(v27, v28);
    *((_QWORD *)v9 + 213) = 0LL;
    v2 = v29;
  }
  if ( *((_QWORD *)v9 + 7) )
  {
    HIDWORD(v41[1]) = 0;
    v41[2] = &NPI_MS_NDIS_MODULEID;
    v41[5] = (char *)v9 + 80;
    v41[8] = 528LL;
    v41[7] = v42;
    v41[3] = 6LL;
    v41[4] = 0x300000002LL;
    v41[6] = 16LL;
    v42[0] = 34603436;
    v2 = NsiSetAllParametersEx(v41);
    if ( v2 >= 0 )
    {
      *((_QWORD *)v9 + 7) = 0LL;
      goto LABEL_58;
    }
LABEL_67:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ld(*((_QWORD *)WPP_GLOBAL_Control + 8), v22, v23, v24, v39, a1, v2);
    v37 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
    *((_DWORD *)v9 + 10) |= 0x10u;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v37);
    goto LABEL_70;
  }
  if ( v2 < 0 )
    goto LABEL_67;
LABEL_58:
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  *((_QWORD *)v9 + 214) = &Event;
  v31 = *(_QWORD *)v9;
  if ( *(struct _NDIS_IF_COMPARTMENT_BLOCK **)(*(_QWORD *)v9 + 8LL) != v9
    || (v32 = (struct _NDIS_IF_COMPARTMENT_BLOCK **)*((_QWORD *)v9 + 1), *v32 != v9) )
  {
LABEL_66:
    __fastfail(3u);
  }
  *v32 = (struct _NDIS_IF_COMPARTMENT_BLOCK *)v31;
  *(_QWORD *)(v31 + 8) = v32;
  _InterlockedDecrement(&dword_14011D514);
  COMPARTMENTBLOCK_DECREMENT_REF(v9);
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v30);
  ndisWaitForKernelObject(&Event);
  *((_QWORD *)v9 + 214) = 0LL;
  v33 = (void **)((char *)v9 + 1728);
  while ( 1 )
  {
    v34 = (PVOID *)*v33;
    if ( *v33 == v33 )
      break;
    ObfDereferenceObject(v34[2]);
    v35 = *v34;
    if ( *((PVOID **)*v34 + 1) != v34 )
      goto LABEL_66;
    v36 = (void **)v34[1];
    if ( *v36 != v34 )
      goto LABEL_66;
    *v36 = v35;
    *((_QWORD *)v35 + 1) = v36;
    --*((_DWORD *)v9 + 430);
    ExFreePoolWithTag(v34, 0);
  }
  ExFreePoolWithTag(v9, 0);
LABEL_70:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Ll(*((_QWORD *)WPP_GLOBAL_Control + 8), v22, v23, v24, v39, v2, a1);
  return (unsigned int)v2;
}
