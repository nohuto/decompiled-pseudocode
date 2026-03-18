/*
 * XREFs of ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x14004AB2C
 * Callers:
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x140019204 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 * Callees:
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x140019AD4 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x14001E2B4 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     WPP_IFR_SF_qqd @ 0x14002A590 (WPP_IFR_SF_qqd.c)
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x14004C7E0 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     ??0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z @ 0x14004C9F4 (--0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z.c)
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x14004D238 (-Destroy@FxDevice@@QEAAXXZ.c)
 *     ?DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z @ 0x14004E274 (-DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z.c)
 *     ?MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z @ 0x140072E44 (-MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     __security_check_cookie @ 0x1400AC640 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall FxChildList::CreateDevice(
        FxChildList *this,
        FxDeviceDescriptionEntry *Entry,
        unsigned __int8 *InvalidateRelations)
{
  _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *m_IdentificationDescription; // rdx
  char v7; // al
  FxDevice *CreatedDevice; // rax
  WDFCHILDLIST__ *v10; // rcx
  int _a1; // ebx
  FxDevice *v12; // r15
  unsigned __int64 *p_m_ListLock; // rcx
  KIRQL v14; // al
  _LIST_ENTRY *p_m_ModificationLink; // rsi
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  const void *v18; // r10
  KIRQL v19; // bl
  unsigned __int8 v20; // r8
  _LIST_ENTRY freeHead; // [rsp+40h] [rbp-C0h] BYREF
  WDFDEVICE_INIT init; // [rsp+50h] [rbp-B0h] BYREF

  WDFDEVICE_INIT::WDFDEVICE_INIT(&init, this->m_DeviceBase->m_Driver);
  init.Characteristics |= 0x80u;
  m_IdentificationDescription = Entry->m_IdentificationDescription;
  init.Pdo.Parent = this->m_Device;
  init.CreatedOnStack = 1;
  init.InitType = FxDeviceInitTypePdo;
  v7 = -init.Pdo.Parent->m_PowerPageableCapable;
  init.Pdo.DescriptionEntry = Entry;
  init.PowerPageable &= -(v7 != 0);
  if ( this->m_StaticList )
  {
    CreatedDevice = *(FxDevice **)&m_IdentificationDescription[2].IdentificationDescriptionSize;
    init.CreatedDevice = CreatedDevice;
LABEL_3:
    Entry->m_Pdo = CreatedDevice;
    Entry->m_DescriptionState = DescriptionInstantiatedHasObject;
    WDFDEVICE_INIT::~WDFDEVICE_INIT(&init);
    return 1;
  }
  v10 = (WDFCHILDLIST__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !this->m_ObjectSize )
    v10 = 0LL;
  _a1 = this->m_EvtCreateDevice.m_Method(v10, m_IdentificationDescription, &init);
  if ( _a1 == -1073741267 )
  {
    if ( init.CreatedDevice )
      FxDevice::Destroy((FxDevice *)init.CreatedDevice);
    *InvalidateRelations = 1;
  }
  else
  {
    if ( _a1 >= 0 )
    {
      CreatedDevice = (FxDevice *)init.CreatedDevice;
      if ( init.CreatedDevice )
        goto LABEL_3;
      WPP_IFR_SF_D(this->m_Globals, 2u, 0xCu, 0x20u, WPP_FxChildList_cpp_Traceguids, _a1);
      FxVerifierDbgBreakPoint(this->m_Globals);
      _a1 = -1073740951;
    }
    v12 = (FxDevice *)init.CreatedDevice;
    p_m_ListLock = &this->m_ListLock;
    if ( init.CreatedDevice )
    {
      v14 = KeAcquireSpinLockRaiseToDpc(p_m_ListLock);
      Entry->m_DescriptionState = DescriptionReportedMissing;
      if ( Entry->m_ModificationState )
      {
        p_m_ModificationLink = &Entry->m_ModificationLink;
        Flink = p_m_ModificationLink->Flink;
        if ( p_m_ModificationLink->Flink->Blink != p_m_ModificationLink
          || (Blink = p_m_ModificationLink->Blink, Blink->Flink != p_m_ModificationLink) )
        {
          __fastfail(3u);
        }
        Blink->Flink = Flink;
        Flink->Blink = Blink;
      }
      KeReleaseSpinLock(&this->m_ListLock, v14);
      v18 = (const void *)((unsigned __int64)v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v12->m_ObjectSize )
        v18 = 0LL;
      WPP_IFR_SF_qqd(
        this->m_Globals,
        2u,
        0xCu,
        0x21u,
        WPP_FxChildList_cpp_Traceguids,
        v18,
        v12->m_DeviceObject.m_DeviceObject,
        _a1);
      FxDevice::DeleteDeviceFromFailedCreate(v12, _a1, 1u);
      init.CreatedDevice = 0LL;
    }
    else
    {
      freeHead.Blink = &freeHead;
      freeHead.Flink = &freeHead;
      v19 = KeAcquireSpinLockRaiseToDpc(p_m_ListLock);
      FxChildList::MarkDescriptionNotPresentWorker(this, Entry, 1u);
      FxChildList::ProcessModificationsLocked(this, &freeHead);
      KeReleaseSpinLock(&this->m_ListLock, v19);
      FxChildList::DrainFreeListHead(this, &freeHead, v20);
    }
  }
  WDFDEVICE_INIT::~WDFDEVICE_INIT(&init);
  return 0;
}
