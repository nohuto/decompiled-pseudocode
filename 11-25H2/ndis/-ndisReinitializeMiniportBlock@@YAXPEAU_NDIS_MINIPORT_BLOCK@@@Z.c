/*
 * XREFs of ?ndisReinitializeMiniportBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14017B6D0
 * Callers:
 *     ?ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x14004E810 (-ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x1400A25EC (-ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisOpenULongRef@@YAXPEAU_ULONG_REFERENCE@@@Z @ 0x1400CC9FC (-ndisOpenULongRef@@YAXPEAU_ULONG_REFERENCE@@@Z.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisMInitializeMiniportBlockFront@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1401868B0 (-ndisMInitializeMiniportBlockFront@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 */

void __fastcall ndisReinitializeMiniportBlock(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v1; // esi
  void *MiniportAdapterContext; // rbp
  KIRQL v4; // r13
  unsigned int v5; // edi
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  unsigned int v8; // r12d
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rcx
  _NDIS_MINIPORT_STATS *BottomIfStats; // rcx
  _NDIS_MINIPORT_OFFLOAD *Offload; // rcx
  USHORT Size; // [rsp+60h] [rbp+8h]

  v1 = 0;
  MiniportAdapterContext = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      99,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)a1);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v5 = a1->Flags & 0x40000000;
  v6 = a1->PnPFlags & 0x8613000;
  v7 = a1->FilterPnPFlags & 0x200;
  v8 = a1->InfoFlags & 0x4000;
  Size = a1->Header.Size;
  if ( (a1->Flags & 0x80u) != 0 )
  {
    MiniportAdapterContext = a1->MiniportAdapterContext;
    v1 = a1->MacOptions & 8;
  }
  memset(&a1->Header + 1, 0, 0xE58uLL);
  ndisMInitializeMiniportBlockFront(a1, Size);
  DriverHandle = a1->DriverHandle;
  a1->SyncFlags = 0;
  a1->WSyncFlags = 0;
  a1->PnPFlags = v6;
  a1->FilterPnPFlags = v7;
  a1->Flags = v5;
  a1->InfoFlags = v8;
  if ( (DriverHandle->Flags & 0x40) != 0 )
  {
    v5 |= 0x80u;
    a1->MacOptions = v1;
    a1->Flags = v5;
    a1->MiniportAdapterContext = MiniportAdapterContext;
  }
  if ( (DriverHandle->Flags & 1) != 0 )
    a1->Flags = v5 | 0x8000;
  BottomIfStats = a1->BottomIfStats;
  if ( BottomIfStats )
    memset(BottomIfStats, 0, 112LL * ndisMaxNumberOfProcessors);
  Offload = a1->Offload;
  if ( Offload )
    memset(Offload, 0, sizeof(_NDIS_MINIPORT_OFFLOAD));
  KeReleaseSpinLock(&ndisMiniportListLock, v4);
  ndisOpenULongRef(&a1->Ref.SpinLock);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      100,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)a1);
}
