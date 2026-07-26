/*
 * XREFs of ?ndisGetAdapterRssInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@EPEAH@Z @ 0x140012AC0
 * Callers:
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1400110C0 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ndisLwmIoctlIrpHandler @ 0x1400294D0 (ndisLwmIoctlIrpHandler.c)
 * Callees:
 *     ?ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140029F70 (-ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisGetRssProcessorInformation @ 0x1400AAF00 (NdisGetRssProcessorInformation.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 */

__int64 __fastcall ndisGetAdapterRssInfo(char *NdisHandle, struct _IRP *a2, char a3, int *a4)
{
  unsigned int v7; // ebp
  unsigned int Length; // r13d
  _IRP::<unnamed_type_AssociatedIrp> v9; // rsi
  unsigned int v10; // r15d
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // ebp
  NDIS_STATUS RssProcessorInformation; // r12d
  struct _NDIS_RSS_PROCESSOR_INFO *v16; // rax
  struct _NDIS_RSS_PROCESSOR_INFO *v17; // r14
  __int128 v18; // xmm0
  unsigned int v19; // ebx
  _LIST_ENTRY v20; // xmm1
  unsigned int v21; // r15d
  UCHAR *v22; // rdx
  __int128 v23; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR Size; // [rsp+78h] [rbp+10h] BYREF

  *a4 = -1073741823;
  if ( !a3 )
    return 3221225506LL;
  v7 = 144;
  Length = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( Length < 0x90 )
    return 3221225485LL;
  v9.MasterIrp = (_IRP *)a2->AssociatedIrp;
  v10 = 144;
  *(_OWORD *)&v9.MasterIrp->AllocationProcessorNumber = 0LL;
  *a4 = 0;
  *(_OWORD *)&v9.MasterIrp->Reserved2 = 0LL;
  *(_LIST_ENTRY *)((char *)&v9.MasterIrp->ThreadListEntry + 4) = 0LL;
  *(_IO_STATUS_BLOCK *)((char *)&v9.MasterIrp->IoStatus + 4) = 0LL;
  *(_OWORD *)&v9.MasterIrp->Cancel = 0LL;
  *(_OWORD *)((char *)&v9.MasterIrp->UserEvent + 4) = 0LL;
  *(_IRP::<unnamed_type_Overlay> *)((char *)&v9.MasterIrp->Overlay + 12) = 0LL;
  *(_OWORD *)((char *)&v9.MasterIrp->UserBuffer + 4) = 0LL;
  *(void **)((char *)&v9.MasterIrp->Tail.Overlay.DriverContext[1] + 4) = 0LL;
  *((_DWORD *)&v9.MasterIrp->Tail.CompletionKey + 5) = 0;
  *(_DWORD *)&v9.MasterIrp->Type = 9437568;
  BYTE4(v9.MasterIrp->MdlAddress) = NdisHandle[32];
  BYTE5(v9.MasterIrp->MdlAddress) = NdisHandle[33];
  LODWORD(v9.MasterIrp->MdlAddress) = 144;
  v9.MasterIrp->Flags = 40;
  v9.MasterIrp->Reserved2 = 20;
  *(_OWORD *)&v9.MasterIrp->ThreadListEntry.Blink = *(_OWORD *)(NdisHandle + 2692);
  LODWORD(v9.MasterIrp->IoStatus.Information) = *((_DWORD *)NdisHandle + 677);
  if ( ndisIsRssEnabledForMiniport((struct _NDIS_MINIPORT_BLOCK *)NdisHandle) )
  {
    v9.MasterIrp->AssociatedIrp.IrpCount = 60;
    HIDWORD(v9.MasterIrp->AssociatedIrp.SystemBuffer) = 44;
    v12 = *(_QWORD *)(v11 + 552);
    *(_OWORD *)((char *)&v9.MasterIrp->IoStatus.Information + 4) = *(_OWORD *)v12;
    *(_OWORD *)((char *)&v9.MasterIrp->IoRingContext + 4) = *(_OWORD *)(v12 + 16);
    *(LONGLONG *)((char *)&v9.MasterIrp->Overlay.AllocationSize.QuadPart + 4) = *(_QWORD *)(v12 + 32);
    *((_DWORD *)&v9.MasterIrp->Overlay.AllocationSize + 3) = *(_DWORD *)(v12 + 40);
    v10 = *(unsigned __int16 *)(*(_QWORD *)(v11 + 552) + 20LL)
        + *(unsigned __int16 *)(*(_QWORD *)(v11 + 552) + 12LL)
        + 144;
    LODWORD(v9.MasterIrp->MdlAddress) = v10;
    if ( Length < v10 )
    {
      HIDWORD(v9.MasterIrp->IoRingContext) = 0;
      HIDWORD(v9.MasterIrp->UserEvent) = 0;
    }
    else
    {
      HIDWORD(v9.MasterIrp->UserEvent) = 84;
      memmove(
        &v9.MasterIrp->Tail.CompletionKey + 3,
        (const void *)(*((_QWORD *)NdisHandle + 69) + *(unsigned int *)(*((_QWORD *)NdisHandle + 69) + 24LL)),
        *(unsigned __int16 *)(*((_QWORD *)NdisHandle + 69) + 20LL));
      v13 = (unsigned int)*(unsigned __int16 *)(*((_QWORD *)NdisHandle + 69) + 20LL) + 144;
      v14 = *(unsigned __int16 *)(*((_QWORD *)NdisHandle + 69) + 20LL) + 144;
      HIDWORD(v9.MasterIrp->IoRingContext) = *(unsigned __int16 *)(*((_QWORD *)NdisHandle + 69) + 20LL) + 84;
      memmove(
        (char *)v9.MasterIrp + v13,
        (const void *)(*((_QWORD *)NdisHandle + 69) + *(unsigned int *)(*((_QWORD *)NdisHandle + 69) + 16LL)),
        *(unsigned __int16 *)(*((_QWORD *)NdisHandle + 69) + 12LL));
      v7 = *(unsigned __int16 *)(*((_QWORD *)NdisHandle + 69) + 12LL) + v14;
    }
  }
  else
  {
    *(_DWORD *)&v9.MasterIrp->AllocationProcessorNumber |= 0x40u;
  }
  Size = 0LL;
  v23 = 0LL;
  LOBYTE(v23) = 1;
  DWORD2(v23) = 0;
  RssProcessorInformation = NdisGetRssProcessorInformation(NdisHandle, 0LL, &Size);
  v16 = (struct _NDIS_RSS_PROCESSOR_INFO *)ExAllocatePool3(66LL, Size, 538985550LL, &v23, 1);
  v17 = v16;
  if ( v16 )
  {
    RssProcessorInformation = NdisGetRssProcessorInformation(NdisHandle, v16, &Size);
    if ( RssProcessorInformation >= 0 )
    {
      v18 = *(_OWORD *)&v17->Header.Type;
      v19 = v17->RssProcessorCount * v17->RssProcessorEntrySize;
      v20 = *(_LIST_ENTRY *)&v17->PreferredNumaNode;
      LODWORD(v9.MasterIrp->ThreadListEntry.Flink) = 104;
      *(_OWORD *)&v9.MasterIrp->CancelRoutine = v18;
      HIDWORD(v9.MasterIrp->ThreadListEntry.Flink) = 40;
      *(_QWORD *)&v18 = *(_QWORD *)&v17[1].Header.Type;
      v21 = v19 + v10;
      LODWORD(v9.MasterIrp->MdlAddress) = v21;
      v9.MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry = v20;
      v9.MasterIrp->Tail.Overlay.DriverContext[2] = (void *)v18;
      if ( Length < v21 )
      {
        v9.MasterIrp->Tail.Apc.SpareLong0 = 0;
      }
      else
      {
        v22 = &v17->Header.Type + v17->RssProcessorArrayOffset;
        v9.MasterIrp->Tail.Apc.SpareLong0 = v7 - 104;
        memmove((char *)v9.MasterIrp + v7, v22, v19);
        v7 += v19;
      }
    }
    ExFreePoolWithTag(v17, 0x2020444Eu);
  }
  a2->IoStatus.Information = v7;
  return (unsigned int)RssProcessorInformation;
}
