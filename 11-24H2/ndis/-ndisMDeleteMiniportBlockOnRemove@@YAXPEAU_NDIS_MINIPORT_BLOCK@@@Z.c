/*
 * XREFs of ?ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007DCB0
 * Callers:
 *     NdisLWMUninitializeNetworkInterface @ 0x140093480 (NdisLWMUninitializeNetworkInterface.c)
 *     ?ndisWdfDeviceObjectCleanup@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14013EAD4 (-ndisWdfDeviceObjectCleanup@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x14016B5D0 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1401771E0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1400137C0 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ??1_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x140072950 (--1_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     ?ndisPcwNotifyMiniportRemoval@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140135710 (-ndisPcwNotifyMiniportRemoval@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcFree@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401362C8 (-ndisAoAcFree@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisFreeEventLog@@YAXPEAUNDIS_EVENT_LOG_HANDLE__@@@Z @ 0x1401668B0 (-ndisFreeEventLog@@YAXPEAUNDIS_EVENT_LOG_HANDLE__@@@Z.c)
 *     ?ndisMDeRegisterPDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140169440 (-ndisMDeRegisterPDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisMDeleteMiniportBlockOnRemove(_NDIS_MINIPORT_BLOCK *this)
{
  void *BusInterface; // rcx
  _DEVICE_RESET_INTERFACE_STANDARD *ReenumerateSelfInterface; // rcx
  wchar_t *Buffer; // rcx
  unsigned __int16 *NumaDistances; // rcx
  _UNICODE_STRING *pAdapterInstanceName; // rcx
  _UNICODE_STRING *pModifiedInstanceName; // rcx
  wchar_t *PnPInstanceId; // rcx
  void *ConfigurationHandle; // rcx
  void *SecurityDescriptor; // rcx
  _NDIS_BIND_PATHS *BindPaths; // rcx
  _CM_RESOURCE_LIST *AllocatedResources; // rcx
  _SINGLE_LIST_ENTRY *i; // rcx
  _NDIS_GUID *pNdisGuidMap; // rcx
  void *FakeMac; // rcx
  _NDIS_RECEIVE_QUEUE_BLOCK *DefaultReceiveQueue; // rcx
  unsigned __int64 RefCountTracker; // rdi
  ULONG SetBits; // edx
  _DWORD *v19; // r8
  int v20; // ecx
  _NDIS_REFCOUNT_TAGGED_ENTRY *v21; // r9
  unsigned __int64 NsiRefCountTracker; // rdi
  ULONG Tag; // edx
  _DWORD *v24; // r8
  int v25; // ecx
  _NDIS_REFCOUNT_TAGGED_ENTRY *v26; // r9
  NDIS_EVENT_LOG_HANDLE__ *PnpEventLog; // rcx
  struct _VF_NDIS_DISPATCH_TABLE *v28; // rax
  struct _NDIS_PD_BLOCK *PDBlock; // rax
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  if ( this->AoAc )
    ndisAoAcFree(this);
  ndisMDeRegisterPDCTaskClient(this);
  BusInterface = this->BusInterface;
  if ( BusInterface )
  {
    ExFreePoolWithTag(BusInterface, 0);
    this->BusInterface = 0LL;
  }
  ReenumerateSelfInterface = this->ReenumerateSelfInterface;
  if ( ReenumerateSelfInterface )
  {
    ReenumerateSelfInterface->InterfaceDereference(ReenumerateSelfInterface->Context);
    ExFreePoolWithTag(this->ReenumerateSelfInterface, 0);
    this->ReenumerateSelfInterface = 0LL;
  }
  Buffer = this->FdoName.Buffer;
  if ( Buffer )
  {
    ExFreePoolWithTag(Buffer, 0);
    this->FdoName.Buffer = 0LL;
    this->FdoName.Length = 0;
  }
  NumaDistances = this->NumaDistances;
  if ( NumaDistances )
  {
    ExFreePoolWithTag(NumaDistances, 0);
    this->NumaDistances = 0LL;
  }
  ndisPcwNotifyMiniportRemoval(this);
  pAdapterInstanceName = this->pAdapterInstanceName;
  if ( pAdapterInstanceName )
  {
    ExFreePoolWithTag(pAdapterInstanceName, 0);
    this->pAdapterInstanceName = 0LL;
  }
  pModifiedInstanceName = this->pModifiedInstanceName;
  if ( pModifiedInstanceName )
  {
    ExFreePoolWithTag(pModifiedInstanceName, 0);
    this->pModifiedInstanceName = 0LL;
  }
  PnPInstanceId = this->PnPInstanceId;
  if ( PnPInstanceId )
  {
    ExFreePoolWithTag(PnPInstanceId, 0);
    this->PnPInstanceId = 0LL;
  }
  ConfigurationHandle = this->ConfigurationHandle;
  if ( ConfigurationHandle )
  {
    ExFreePoolWithTag(ConfigurationHandle, 0);
    this->ConfigurationHandle = 0LL;
  }
  SecurityDescriptor = this->SecurityDescriptor;
  if ( SecurityDescriptor )
  {
    ExFreePoolWithTag(SecurityDescriptor, 0);
    this->SecurityDescriptor = 0LL;
  }
  BindPaths = this->BindPaths;
  if ( BindPaths )
  {
    ExFreePoolWithTag(BindPaths, 0);
    this->BindPaths = 0LL;
  }
  AllocatedResources = this->AllocatedResources;
  if ( AllocatedResources )
  {
    ExFreePoolWithTag(AllocatedResources, 0);
    this->AllocatedResources = 0LL;
  }
  for ( i = this->WorkQueue[6].Next; i; i = this->WorkQueue[6].Next )
  {
    this->WorkQueue[6] = (_SINGLE_LIST_ENTRY)i->Next;
    ExFreePoolWithTag(i, 0);
  }
  pNdisGuidMap = this->pNdisGuidMap;
  if ( pNdisGuidMap )
  {
    ExFreePoolWithTag(pNdisGuidMap, 0);
    this->pNdisGuidMap = 0LL;
  }
  FakeMac = this->FakeMac;
  if ( FakeMac )
  {
    ExFreePoolWithTag(FakeMac, 0);
    this->FakeMac = 0LL;
  }
  DefaultReceiveQueue = this->DefaultReceiveQueue;
  if ( DefaultReceiveQueue )
  {
    ExFreePoolWithTag(DefaultReceiveQueue, 0);
    this->DefaultReceiveQueue = 0LL;
  }
  RefCountTracker = (unsigned __int64)this->RefCountTracker;
  if ( (RefCountTracker & 0xFFFFFFFFFFFFFFFCuLL) != 0 || RefCountTracker == 1 )
  {
    if ( RefCountTracker == 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
    if ( *(_BYTE *)(RefCountTracker + 1) )
    {
      if ( *(_BYTE *)(RefCountTracker + 1) == 1 )
      {
        SetBits = 0;
        if ( *(_BYTE *)(RefCountTracker + 2) )
        {
          v19 = (_DWORD *)(RefCountTracker + 64);
          while ( ((*v19 >> 1) & 0x7FFF) == *v19 >> 17 )
          {
            ++SetBits;
            v19 += 16;
            if ( SetBits >= *(unsigned __int8 *)(RefCountTracker + 2) )
              goto LABEL_42;
          }
          goto LABEL_51;
        }
      }
    }
    else
    {
      BitMapHeader.SizeOfBitMap = *(unsigned __int8 *)(RefCountTracker + 2);
      *(&BitMapHeader.SizeOfBitMap + 1) = 0;
      BitMapHeader.Buffer = (unsigned int *)(RefCountTracker + 16);
      SetBits = RtlFindSetBits(&BitMapHeader, 1u, 0);
      if ( SetBits != -1 )
        goto LABEL_51;
      v20 = 0;
      if ( *(_BYTE *)(RefCountTracker + 3) )
      {
        v21 = *(_NDIS_REFCOUNT_TAGGED_ENTRY **)(RefCountTracker + 8);
        while ( !v21[v20].RefCount )
        {
          if ( ++v20 >= (unsigned int)*(unsigned __int8 *)(RefCountTracker + 3) )
            goto LABEL_42;
        }
        SetBits = v21[v20].Tag;
LABEL_51:
        if ( SetBits == -2 )
        {
LABEL_52:
          ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker);
          ExFreePoolWithTag((PVOID)RefCountTracker, 0);
          goto LABEL_53;
        }
LABEL_83:
        ndisBugCheckEx(0x1EuLL, 4uLL, RefCountTracker, SetBits);
      }
    }
LABEL_42:
    if ( (*(_BYTE *)RefCountTracker & 2) == 0 )
      goto LABEL_52;
    SetBits = 255;
    goto LABEL_83;
  }
LABEL_53:
  NsiRefCountTracker = (unsigned __int64)this->NsiRefCountTracker;
  this->RefCountTracker = 0LL;
  if ( (NsiRefCountTracker & 0xFFFFFFFFFFFFFFFCuLL) != 0 || NsiRefCountTracker == 1 )
  {
    if ( NsiRefCountTracker == 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
    if ( *(_BYTE *)(NsiRefCountTracker + 1) )
    {
      if ( *(_BYTE *)(NsiRefCountTracker + 1) == 1 )
      {
        Tag = 0;
        if ( *(_BYTE *)(NsiRefCountTracker + 2) )
        {
          v24 = (_DWORD *)(NsiRefCountTracker + 64);
          while ( ((*v24 >> 1) & 0x7FFF) == *v24 >> 17 )
          {
            ++Tag;
            v24 += 16;
            if ( Tag >= *(unsigned __int8 *)(NsiRefCountTracker + 2) )
              goto LABEL_62;
          }
          goto LABEL_71;
        }
      }
    }
    else
    {
      BitMapHeader.SizeOfBitMap = *(unsigned __int8 *)(NsiRefCountTracker + 2);
      *(&BitMapHeader.SizeOfBitMap + 1) = 0;
      BitMapHeader.Buffer = (unsigned int *)(NsiRefCountTracker + 16);
      Tag = RtlFindSetBits(&BitMapHeader, 1u, 0);
      if ( Tag != -1 )
        goto LABEL_71;
      v25 = 0;
      if ( *(_BYTE *)(NsiRefCountTracker + 3) )
      {
        v26 = *(_NDIS_REFCOUNT_TAGGED_ENTRY **)(NsiRefCountTracker + 8);
        while ( !v26[v25].RefCount )
        {
          if ( ++v25 >= (unsigned int)*(unsigned __int8 *)(NsiRefCountTracker + 3) )
            goto LABEL_62;
        }
        Tag = v26[v25].Tag;
LABEL_71:
        if ( Tag == -2 )
        {
LABEL_72:
          ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)NsiRefCountTracker);
          ExFreePoolWithTag((PVOID)NsiRefCountTracker, 0);
          goto LABEL_73;
        }
LABEL_85:
        ndisBugCheckEx(0x1EuLL, 4uLL, NsiRefCountTracker, Tag);
      }
    }
LABEL_62:
    if ( (*(_BYTE *)NsiRefCountTracker & 2) == 0 )
      goto LABEL_72;
    Tag = 255;
    goto LABEL_85;
  }
LABEL_73:
  PnpEventLog = this->PnpEventLog;
  this->NsiRefCountTracker = 0LL;
  ndisFreeEventLog(PnpEventLog);
  v28 = ndisVerifierNdisDispatch;
  this->PnpEventLog = 0LL;
  if ( v28 && this->VerifierContext )
  {
    (*((void (**)(void))v28 + 2))();
    this->VerifierContext = 0LL;
  }
  PDBlock = this->PDBlock;
  if ( PDBlock )
  {
    *(_QWORD *)PDBlock = 0LL;
    ExFreePoolWithTag(this->PDBlock, 0);
    this->PDBlock = 0LL;
  }
  _NDIS_MINIPORT_BLOCK::~_NDIS_MINIPORT_BLOCK(this);
  if ( (this->Flags & 0x100) != 0 )
    ExFreePoolWithTag(this, 0);
}
