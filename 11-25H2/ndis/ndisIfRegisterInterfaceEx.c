/*
 * XREFs of ndisIfRegisterInterfaceEx @ 0x1400953D0
 * Callers:
 *     NdisIfRegisterInterface @ 0x1400CFF40 (NdisIfRegisterInterface.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x14016E8A0 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x14000E820 (NdisReferenceWithTag.c)
 *     NdisFreeRefCount @ 0x140015A20 (NdisFreeRefCount.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x14004C210 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_Dd @ 0x14004FB20 (WPP_RECORDER_SF_Dd.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x140062240 (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     NdisAllocateRefCount @ 0x14006E5D0 (NdisAllocateRefCount.c)
 *     WPP_RECORDER_SF_qllq @ 0x140086610 (WPP_RECORDER_SF_qllq_ea_140086610.c)
 *     WPP_RECORDER_SF_Llq @ 0x1400870D0 (WPP_RECORDER_SF_Llq.c)
 *     ?ndisIfFreeIfIndex@@YAXK@Z @ 0x140088840 (-ndisIfFreeIfIndex@@YAXK@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x140096020 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?Grow@IfIndexRange@@AEAAJK@Z @ 0x1400D6038 (-Grow@IfIndexRange@@AEAAJK@Z.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x14016C740 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x14016F360 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 */

__int64 __fastcall ndisIfRegisterInterfaceEx(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        unsigned int *a7)
{
  __int64 v7; // rbp
  unsigned __int64 v8; // r14
  __int64 Pool2; // rax
  __int64 v14; // rdi
  unsigned int v15; // ebx
  int v16; // eax
  unsigned __int16 v17; // cx
  unsigned __int16 v18; // ax
  bool v19; // zf
  __int128 v20; // xmm0
  __int128 v21; // xmm0
  size_t v22; // rax
  size_t v23; // rbp
  __int64 v24; // rax
  __int128 *v25; // rax
  __int64 v26; // rdx
  __int128 *v27; // rcx
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  KIRQL v36; // r12
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  __int64 v38; // r14
  unsigned int v39; // eax
  unsigned __int16 v40; // ax
  unsigned __int16 v41; // ax
  SIZE_T v42; // rax
  KIRQL v43; // al
  _BYTE *v44; // r8
  KIRQL v45; // si
  _DEVICE_OBJECT *Blink; // rsi
  unsigned int v47; // r13d
  unsigned int v48; // eax
  int *v49; // rbp
  int v50; // ebx
  unsigned int v51; // r15d
  __int64 ClearBitsAndSet; // rax
  int v53; // edx
  ULONG64 SizeOfBitMap; // rbp
  int v55; // eax
  _QWORD *v56; // rcx
  _DRIVER_OBJECT *DriverObject; // rax
  __int64 v58; // rdx
  _QWORD *v59; // rax
  _QWORD *v60; // rcx
  __int64 v61; // rdx
  _QWORD *v62; // rcx
  __int64 v63; // rdx
  _QWORD *v64; // rax
  __int64 v65; // rax
  KIRQL v66; // bl
  unsigned int v67; // ecx
  int v69; // [rsp+20h] [rbp-68h]
  unsigned int v71; // [rsp+98h] [rbp+10h] BYREF
  __int64 v72; // [rsp+A8h] [rbp+20h]

  v7 = (a2 >> 24) & 0xFFFFFF;
  v8 = HIWORD(a2);
  v71 = (a2 >> 24) & 0xFFFFFF;
  v72 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qllq(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, a4, v69);
  if ( !a4 )
    goto LABEL_88;
  if ( *(_BYTE *)(a4 + 1) != 1 )
  {
    v15 = -1073741637;
    goto LABEL_89;
  }
  if ( *(_WORD *)(a4 + 2) < 0x60u )
  {
LABEL_88:
    v15 = -1073741811;
    goto LABEL_89;
  }
  Pool2 = ExAllocatePool2(64LL, 1496LL, 1718174798);
  v14 = Pool2;
  if ( !Pool2 )
  {
    v15 = -1073741670;
    goto LABEL_89;
  }
  *(_QWORD *)Pool2 = 98042131LL;
  *(_DWORD *)(Pool2 + 1304) = 1;
  *(_QWORD *)(Pool2 + 1432) = NdisAllocateRefCount(0x12u, 2);
  if ( (unsigned int)(v7 - 32512) > 0x4100 && (unsigned int)ndisIfAllocateAndVerifyNetLuidIndex(v8, &v71, 0, 0) )
  {
    v15 = -1073741811;
    goto LABEL_42;
  }
  v16 = *(_DWORD *)(a4 + 4);
  v17 = *(_WORD *)(a4 + 48);
  *(_DWORD *)(v14 + 1336) = v16;
  *(_DWORD *)(v14 + 560) = v16;
  *(_DWORD *)(v14 + 1340) = *(_DWORD *)(a4 + 20);
  *(_DWORD *)(v14 + 1344) = *(_DWORD *)(a4 + 24);
  *(_DWORD *)(v14 + 1416) = *(_DWORD *)(a4 + 84);
  *(_DWORD *)(v14 + 1400) = a5;
  v18 = 512;
  *(_QWORD *)(v14 + 1312) = a2;
  if ( v17 > 0x200u )
  {
    *(_WORD *)(v14 + 8) = 512;
LABEL_14:
    memmove((void *)(v14 + 10), (const void *)(a4 + *(unsigned __int16 *)(a4 + 50)), v18);
    goto LABEL_15;
  }
  *(_WORD *)(v14 + 8) = v17;
  v18 = v17;
  if ( v17 )
    goto LABEL_14;
LABEL_15:
  v19 = a1 == qword_1401275E0;
  v20 = *(_OWORD *)(a4 + 52);
  *(_DWORD *)(v14 + 528) = *(_DWORD *)(a4 + 28);
  *(_DWORD *)(v14 + 532) = *(_DWORD *)(a4 + 32);
  *(_DWORD *)(v14 + 536) = *(_DWORD *)(a4 + 36);
  *(_BYTE *)(v14 + 556) = *(_BYTE *)(a4 + 40);
  *(_DWORD *)(v14 + 564) = *(_DWORD *)(a4 + 88);
  *(_DWORD *)(v14 + 568) = *(_DWORD *)(a4 + 92);
  *(_WORD *)(v14 + 524) = v8;
  *(_OWORD *)(v14 + 540) = v20;
  if ( v19 || a1 == qword_1401275D8 )
  {
    v25 = (__int128 *)(v14 + 576);
    v26 = 5LL;
    v27 = (__int128 *)(a4 + 96);
    do
    {
      v25 += 8;
      v28 = *v27;
      v29 = v27[1];
      v27 += 8;
      *(v25 - 8) = v28;
      v30 = *(v27 - 6);
      *(v25 - 7) = v29;
      v31 = *(v27 - 5);
      *(v25 - 6) = v30;
      v32 = *(v27 - 4);
      *(v25 - 5) = v31;
      v33 = *(v27 - 3);
      *(v25 - 4) = v32;
      v34 = *(v27 - 2);
      *(v25 - 3) = v33;
      v35 = *(v27 - 1);
      *(v25 - 2) = v34;
      *(v25 - 1) = v35;
      --v26;
    }
    while ( v26 );
    *v25 = *v27;
    *(_BYTE *)(v14 + 1393) = 1;
    *(_QWORD *)(v14 + 1320) = v14;
    if ( a3 )
    {
      v72 = a3;
      *(_QWORD *)(v14 + 1408) = a3;
      *(_BYTE *)(v14 + 1394) = 1;
    }
  }
  else
  {
    v21 = *(_OWORD *)(a4 + 68);
    v22 = *(unsigned __int16 *)(a4 + 42);
    *(_QWORD *)(v14 + 1320) = a3;
    *(_OWORD *)(v14 + 580) = v21;
    if ( (unsigned int)v22 > 0x20 )
    {
      v15 = -1073741811;
      goto LABEL_42;
    }
    *(_WORD *)(v14 + 1124) = v22;
    *(_WORD *)(v14 + 1158) = v22;
    if ( (_WORD)v22 )
    {
      v23 = v22;
      memmove((void *)(v14 + 1126), (const void *)(a4 + *(unsigned __int16 *)(a4 + 44)), v22);
      v24 = *(unsigned __int16 *)(a4 + 46);
      if ( (_WORD)v24 )
        memmove((void *)(v14 + 1160), (const void *)(a4 + v24), v23);
    }
  }
  v36 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  if ( *(_QWORD *)(v14 + 580) == *(_QWORD *)&ndisDefaultNetworkGuid.Data1
    && *(_QWORD *)(v14 + 588) == *(_QWORD *)ndisDefaultNetworkGuid.Data4 )
  {
    CompartmentBlock = ndisIfFindCompartmentBlock(1u);
    if ( !CompartmentBlock )
    {
LABEL_40:
      v15 = -1073741811;
      goto LABEL_41;
    }
    *(_OWORD *)(v14 + 580) = *(_OWORD *)(*((_QWORD *)CompartmentBlock + 7) + 32LL);
  }
  v38 = qword_140126B50;
  if ( (__int64 *)qword_140126B50 == &qword_140126B50 )
    goto LABEL_40;
  while ( 1 )
  {
    v39 = *(_DWORD *)(v38 + 32);
    if ( v39 > *(_DWORD *)(v14 + 580) )
      goto LABEL_40;
    if ( v39 >= *(_DWORD *)(v14 + 580) )
    {
      v40 = *(_WORD *)(v38 + 36);
      if ( v40 > *(_WORD *)(v14 + 584) )
        goto LABEL_40;
      if ( v40 >= *(_WORD *)(v14 + 584) )
      {
        v41 = *(_WORD *)(v38 + 38);
        if ( v41 > *(_WORD *)(v14 + 586) )
          goto LABEL_40;
        if ( v41 >= *(_WORD *)(v14 + 586) )
          break;
      }
    }
LABEL_39:
    v38 = *(_QWORD *)v38;
    if ( (__int64 *)v38 == &qword_140126B50 )
      goto LABEL_40;
  }
  v42 = RtlCompareMemory((const void *)(v38 + 40), (const void *)(v14 + 588), 8uLL);
  if ( v42 != 8 )
  {
    if ( *(_BYTE *)(v42 + v38 + 40) > *(_BYTE *)(v42 + v14 + 588) )
      goto LABEL_40;
    goto LABEL_39;
  }
  if ( !v38 || (*(_DWORD *)(v38 + 72) & 3) != 0 )
    goto LABEL_40;
  Blink = (_DEVICE_OBJECT *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
  if ( (_LIST_ENTRY **)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink == &WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink )
  {
LABEL_52:
    v47 = a6;
    if ( a6 < *(_DWORD *)dword_1401275E8 )
    {
      v48 = dword_140126B60;
      v49 = &dword_140126B60;
    }
    else
    {
      v48 = dword_140126B78;
      v49 = &dword_140126B78;
    }
    if ( a6 >= v48 )
    {
      v51 = a6 - v48;
      v50 = IfIndexRange::Grow((IfIndexRange *)v49, a6 - v48 + 1);
      if ( !v50 )
      {
        if ( !RtlTestBitEx((PRTL_BITMAP_EX)(v49 + 2), v51) )
        {
          RtlSetBitEx((PRTL_BITMAP_EX)(v49 + 2), v51);
          goto LABEL_75;
        }
        v50 = -1073741791;
      }
    }
    else
    {
      v50 = -1073741637;
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        0x16u,
        0xBu,
        (struct _GUID *)&WPP_08d66058e44c3546dbc094f515ac4e09_Traceguids,
        v47,
        v50);
    v47 = 0;
    ClearBitsAndSet = RtlFindClearBitsAndSetEx(&BitMapHeader, 1LL, 0LL);
    v53 = ClearBitsAndSet;
    if ( ClearBitsAndSet == -1 )
    {
      SizeOfBitMap = BitMapHeader.SizeOfBitMap;
      v55 = IfIndexRange::Grow((IfIndexRange *)&dword_140126B78, LODWORD(BitMapHeader.SizeOfBitMap) + 64);
      v15 = v55;
      if ( v55 )
      {
        if ( v55 < 0 )
        {
          if ( v55 == -1073741789 )
            v15 = -1073676266;
          goto LABEL_41;
        }
        if ( v55 == 259 || v55 == 1076035585 )
          goto LABEL_41;
LABEL_75:
        *(_DWORD *)(v14 + 4) = v47;
        v56 = (_QWORD *)(v14 + 1232);
        DriverObject = Blink->DriverObject;
        v58 = *(_QWORD *)&DriverObject->Type;
        if ( *(_DRIVER_OBJECT **)(*(_QWORD *)&DriverObject->Type + 8LL) != DriverObject )
          goto LABEL_81;
        *v56 = v58;
        *(_QWORD *)(v14 + 1240) = DriverObject;
        *(_QWORD *)(v58 + 8) = v56;
        *(_QWORD *)&DriverObject->Type = v56;
        v59 = (_QWORD *)(v14 + 1248);
        *(_QWORD *)(v14 + 1328) = a1;
        v60 = a1 + 3;
        v61 = a1[3];
        if ( *(_QWORD **)(*v60 + 8LL) != v60
          || (*(_QWORD *)(v14 + 1256) = v60,
              *v59 = v61,
              *(_QWORD *)(v61 + 8) = v59,
              *v60 = v59,
              v62 = (_QWORD *)(v38 + 56),
              v63 = *(_QWORD *)(v38 + 56),
              v64 = (_QWORD *)(v14 + 1264),
              *(_QWORD *)(v63 + 8) != v38 + 56) )
        {
LABEL_81:
          __fastfail(3u);
        }
        ++ndisInterfaceCount;
        *v64 = v63;
        *(_QWORD *)(v14 + 1272) = v62;
        *(_QWORD *)(v63 + 8) = v64;
        *v62 = v64;
        *(_DWORD *)(v14 + 576) = *(_DWORD *)(*(_QWORD *)(v38 + 48) + 16LL);
        *(_QWORD *)(v14 + 1368) = v38;
        *(_QWORD *)(v14 + 1376) = *(_QWORD *)(v38 + 48);
        ++*(_DWORD *)(v38 + 76);
        v65 = v72;
        if ( v72 )
        {
          *(_QWORD *)(v72 + 688) = v14;
          *(_DWORD *)(v65 + 680) = v47;
        }
        NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v14 + 1432), 0);
        ++*(_DWORD *)(v14 + 1304);
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v36);
        ndisNsiNotifyClientInterfaceChange(v14, 1LL, 0LL, 1LL);
        v66 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
        IFBLOCK_DECREMENT_REF((char *)v14, 0);
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v66);
        v15 = 0;
        *a7 = v47;
        goto LABEL_89;
      }
      v53 = RtlFindClearBitsAndSetEx(&BitMapHeader, 1LL, SizeOfBitMap);
    }
    v47 = v53 + dword_140126B78;
    goto LABEL_75;
  }
  while ( Blink->Queue.ListEntry.Flink != (_LIST_ENTRY *)a2 )
  {
    if ( Blink->Queue.ListEntry.Flink <= (_LIST_ENTRY *)a2 )
    {
      Blink = *(_DEVICE_OBJECT **)&Blink->Type;
      if ( Blink != (_DEVICE_OBJECT *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink )
        continue;
    }
    goto LABEL_52;
  }
  v15 = -1073741270;
LABEL_41:
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v36);
LABEL_42:
  v43 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  v44 = *(_BYTE **)(v14 + 1432);
  v45 = v43;
  if ( (unsigned __int64)(v44 - 2) > 1 )
  {
    if ( (unsigned __int64)v44 < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, (ULONG_PTR)v44, 0LL);
    if ( (*v44 & 2) == 0 )
      ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)v44, 0xFFuLL);
    *v44 &= ~2u;
  }
  v19 = (*(_DWORD *)(v14 + 1304))-- == 1;
  if ( v19 )
  {
    v67 = *(_DWORD *)(v14 + 4);
    if ( v67 )
      ndisIfFreeIfIndex(v67);
    NdisFreeRefCount(*(struct NDIS_REFCOUNT_HANDLE__ **)(v14 + 1432));
    *(_QWORD *)(v14 + 1432) = 0LL;
    ExFreePoolWithTag((PVOID)v14, 0x6669444Eu);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v45);
LABEL_89:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Llq(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, a4, v69);
  return v15;
}
