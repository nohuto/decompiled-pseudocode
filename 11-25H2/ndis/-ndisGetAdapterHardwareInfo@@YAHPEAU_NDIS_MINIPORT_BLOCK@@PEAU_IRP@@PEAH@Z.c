/*
 * XREFs of ?ndisGetAdapterHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x140091450
 * Callers:
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1400110C0 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     memset @ 0x1400EE380 (memset.c)
 */

__int64 __fastcall ndisGetAdapterHardwareInfo(struct _NDIS_MINIPORT_BLOCK *a1, struct _IRP *a2, int *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  char *v4; // rsi
  __int64 result; // rax
  unsigned int Length; // r12d
  _IRP::<unnamed_type_AssociatedIrp> v9; // r14
  unsigned int v10; // r15d
  unsigned int v11; // eax
  struct _NDIS_INTERRUPT_BLOCK *InterruptEx; // rbp
  int v13; // edx
  __int64 v14; // r8
  __int64 i; // r12
  int v16; // ecx
  int v17; // eax
  int v18; // eax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = 0LL;
  *a3 = -1073741823;
  if ( !*((_BYTE *)CurrentStackLocation->FileObject->FsContext + 24) )
    return 3221225506LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v9.MasterIrp = (_IRP *)a2->AssociatedIrp;
  v10 = 668;
  if ( Length < 0x29C )
    return 3221225485LL;
  *a3 = 0;
  memset(&v9.MasterIrp->AllocationProcessorNumber, 0, 0x298uLL);
  *(_DWORD *)&v9.MasterIrp->Type = 43778432;
  BYTE4(v9.MasterIrp->MdlAddress) = a1->MajorNdisVersion;
  BYTE5(v9.MasterIrp->MdlAddress) = a1->MinorNdisVersion;
  v11 = 668;
  InterruptEx = a1->InterruptEx;
  if ( InterruptEx )
  {
    if ( *((_BYTE *)InterruptEx + 192) )
    {
      v11 = 16 * *(_DWORD *)(*((_QWORD *)InterruptEx + 15) + 4LL) + 668;
      if ( Length >= v11 )
      {
        v4 = (char *)&v9.MasterIrp[3].ThreadListEntry.Blink + 4;
        HIDWORD(v9.MasterIrp->IoStatus.Information) = 668;
      }
    }
  }
  LODWORD(v9.MasterIrp->MdlAddress) = v11;
  if ( v4 )
    v10 = v11;
  if ( InterruptEx )
  {
    v13 = *(_DWORD *)&v9.MasterIrp->AllocationProcessorNumber;
    *(_OWORD *)&v9.MasterIrp->AssociatedIrp.MasterIrp = *(_OWORD *)&a1->MsiCaps.Header.CapabilityID;
    v9.MasterIrp->ThreadListEntry.Blink = *(_LIST_ENTRY **)&a1->MsiCaps.Option64Bit.MaskBits;
    v9.MasterIrp->IoStatus.Pointer = *(void **)&a1->MsiXCaps.Header.CapabilityID;
    LODWORD(v9.MasterIrp->IoStatus.Information) = a1->MsiXCaps.PBATable.TableOffset;
    if ( *((_BYTE *)InterruptEx + 192)
      && (v13 |= 4u, *(_DWORD *)&v9.MasterIrp->AllocationProcessorNumber = v13, *((_BYTE *)InterruptEx + 193)) )
    {
      v9.MasterIrp->Reserved2 = *(_DWORD *)(*((_QWORD *)InterruptEx + 15) + 4LL);
      *(_DWORD *)&v9.MasterIrp->AllocationProcessorNumber = v13 | 8;
      if ( v4 )
      {
        v14 = *((_QWORD *)InterruptEx + 15);
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v14 + 4); i = (unsigned int)(i + 1) )
        {
          IoGetAffinityInterrupt(*(PKINTERRUPT *)(v14 + 48 * i + 24), (PGROUP_AFFINITY)&v4[16 * (unsigned int)i]);
          v14 = *((_QWORD *)InterruptEx + 15);
        }
      }
      if ( a1->MsiXCaps.Header.CapabilityID == 17 )
      {
        v16 = *(_DWORD *)&v9.MasterIrp->AllocationProcessorNumber | 0x10;
        *(_DWORD *)&v9.MasterIrp->AllocationProcessorNumber = v16;
        v9.MasterIrp->Flags = (*(_WORD *)&a1->MsiXCaps.MessageControl & 0x7FF) + 1;
        if ( _bittest16((const signed __int16 *)&a1->MsiXCaps.MessageControl, 0xFu) )
          *(_DWORD *)&v9.MasterIrp->AllocationProcessorNumber = v16 | 0x20;
      }
    }
    else
    {
      *(_DWORD *)&v9.MasterIrp->AllocationProcessorNumber = v13 | 2;
    }
  }
  else
  {
    v17 = *(_DWORD *)&v9.MasterIrp->AllocationProcessorNumber;
    if ( a1->Interrupt )
      v18 = v17 | 2;
    else
      v18 = v17 | 1;
    *(_DWORD *)&v9.MasterIrp->AllocationProcessorNumber = v18;
  }
  BYTE4(v9.MasterIrp->UserEvent) = (a1->Flags & 0x10) != 0;
  result = 0LL;
  a2->IoStatus.Information = v10;
  return result;
}
