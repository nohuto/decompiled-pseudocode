/*
 * XREFs of ndisRegisterScatterGatherDmaForMiniport @ 0x1400DAFAC
 * Callers:
 *     NdisMRegisterScatterGatherDma @ 0x1400DB720 (NdisMRegisterScatterGatherDma.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisMInitializeScatterGatherDmaInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@EEKK@Z @ 0x1400DA9BC (-ndisMInitializeScatterGatherDmaInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@EEKK@.c)
 */

__int64 __fastcall ndisRegisterScatterGatherDmaForMiniport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        _NDIS_SG_DMA_BLOCK **a3)
{
  _DEVICE_OBJECT *PhysicalDeviceObject; // rsi
  __int64 v5; // rdi
  unsigned int v7; // ecx
  unsigned int v8; // esi
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rax
  __int64 v11; // [rsp+30h] [rbp-28h]
  char v12; // [rsp+30h] [rbp-28h]

  PhysicalDeviceObject = a1->PhysicalDeviceObject;
  v5 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      1,
      29,
      (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids,
      (char)a1,
      v12);
  }
  v7 = 2;
  if ( (a1->MajorNdisVersion > 6u || a1->MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x32u)
    && (*(_BYTE *)(v5 + 4) & 2) != 0 )
  {
    v7 = 3;
  }
  if ( *(_BYTE *)(v5 + 1) >= 2u && *(_QWORD *)(v5 + 40) )
    PhysicalDeviceObject = *(_DEVICE_OBJECT **)(v5 + 40);
  v8 = ndisMInitializeScatterGatherDmaInternal(
         a1,
         PhysicalDeviceObject,
         *(_DWORD *)(v5 + 4) & 1,
         (*(_DWORD *)(v5 + 4) & 4) != 0,
         v7,
         *(_DWORD *)(v5 + 8));
  if ( !v8 )
  {
    _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xFFFFFFBF);
    MiniportSGDmaBlock = a1->MiniportSGDmaBlock;
    MiniportSGDmaBlock->ProcessSGListHandler = *(void (__fastcall **)(_DEVICE_OBJECT *, void *, _SCATTER_GATHER_LIST *, void *))(v5 + 16);
    MiniportSGDmaBlock->SharedMemAllocateCompleteHandler = *(void (__fastcall **)(void *, void *, _LARGE_INTEGER *, unsigned int, void *))(v5 + 24);
    MiniportSGDmaBlock->Flags = *(_DWORD *)(v5 + 4);
    *a3 = MiniportSGDmaBlock;
    *(_DWORD *)(v5 + 32) = MiniportSGDmaBlock->ScatterGatherListSize;
    _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x200u);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v11) = v8;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x1Fu,
      (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids,
      (char)a1,
      v11);
  }
  return v8;
}
