/*
 * XREFs of ?ndisReinitializeMiniportBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401706D0
 * Callers:
 *     ?ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x140076E70 (-ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x140098EC4 (-ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x14004CDA0 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     ?ndisOpenULongRef@@YAXPEAU_ULONG_REFERENCE@@@Z @ 0x1400C58CC (-ndisOpenULongRef@@YAXPEAU_ULONG_REFERENCE@@@Z.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisMInitializeMiniportBlockFront@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x14017E1A0 (-ndisMInitializeMiniportBlockFront@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 */

void __fastcall ndisReinitializeMiniportBlock(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v1; // esi
  void *MiniportAdapterContext; // rbp
  volatile signed __int32 *p_Flags; // rdi
  KIRQL v5; // r14
  unsigned int v6; // r15d
  unsigned int v7; // r12d
  unsigned int v8; // r13d
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  _NDIS_MINIPORT_STATS *BottomIfStats; // rcx
  _NDIS_MINIPORT_OFFLOAD *Offload; // rcx
  USHORT Size; // [rsp+70h] [rbp+8h]
  unsigned int v13; // [rsp+78h] [rbp+10h]

  v1 = 0;
  MiniportAdapterContext = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      100,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      (char)a1);
  p_Flags = (volatile signed __int32 *)&a1->Flags;
  v5 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v6 = a1->PnPFlags & 0x8613000;
  Size = a1->Header.Size;
  v7 = a1->FilterPnPFlags & 0x200;
  v8 = a1->Flags & 0x40000000;
  v13 = a1->InfoFlags & 0x4000;
  if ( (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x80u) != 0LL )
  {
    MiniportAdapterContext = a1->MiniportAdapterContext;
    v1 = a1->MacOptions & 8;
  }
  memset(&a1->Header + 1, 0, 0xE58uLL);
  ndisMInitializeMiniportBlockFront(a1, Size);
  a1->SyncFlags = 0;
  a1->WSyncFlags = 0;
  a1->InfoFlags = v13;
  DriverHandle = a1->DriverHandle;
  a1->PnPFlags = v6;
  a1->FilterPnPFlags = v7;
  *p_Flags = v8;
  if ( (DriverHandle->Flags & 0x40) != 0 )
  {
    _InterlockedOr(p_Flags, 0x80u);
    a1->MacOptions = v1;
    a1->MiniportAdapterContext = MiniportAdapterContext;
  }
  if ( (a1->DriverHandle->Flags & 1) != 0 )
    _InterlockedOr(p_Flags, 0x8000u);
  BottomIfStats = a1->BottomIfStats;
  if ( BottomIfStats )
    memset(BottomIfStats, 0, 112LL * ndisMaxNumberOfProcessors);
  Offload = a1->Offload;
  if ( Offload )
    memset(Offload, 0, sizeof(_NDIS_MINIPORT_OFFLOAD));
  KeReleaseSpinLock(&ndisMiniportListLock, v5);
  ndisOpenULongRef(&a1->Ref.SpinLock);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      101,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      (char)a1);
}
