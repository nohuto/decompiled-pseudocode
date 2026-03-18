/*
 * XREFs of ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x14004E398
 * Callers:
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x14004DFD4 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 * Callees:
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140022034 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140036B40 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x140036EB0 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x140037570 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140038CC8 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z @ 0x140044698 (-InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z.c)
 *     ?_InitializeContext@FxPrePostCallback@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFCXDEVICE_INIT@@PEAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallbackType@@@Z @ 0x14004DA90 (-_InitializeContext@FxPrePostCallback@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFCXDEVICE_INIT@@PEAPEAVF.c)
 *     ?ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x14004E8D4 (-ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?ConfigureAutoForwardCleanupClose@FxDevice@@QEAAXPEAUWDFDEVICE_INIT@@@Z @ 0x14004EAA8 (-ConfigureAutoForwardCleanupClose@FxDevice@@QEAAXPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?FxPoolAddHeaderSize@@YAJPEAU_FX_DRIVER_GLOBALS@@_KPEA_K@Z @ 0x14004EB48 (-FxPoolAddHeaderSize@@YAJPEAU_FX_DRIVER_GLOBALS@@_KPEA_K@Z.c)
 *     ??0FxPkgIo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z @ 0x14004EBB4 (--0FxPkgIo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z.c)
 *     ??0FxPkgGeneral@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z @ 0x14004EC94 (--0FxPkgGeneral@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z.c)
 *     ??0FxWmiIrpHandler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x14004ED28 (--0FxWmiIrpHandler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z.c)
 *     memset @ 0x1400AC740 (memset.c)
 */

int __fastcall FxDevice::Initialize(
        FxDevice *this,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *DeviceAttributes)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  char v6; // r15
  int result; // eax
  unsigned __int64 v8; // rdx
  __int64 v9; // r9
  FX_POOL **v10; // rax
  FxDefaultIrpHandler *v11; // rsi
  _WDF_OBJECT_ATTRIBUTES *p_m_RequestAttributes; // rcx
  unsigned __int64 ContextSize; // r12
  _LIST_ENTRY *i; // r14
  unsigned __int64 *p_m_RequestLookasideListElementSize; // rsi
  unsigned __int64 v16; // rdx
  __int64 v17; // r9
  FX_POOL **v18; // rax
  FxPkgGeneral *v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // r9
  FX_POOL **v22; // rax
  unsigned __int16 v23; // r9
  FxWmiIrpHandler *v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // r9
  FX_POOL **v27; // rax
  FxPkgIo *v28; // rax
  bool v29; // zf
  ULONG Tag; // ecx
  void *v31; // rax
  FX_POOL **v32; // rsi
  _LIST_ENTRY *Blink; // rdx
  _WDF_OBJECT_ATTRIBUTES *v34; // rcx
  unsigned int j; // r15d
  __m128i v36; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  char v38; // [rsp+80h] [rbp+8h]

  m_Globals = this->m_Globals;
  this->m_Exclusive = DeviceInit->Exclusive;
  this->m_ObjectFlags |= 0x800u;
  v6 = 0;
  result = FxDeviceBase::ConfigureConstraints(this, DeviceAttributes);
  if ( result >= 0 )
  {
    v10 = FxObjectHandleAlloc2(m_Globals, v8, 0x78uLL, v9, 0LL, 0, FxObjectTypeInternal);
    v11 = (FxDefaultIrpHandler *)v10;
    if ( v10 )
    {
      FxNonPagedObject::FxNonPagedObject((FxNonPagedObject *)v10, (_FX_DRIVER_GLOBALS *)0x1105, 0, m_Globals);
      v11->m_DeviceBase = this;
      v11->__vftable = (FxDefaultIrpHandler_vtbl *)FxDefaultIrpHandler::`vftable';
    }
    else
    {
      v11 = 0LL;
    }
    this->m_PkgDefault = v11;
    if ( !v11 )
      return -1073741670;
    FxDevice::InstallPackage(this, v11);
    if ( DeviceInit->InitType == FxDeviceInitTypeControlDevice )
      this->m_Legacy = 1;
    p_m_RequestAttributes = &this->m_RequestAttributes;
    if ( DeviceInit->RequestAttributes.Size )
    {
      *(_OWORD *)&p_m_RequestAttributes->Size = *(_OWORD *)&DeviceInit->RequestAttributes.Size;
      *(_OWORD *)&this->m_RequestAttributes.EvtDestroyCallback = *(_OWORD *)&DeviceInit->RequestAttributes.EvtDestroyCallback;
      *(_OWORD *)&this->m_RequestAttributes.ParentObject = *(_OWORD *)&DeviceInit->RequestAttributes.ParentObject;
      this->m_RequestAttributes.ContextTypeInfo = DeviceInit->RequestAttributes.ContextTypeInfo;
    }
    ContextSize = FxGetContextSize(p_m_RequestAttributes);
    for ( i = DeviceInit->CxDeviceInitListHead.Flink; i != &DeviceInit->CxDeviceInitListHead; i = i->Flink )
    {
      v29 = m_Globals->FxPoolTrackingOn == 0;
      Tag = m_Globals->Tag;
      v36.m128i_i64[0] = 0LL;
      v36.m128i_i64[1] = 64LL;
      if ( v29 )
        v31 = 0LL;
      else
        v31 = retaddr;
      v32 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v36, 0x108uLL, Tag, v31);
      if ( !v32 )
        return -1073741670;
      v32[2] = 0LL;
      v32[3] = 0LL;
      v32[1] = (FX_POOL *)v32;
      *v32 = (FX_POOL *)v32;
      *((_OWORD *)v32 + 2) = 0LL;
      *((_OWORD *)v32 + 3) = 0LL;
      *((_OWORD *)v32 + 4) = 0LL;
      v32[10] = 0LL;
      memset(v32 + 12, 0, 0xA8uLL);
      *((_BYTE *)v32 + 88) = ++v6;
      v38 = v6;
      v32[2] = (FX_POOL *)i[1].Blink[5].Flink;
      v32[3] = (FX_POOL *)i[2].Blink;
      *((_LIST_ENTRY *)v32 + 2) = i[3];
      *((_LIST_ENTRY *)v32 + 3) = i[4];
      *((_LIST_ENTRY *)v32 + 4) = i[5];
      v32[10] = (FX_POOL *)i[6].Flink;
      Blink = this->m_CxDeviceInfoListHead.Blink;
      if ( Blink->Flink != &this->m_CxDeviceInfoListHead )
        __fastfail(3u);
      *v32 = (FX_POOL *)&this->m_CxDeviceInfoListHead;
      v32[1] = (FX_POOL *)Blink;
      Blink->Flink = (_LIST_ENTRY *)v32;
      this->m_CxDeviceInfoListHead.Blink = (_LIST_ENTRY *)v32;
      i[40].Blink = (_LIST_ENTRY *)v32;
      if ( FxGetContextSize((_WDF_OBJECT_ATTRIBUTES *)&i[3]) > ContextSize )
        ContextSize = FxGetContextSize(v34);
      if ( LOBYTE(i[40].Flink) == 1 )
      {
        for ( j = 0; j < 0x15; ++j )
        {
          result = FxPrePostCallback::_InitializeContext(
                     this->m_Globals,
                     (WDFCXDEVICE_INIT *)i,
                     (FX_POOL ***)&v32[j + 12],
                     j);
          if ( result < 0 )
            return result;
        }
        v6 = v38;
      }
    }
    p_m_RequestLookasideListElementSize = &this->m_RequestLookasideListElementSize;
    result = FxCalculateObjectTotalSize2(m_Globals, 0x168u, 0, ContextSize, &this->m_RequestLookasideListElementSize);
    if ( result >= 0 )
    {
      result = FxPoolAddHeaderSize(
                 m_Globals,
                 *p_m_RequestLookasideListElementSize,
                 &this->m_RequestLookasideListElementSize);
      if ( result >= 0 )
      {
        ExInitializeNPagedLookasideList(
          &this->m_RequestLookasideList,
          0LL,
          0LL,
          ExDefaultNonPagedPoolType | 0x200,
          *p_m_RequestLookasideListElementSize,
          m_Globals->Tag,
          0);
        FxDevice::ConfigureAutoForwardCleanupClose(this, DeviceInit);
        v18 = FxObjectHandleAlloc2(m_Globals, v16, 0xD0uLL, v17, 0LL, 0, FxObjectTypeInternal);
        if ( v18 )
          FxPkgGeneral::FxPkgGeneral((FxPkgGeneral *)v18, m_Globals, this);
        else
          v19 = 0LL;
        this->m_PkgGeneral = v19;
        if ( !v19 )
          return -1073741670;
        FxDevice::InstallPackage(this, v19);
        v22 = FxObjectHandleAlloc2(m_Globals, v20, 0xD0uLL, v21, 0LL, 0, FxObjectTypeInternal);
        if ( v22 )
          FxWmiIrpHandler::FxWmiIrpHandler((FxWmiIrpHandler *)v22, m_Globals, this, v23);
        else
          v24 = 0LL;
        this->m_PkgWmi = v24;
        if ( !v24 )
          return -1073741670;
        FxDevice::InstallPackage(this, v24);
        v27 = FxObjectHandleAlloc2(m_Globals, v25, 0x190uLL, v26, 0LL, 0, FxObjectTypeInternal);
        if ( v27 )
          FxPkgIo::FxPkgIo((FxPkgIo *)v27, m_Globals, this);
        else
          v28 = 0LL;
        this->m_PkgIo = v28;
        if ( !v28 )
          return -1073741670;
        FxDevice::InstallPackage(this, v28);
        this->m_PkgIo->m_InCallerContextCallback.m_Method = DeviceInit->IoInCallerContextCallback;
        if ( DeviceInit->RequiresSelfIoTarget )
          this->m_SelfIoTargetNeeded = 1;
        return 0;
      }
    }
  }
  return result;
}
