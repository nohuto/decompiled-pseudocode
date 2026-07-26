/*
 * XREFs of NdisIfAddIfStackEntry @ 0x14002ADF0
 * Callers:
 *     ?ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14004EAC0 (-ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1401788C0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_RECORDER_SF_ll @ 0x14002AD10 (WPP_RECORDER_SF_ll.c)
 *     ndisIfFindStackEntry @ 0x14002B040 (ndisIfFindStackEntry.c)
 *     ndisIfStackTablePathExist @ 0x14002B070 (ndisIfStackTablePathExist.c)
 *     ?ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z @ 0x14002B100 (-ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z.c)
 *     WPP_RECORDER_SF_llL @ 0x14002B140 (WPP_RECORDER_SF_llL.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
NDIS_STATUS __stdcall NdisIfAddIfStackEntry(NET_IFINDEX HigherLayerIfIndex, NET_IFINDEX LowerLayerIfIndex)
{
  __int64 v2; // r8
  ULONG_PTR v3; // rdi
  ULONG_PTR v4; // rbx
  __int64 Pool2; // rax
  PVOID *v6; // rsi
  KIRQL v7; // r14
  unsigned int v8; // ecx
  struct _NDIS_IF_BLOCK *Interface; // rax
  _DWORD *v10; // rdx
  PVOID **v11; // rcx
  NDIS_STATUS v12; // ebp
  int v13; // edx
  int v14; // r8d
  int v15; // r9d
  int v17; // [rsp+20h] [rbp-38h]

  v3 = LowerLayerIfIndex;
  v4 = HigherLayerIfIndex;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ll(*((_QWORD *)WPP_GLOBAL_Control + 8), *(__int64 *)&LowerLayerIfIndex, v2, 0xAu, v17);
  Pool2 = ExAllocatePool2(64LL, 40LL, 1718174798LL);
  v6 = (PVOID *)Pool2;
  if ( !Pool2 )
    return -1073741670;
  *(_DWORD *)(Pool2 + 16) = v4;
  *(_DWORD *)(Pool2 + 20) = v3;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  KeAcquireSpinLockAtDpcLevel(&qword_14011CA28);
  if ( (_DWORD)v4 == (_DWORD)v3 || (unsigned __int8)ndisIfStackTablePathExist((unsigned int)v4, (unsigned int)v3, 0LL) )
  {
    if ( MmIsDriverVerifying((struct _DRIVER_OBJECT *)ndisDriverObject) )
      ndisBugCheckEx(0x1BuLL, v4, v3, 0LL);
    v12 = -1073741811;
    goto LABEL_18;
  }
  if ( !ndisIfFindStackEntry((unsigned int)v4, (unsigned int)v3) )
  {
    ndisIfFindInterface(v8);
    Interface = ndisIfFindInterface(v3);
    if ( v10 && Interface )
    {
      v11 = (PVOID **)P;
      v6[3] = v10;
      v6[4] = Interface;
      if ( v11[1] != &P )
        __fastfail(3u);
      *v6 = v11;
      v6[1] = &P;
      v11[1] = v6;
      P = v6;
      ++v10[324];
      ++Interface->HigherLayerIfCount;
      goto LABEL_12;
    }
    v12 = -1071448021;
LABEL_18:
    KeReleaseSpinLockFromDpcLevel(&qword_14011CA28);
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v7);
    ExFreePoolWithTag(v6, 0);
    goto LABEL_13;
  }
  ExFreePoolWithTag(v6, 0);
LABEL_12:
  v12 = 0;
  KeReleaseSpinLockFromDpcLevel(&qword_14011CA28);
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v7);
LABEL_13:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_llL(*((_QWORD *)WPP_GLOBAL_Control + 8), v13, v14, v15, v17, v4, v3, v12);
  return v12;
}
