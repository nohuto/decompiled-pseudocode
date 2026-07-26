/*
 * XREFs of ndisIfCreateInterfaceFromPersistentStore @ 0x140088780
 * Callers:
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x14015AB30 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z.c)
 * Callees:
 *     ?ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x14002A780 (-ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1400483A0 (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     ndisIfUpdateInterfaceFromPersistentStore @ 0x14008B160 (ndisIfUpdateInterfaceFromPersistentStore.c)
 *     Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline @ 0x140092EB0 (Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Release@kspin_lock_saved_irql@details@wil@@SAXAEBU123@@Z @ 0x1400C8820 (-Release@kspin_lock_saved_irql@details@wil@@SAXAEBU123@@Z.c)
 *     WPP_RECORDER_SF_I @ 0x1400C9544 (WPP_RECORDER_SF_I_ea_1400C9544.c)
 *     WPP_RECORDER_SF_IL @ 0x1400C95E8 (WPP_RECORDER_SF_IL.c)
 *     WPP_RECORDER_SF_Ii @ 0x1400C96A8 (WPP_RECORDER_SF_Ii.c)
 *     WPP_RECORDER_SF_i_guid_ @ 0x1400C9A58 (WPP_RECORDER_SF_i_guid_.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x140163200 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x140163CC0 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     ?ndisWaitForKernelObject@@YA_NPEAX_J@Z @ 0x140165B80 (-ndisWaitForKernelObject@@YA_NPEAX_J@Z.c)
 */

__int64 __fastcall ndisIfCreateInterfaceFromPersistentStore(const struct _GUID *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r15
  unsigned int v4; // esi
  KIRQL v5; // al
  _DEVICE_OBJECT *Blink; // rcx
  void **p_DeviceContext; // rbx
  KIRQL v8; // r10
  _LIST_ENTRY *v9; // rax
  int v10; // edx
  int v11; // r8d
  union _NET_LUID_LH v12; // rbx
  __int64 v13; // rdi
  void **v14; // rdx
  int v15; // r8d
  _DEVICE_OBJECT *v16; // rax
  unsigned __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned __int64 v19; // rcx
  KIRQL v20; // al
  __int64 v21; // rbx
  unsigned int *v22; // rdi
  KIRQL v23; // r13
  __int64 v24; // r14
  unsigned int v25; // eax
  unsigned __int16 v26; // ax
  unsigned __int16 v27; // ax
  SIZE_T v28; // rax
  struct wil::details::kspin_lock_saved_irql v29; // xmm0
  int v30; // edx
  int v31; // r8d
  int v32; // r9d
  bool v33; // di
  struct _NDIS_IF_BLOCK *InterfaceByNetLuid; // rax
  KIRQL v35; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v36; // rcx
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // r14
  unsigned int v38; // r8d
  KIRQL v39; // r9
  int v40; // ecx
  int v41; // r9d
  int v42; // ecx
  int Interface; // eax
  int v44; // ecx
  int v46; // [rsp+28h] [rbp-69h]
  struct wil::details::kspin_lock_saved_irql v47; // [rsp+48h] [rbp-49h] BYREF
  struct wil::details::kspin_lock_saved_irql v48; // [rsp+58h] [rbp-39h] BYREF
  struct wil::details::kspin_lock_saved_irql v49; // [rsp+68h] [rbp-29h] BYREF
  struct wil::details::kspin_lock_saved_irql v50; // [rsp+78h] [rbp-19h] BYREF
  struct wil::details::kspin_lock_saved_irql v51; // [rsp+88h] [rbp-9h] BYREF
  struct _KEVENT Event; // [rsp+98h] [rbp+7h] BYREF
  unsigned int v54; // [rsp+108h] [rbp+77h] BYREF

  v54 = a3;
  v3 = a2;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_I(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, 16);
  }
  if ( !(unsigned int)Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline() )
  {
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
    Blink = (_DEVICE_OBJECT *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
    p_DeviceContext = 0LL;
    v8 = v5;
    v9 = *(_LIST_ENTRY **)(v3 + 24);
    if ( (_LIST_ENTRY **)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink != &WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink )
    {
      while ( Blink->Queue.ListEntry.Flink != v9 )
      {
        if ( Blink->Queue.ListEntry.Flink > v9 )
          goto LABEL_10;
        Blink = *(_DEVICE_OBJECT **)&Blink->Type;
        if ( Blink == (_DEVICE_OBJECT *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink )
        {
          KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v8);
          goto LABEL_19;
        }
      }
      p_DeviceContext = &Blink[-4].Queue.Wcb.DeviceContext;
    }
LABEL_10:
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v8);
    if ( p_DeviceContext )
    {
      v4 = -1073741823;
      goto LABEL_72;
    }
    goto LABEL_19;
  }
  v12.Value = *(ULONG64 *)(v3 + 24);
  v13 = (unsigned int)dword_14011B4B4;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v47.spinLock = (unsigned __int64 *)&WPP_MAIN_CB.DeviceObjectExtension;
  v47.savedIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  v16 = (_DEVICE_OBJECT *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
  if ( (_LIST_ENTRY **)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink == &WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink )
    goto LABEL_16;
  while ( 1 )
  {
    v14 = &v16[-4].Queue.Wcb.DeviceContext;
    if ( v16->Queue.ListEntry.Flink == (_LIST_ENTRY *)v12.Value )
      break;
    if ( v16->Queue.ListEntry.Flink <= (_LIST_ENTRY *)v12.Value )
    {
      v16 = *(_DEVICE_OBJECT **)&v16->Type;
      if ( v16 != (_DEVICE_OBJECT *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink )
        continue;
    }
    goto LABEL_16;
  }
  if ( v16 == (_DEVICE_OBJECT *)1232 )
  {
LABEL_16:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 4;
      WPP_RECORDER_SF_I(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)v14, v15, 12);
    }
    v51 = v47;
    wil::details::kspin_lock_saved_irql::Release(&v51);
  }
  else
  {
    if ( !*((_BYTE *)v14 + 1392) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_I(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)v14, v15, 13);
      }
      v48 = v47;
      wil::details::kspin_lock_saved_irql::Release(&v48);
LABEL_50:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_I(*((_QWORD *)WPP_GLOBAL_Control + 8), v10, v11, 17);
      }
      v4 = -1073741823;
      goto LABEL_72;
    }
    if ( v14[187] )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_I(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)v14, v15, 14);
      }
      v49 = v47;
      wil::details::kspin_lock_saved_irql::Release(&v49);
      goto LABEL_50;
    }
    v29 = v47;
    v14[187] = &Event;
    v50 = v29;
    wil::details::kspin_lock_saved_irql::Release(&v50);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Ii(*((_QWORD *)WPP_GLOBAL_Control + 8), v30, v31, v32);
    v33 = ndisWaitForKernelObject(&Event, v13);
    if ( !v33 )
    {
      v47.spinLock = (unsigned __int64 *)&WPP_MAIN_CB.DeviceObjectExtension;
      v47.savedIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
      InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(v12);
      if ( InterfaceByNetLuid )
      {
        if ( InterfaceByNetLuid->PendingDeletionComplete == &Event )
          InterfaceByNetLuid->PendingDeletionComplete = 0LL;
      }
      else
      {
        v33 = 1;
      }
      wil::details::kspin_lock_saved_irql::Release(&v47);
    }
    if ( !v33 )
      goto LABEL_50;
  }
LABEL_19:
  v17 = *(_QWORD *)(v3 + 24);
  v18 = (v17 >> 24) & 0xFFFFFF;
  v19 = HIWORD(v17);
  v54 = v18;
  if ( v18 - 32512 > 0x4100 )
  {
    v4 = ndisIfAllocateAndVerifyNetLuidIndex(v19, &v54, 0, 0);
    if ( v4 )
      goto LABEL_72;
  }
  v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  v21 = qword_14011CAB0;
  v22 = (unsigned int *)(v3 + 36);
  v23 = v20;
  v24 = 0LL;
  if ( (__int64 *)qword_14011CAB0 == &qword_14011CAB0 )
    goto LABEL_54;
  while ( 1 )
  {
    v25 = *(_DWORD *)(v21 + 32);
    if ( v25 > *v22 )
    {
LABEL_31:
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v23);
      goto LABEL_55;
    }
    if ( v25 >= *v22 )
    {
      v26 = *(_WORD *)(v21 + 36);
      if ( v26 > *(_WORD *)(v3 + 40) )
        goto LABEL_31;
      if ( v26 >= *(_WORD *)(v3 + 40) )
      {
        v27 = *(_WORD *)(v21 + 38);
        if ( v27 > *(_WORD *)(v3 + 42) )
          goto LABEL_31;
        if ( v27 >= *(_WORD *)(v3 + 42) )
          break;
      }
    }
LABEL_30:
    v21 = *(_QWORD *)v21;
    if ( (__int64 *)v21 == &qword_14011CAB0 )
      goto LABEL_31;
  }
  v28 = RtlCompareMemory((const void *)(v21 + 40), (const void *)(v3 + 44), 8uLL);
  if ( v28 != 8 )
  {
    if ( *(_BYTE *)(v28 + v21 + 40) > *((_BYTE *)v22 + v28 + 8) )
      goto LABEL_31;
    goto LABEL_30;
  }
  v24 = v21;
LABEL_54:
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v23);
  if ( v24 )
  {
LABEL_67:
    v42 = *(_DWORD *)(*(_QWORD *)(v24 + 48) + 16LL);
    if ( *(_DWORD *)(v3 + 52) != v42 )
      *(_DWORD *)(v3 + 52) = v42;
    Interface = ndisIfCreateInterface(
                  (struct _NDIS_IF_NETWORK_BLOCK *)v24,
                  0,
                  0LL,
                  (const union _NET_LUID_LH *)(v3 + 24),
                  a1,
                  (const struct NdisNetworkInterfacePersistedState *)v3,
                  0LL,
                  NdisIfBlockSourcePersistedNetSetup);
    v44 = v4;
    if ( Interface < 0 )
      v44 = -1073741823;
    v4 = v44;
    ndisIfUpdateInterfaceFromPersistentStore(v3);
  }
  else
  {
LABEL_55:
    v35 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
    v36 = qword_14011CAA0;
    CompartmentBlock = 0LL;
    v38 = *(_DWORD *)(v3 + 52);
    v39 = v35;
    if ( qword_14011CAA0 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011CAA0 )
    {
      while ( *((_DWORD *)v36 + 4) != v38 )
      {
        if ( *((_DWORD *)v36 + 4) > v38 )
          goto LABEL_61;
        v36 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v36;
        if ( v36 == (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011CAA0 )
          goto LABEL_62;
      }
      CompartmentBlock = v36;
    }
LABEL_61:
    if ( !CompartmentBlock )
    {
LABEL_62:
      CompartmentBlock = ndisIfFindCompartmentBlock(1u);
      *(_DWORD *)(v3 + 52) = v40;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v39);
    if ( !CompartmentBlock )
    {
      v4 = -1073741823;
      goto LABEL_72;
    }
    v24 = *((_QWORD *)CompartmentBlock + 7);
    if ( v24 )
    {
      *(_OWORD *)(v3 + 36) = *(_OWORD *)(v24 + 32);
      goto LABEL_67;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_i_guid_(*((_QWORD *)WPP_GLOBAL_Control + 8), v10, v11, v41);
    v4 = -1073741252;
  }
LABEL_72:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_IL(*((_QWORD *)WPP_GLOBAL_Control + 8), v10, v11, 19, v46, *(_QWORD *)(v3 + 24), v4);
  return v4;
}
