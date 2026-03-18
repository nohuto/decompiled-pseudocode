/*
 * XREFs of ??1FxDevice@@UEAA@XZ @ 0x140041688
 * Callers:
 *     ??_GFxDevice@@UEAAPEAXI@Z @ 0x140041290 (--_GFxDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14000EC70 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??3FxStump@@SAXPEAX@Z @ 0x1400216E4 (--3FxStump@@SAXPEAX@Z.c)
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     ??_GFxIrpPreprocessInfo@@QEAAPEAXI@Z @ 0x14003EC78 (--_GFxIrpPreprocessInfo@@QEAAPEAXI@Z.c)
 *     ?IsDisposed@FxObject@@QEAAEXZ @ 0x140041968 (-IsDisposed@FxObject@@QEAAEXZ.c)
 *     ?DeleteSymbolicLink@FxDevice@@QEAAXXZ @ 0x1400419D0 (-DeleteSymbolicLink@FxDevice@@QEAAXXZ.c)
 *     ??1FxTransactionedList@@QEAA@XZ @ 0x140041A2C (--1FxTransactionedList@@QEAA@XZ.c)
 *     ??1FxDeviceBase@@MEAA@XZ @ 0x140041B44 (--1FxDeviceBase@@MEAA@XZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ??1FxCxDeviceInfo@@QEAA@XZ @ 0x140095350 (--1FxCxDeviceInfo@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxDevice::~FxDevice(FxDevice *this)
{
  FxPkgIo *m_PkgIo; // rcx
  FxPkgPnp *m_PkgPnp; // rcx
  FxPkgGeneral *m_PkgGeneral; // rcx
  FxWmiIrpHandler *m_PkgWmi; // rcx
  FxDefaultIrpHandler *m_PkgDefault; // rcx
  _LIST_ENTRY *p_m_PreprocessInfoListHead; // rbx
  FxIrpPreprocessInfo *Flink; // rcx
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // rsi
  FxCxDeviceInfo *v10; // rbx
  wchar_t *Buffer; // rcx
  wchar_t *v12; // rcx
  FxDevice *m_ParentDevice; // rcx
  _LIST_ENTRY *v14; // rax
  _LIST_ENTRY *v15; // rax
  unsigned __int64 v16; // rbx
  const void *_a2; // rax

  this->FxDeviceBase::FxNonPagedObject::FxObject::__vftable = (FxDevice_vtbl *)FxDevice::`vftable'{for `FxNonPagedObject'};
  this->FxDeviceBase::IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)FxDevice::`vftable'{for `IFxHasCallbacks'};
  if ( !FxObject::IsDisposed(this) )
  {
    v16 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a2 = 0LL;
    WPP_IFR_SF_qq(this->m_Globals, 1u, 0x12u, 0xAu, WPP_FxDevice_cpp_Traceguids, this, _a2);
    if ( !this->m_ObjectSize )
      v16 = 0LL;
    FxVerifierBugCheckWorker(this->m_Globals, WDF_OBJECT_ERROR, v16, (unsigned __int64)this);
  }
  m_PkgIo = this->m_PkgIo;
  if ( m_PkgIo )
  {
    m_PkgIo->Release(m_PkgIo, 0LL, 295, "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp");
    this->m_PkgIo = 0LL;
  }
  m_PkgPnp = this->m_PkgPnp;
  if ( m_PkgPnp )
  {
    m_PkgPnp->Release(m_PkgPnp, 0LL, 300, "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp");
    this->m_PkgPnp = 0LL;
  }
  m_PkgGeneral = this->m_PkgGeneral;
  if ( m_PkgGeneral )
  {
    m_PkgGeneral->Release(m_PkgGeneral, 0LL, 305, "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp");
    this->m_PkgGeneral = 0LL;
  }
  m_PkgWmi = this->m_PkgWmi;
  if ( m_PkgWmi )
  {
    m_PkgWmi->Release(m_PkgWmi, 0LL, 310, "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp");
    this->m_PkgWmi = 0LL;
  }
  m_PkgDefault = this->m_PkgDefault;
  if ( m_PkgDefault )
  {
    m_PkgDefault->Release(m_PkgDefault, 0LL, 315, "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp");
    this->m_PkgDefault = 0LL;
  }
  p_m_PreprocessInfoListHead = &this->m_PreprocessInfoListHead;
  while ( 1 )
  {
    Flink = (FxIrpPreprocessInfo *)p_m_PreprocessInfoListHead->Flink;
    if ( p_m_PreprocessInfoListHead->Flink == p_m_PreprocessInfoListHead )
      break;
    if ( Flink->ListEntry.Blink != p_m_PreprocessInfoListHead
      || (v14 = Flink->ListEntry.Flink, (FxIrpPreprocessInfo *)Flink->ListEntry.Flink->Blink != Flink) )
    {
LABEL_36:
      __fastfail(3u);
    }
    p_m_PreprocessInfoListHead->Flink = v14;
    v14->Blink = p_m_PreprocessInfoListHead;
    Flink->ListEntry.Blink = (_LIST_ENTRY *)Flink;
    Flink->ListEntry.Flink = (_LIST_ENTRY *)Flink;
    FxIrpPreprocessInfo::`scalar deleting destructor'(Flink);
  }
  p_m_CxDeviceInfoListHead = &this->m_CxDeviceInfoListHead;
  while ( 1 )
  {
    v10 = (FxCxDeviceInfo *)p_m_CxDeviceInfoListHead->Flink;
    if ( p_m_CxDeviceInfoListHead->Flink == p_m_CxDeviceInfoListHead )
      break;
    if ( v10->ListEntry.Blink != p_m_CxDeviceInfoListHead )
      goto LABEL_36;
    v15 = v10->ListEntry.Flink;
    if ( (FxCxDeviceInfo *)v10->ListEntry.Flink->Blink != v10 )
      goto LABEL_36;
    p_m_CxDeviceInfoListHead->Flink = v15;
    v15->Blink = p_m_CxDeviceInfoListHead;
    v10->ListEntry.Blink = (_LIST_ENTRY *)v10;
    v10->ListEntry.Flink = (_LIST_ENTRY *)v10;
    FxCxDeviceInfo::~FxCxDeviceInfo(v10);
    FxStump::operator delete(v10);
  }
  Buffer = this->m_DeviceName.Buffer;
  if ( Buffer )
  {
    FxPoolFree(Buffer);
    this->m_DeviceName = 0LL;
  }
  FxDevice::DeleteSymbolicLink(this);
  v12 = this->m_MofResourceName.Buffer;
  if ( v12 )
  {
    FxPoolFree(v12);
    this->m_MofResourceName = 0LL;
  }
  if ( this->m_RequestLookasideListElementSize )
  {
    ExDeleteNPagedLookasideList(&this->m_RequestLookasideList);
    this->m_RequestLookasideListElementSize = 0LL;
  }
  m_ParentDevice = this->m_ParentDevice;
  if ( m_ParentDevice )
    m_ParentDevice->Release(m_ParentDevice, this, 360, "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp");
  this->m_IoTargetsList.m_ListLock.m_DbgFlagIsInitialized = 0;
  FxTransactionedList::~FxTransactionedList(&this->m_IoTargetsList);
  FxDeviceBase::~FxDeviceBase(this);
}
