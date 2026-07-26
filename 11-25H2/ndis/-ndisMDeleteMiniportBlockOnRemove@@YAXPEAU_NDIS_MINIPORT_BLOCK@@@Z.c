/*
 * XREFs of ?ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006C8E0
 * Callers:
 *     NdisLWMUninitializeNetworkInterface @ 0x14009D0A0 (NdisLWMUninitializeNetworkInterface.c)
 *     ?ndisWdfDeviceObjectCleanup@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401499B4 (-ndisWdfDeviceObjectCleanup@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x140171EF0 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x140181730 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     NdisFreeRefCount @ 0x140015A20 (NdisFreeRefCount.c)
 *     ??1_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x14006CCA0 (--1_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     ?ndisPcwNotifyMiniportRemoval@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140140710 (-ndisPcwNotifyMiniportRemoval@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcFree@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140141318 (-ndisAoAcFree@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisFreeEventLog@@YAXPEAUNDIS_EVENT_LOG_HANDLE__@@@Z @ 0x1401731B0 (-ndisFreeEventLog@@YAXPEAUNDIS_EVENT_LOG_HANDLE__@@@Z.c)
 *     ?ndisMDeRegisterPDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140176300 (-ndisMDeRegisterPDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
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
  NDIS_REFCOUNT_HANDLE__ *NsiRefCountTracker; // rcx
  NDIS_EVENT_LOG_HANDLE__ *PnpEventLog; // rcx
  struct _VF_NDIS_DISPATCH_TABLE *v19; // rax
  struct _NDIS_PD_BLOCK *PDBlock; // rax

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
  NdisFreeRefCount(this->RefCountTracker);
  NsiRefCountTracker = this->NsiRefCountTracker;
  this->RefCountTracker = 0LL;
  NdisFreeRefCount(NsiRefCountTracker);
  PnpEventLog = this->PnpEventLog;
  this->NsiRefCountTracker = 0LL;
  ndisFreeEventLog(PnpEventLog);
  v19 = ndisVerifierNdisDispatch;
  this->PnpEventLog = 0LL;
  if ( v19 && this->VerifierContext )
  {
    (*((void (**)(void))v19 + 2))();
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
