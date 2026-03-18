/*
 * XREFs of ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x14001FCD0
 * Callers:
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x14001FB80 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x140009AC0 (-ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x14000CFD0 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x14000DD00 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x140013630 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x140022000 (-DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ.c)
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140022034 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140024C90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x140025360 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x140026CA0 (-_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z.c)
 *     WPP_IFR_SF_qqd @ 0x14002A590 (WPP_IFR_SF_qqd.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x140034F10 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140036B40 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_DDid @ 0x140036F9C (WPP_IFR_SF_DDid.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x14003754C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_qqqd @ 0x140039FFC (WPP_IFR_SF_qqqd.c)
 *     ?Invoke@FxCxFileObjectFileCreate@@QEAAEPEAUWDFDEVICE__@@PEAUWDFREQUEST__@@PEAUWDFFILEOBJECT__@@@Z @ 0x14004B480 (-Invoke@FxCxFileObjectFileCreate@@QEAAEPEAUWDFDEVICE__@@PEAUWDFREQUEST__@@PEAUWDFFILEOBJECT__@@@.c)
 *     ?ForwardCreateRequest@FxPkgGeneral@@AEAAJPEAVFxIrp@@P6AJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z3@Z @ 0x1400636F0 (-ForwardCreateRequest@FxPkgGeneral@@AEAAJPEAVFxIrp@@P6AJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z3@Z.c)
 *     ?Invoke@FxFileObjectFileCreate@@QEAAXPEAUWDFDEVICE__@@PEAUWDFREQUEST__@@PEAUWDFFILEOBJECT__@@@Z @ 0x14006B670 (-Invoke@FxFileObjectFileCreate@@QEAAXPEAUWDFDEVICE__@@PEAUWDFREQUEST__@@PEAUWDFFILEOBJECT__@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?DeleteFileObjectFromFailedCreate@FxFileObject@@QEAAXXZ @ 0x140095370 (-DeleteFileObjectFromFailedCreate@FxFileObject@@QEAAXXZ.c)
 *     memset @ 0x1400AC740 (memset.c)
 */

__int64 __fastcall FxPkgGeneral::OnCreate(FxPkgGeneral *this, FxIrp *FxIrp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  _IRP *m_Irp; // rax
  _LIST_ENTRY *Blink; // r13
  _FILE_OBJECT *v7; // r8
  FxDeviceBase *m_DeviceBase; // r14
  int v9; // eax
  _LIST_ENTRY *p_m_FileObjectInfoHeadList; // rcx
  __int64 ContextTypeInfo; // rdx
  _IRP *v12; // rax
  int v13; // r12d
  _FX_DRIVER_GLOBALS *v14; // rdi
  FxFileObject *v15; // r15
  WDFFILEOBJECT__ *v16; // r12
  _IRP *v17; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v19; // edi
  unsigned int Tag; // r10d
  unsigned __int64 ContextSizeOverride; // r8
  unsigned __int64 v23; // r9
  int id; // r15d
  bool v25; // zf
  void *v26; // rax
  _OWORD *v27; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v28; // rax
  unsigned __int64 ContextSize; // r8
  KIRQL v30; // al
  unsigned __int8 v31; // r8
  KIRQL v32; // r9
  _LIST_ENTRY *v33; // rdx
  FxDeviceBase_vtbl *v34; // r8
  FxDeviceBase_vtbl **p_m_Link; // rcx
  FxDeviceBase *v36; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v37; // xmm1_8
  FxDevice *m_Device; // rcx
  FxRequest *v39; // rdi
  _LIST_ENTRY *j; // r14
  unsigned __int8 v41; // r8
  unsigned int *p_m_Flags; // r14
  char v43; // cl
  FxIoQueue *m_DefaultQueueForCreates; // rcx
  unsigned __int16 v45; // r9
  unsigned __int16 v46; // ax
  const void *v47; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v49; // r14
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax
  FxDeviceBase *v52; // rcx
  unsigned __int16 v53; // ax
  const void *v54; // rcx
  int v55; // eax
  WDFREQUEST__ *v56; // rdi
  _LIST_ENTRY *v57; // rax
  FxDeviceBase *v58; // rdx
  unsigned __int16 v59; // ax
  WDFDEVICE__ *v60; // rdx
  _LIST_ENTRY *k; // r14
  WDFREQUEST__ *v62; // r8
  FxDeviceBase *v63; // rdx
  unsigned __int16 v64; // ax
  WDFDEVICE__ *v65; // rdx
  FxVerifierLock *m_DeviceObject; // rcx
  _IO_STACK_LOCATION *v67; // rcx
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rcx
  _LIST_ENTRY *i; // r14
  _LIST_ENTRY *v71; // rdx
  unsigned __int64 Flink; // rdx
  FxVerifierLock *v73; // rcx
  unsigned __int16 v74; // ax
  FxDeviceBase *v75; // rcx
  const void *v76; // rdx
  unsigned __int16 v77; // ax
  const void *v78; // rcx
  FxDeviceBase *v79; // rcx
  unsigned __int16 v80; // ax
  const void *v81; // rcx
  _LIST_ENTRY *v82; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v83; // xmm1_8
  FxDeviceBase *v84; // rax
  _LIST_ENTRY *v85; // rdx
  FxDeviceBase *v86; // rcx
  unsigned __int64 m_Driver; // rdx
  unsigned __int16 v88; // ax
  unsigned __int64 v89; // rdx
  unsigned __int16 v90; // ax
  unsigned __int16 v91; // r9
  const void *v92; // rcx
  FxDeviceBase *v93; // rcx
  unsigned __int16 v94; // ax
  int v95; // esi
  FxIoQueue *m_DriverCreatedQueue; // rdx
  unsigned __int16 v97; // cx
  const void *v98; // rdx
  const _GUID *InvokeOnSuccess; // [rsp+20h] [rbp-89h]
  _IRP *InvokeOnCancel; // [rsp+30h] [rbp-79h]
  unsigned int flags; // [rsp+38h] [rbp-71h]
  _FX_DRIVER_GLOBALS *globals; // [rsp+50h] [rbp-59h]
  _WDF_OBJECT_ATTRIBUTES attributes; // [rsp+58h] [rbp-51h] BYREF
  FxRequest *pRequest; // [rsp+90h] [rbp-19h] BYREF
  FxPoolTypeOrPoolFlags v105; // [rsp+A0h] [rbp-9h] BYREF
  _FILE_OBJECT *FileObject; // [rsp+B0h] [rbp+7h]
  void *retaddr; // [rsp+108h] [rbp+5Fh]
  FxRequest *outputRequest; // [rsp+110h] [rbp+67h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+118h] [rbp+6Fh] BYREF
  char v110; // [rsp+120h] [rbp+77h]
  unsigned int v111; // [rsp+128h] [rbp+7Fh]

  m_Globals = this->m_Globals;
  v110 = 0;
  LOBYTE(outputRequest) = 0;
  m_Irp = FxIrp->m_Irp;
  memset(&attributes, 0, sizeof(attributes));
  pRequest = 0LL;
  Blink = 0LL;
  globals = m_Globals;
  v7 = m_Irp->Tail.Overlay.CurrentStackLocation->FileObject;
  FileObject = v7;
  LODWORD(m_Irp) = _InterlockedExchangeAdd(&this->m_OpenHandleCount, 1u);
  m_DeviceBase = this->m_DeviceBase;
  v9 = (_DWORD)m_Irp + 1;
  if ( BYTE4(m_DeviceBase[1].m_Globals) && v9 > 2 )
  {
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    v49 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v49 = 0LL;
    WPP_IFR_SF_q(m_Globals, 2u, 0xDu, 0x15u, WPP_FxPkgGeneral_cpp_Traceguids, v49);
    v19 = -1073741790;
    goto LABEL_65;
  }
  p_m_FileObjectInfoHeadList = &this->m_FileObjectInfoHeadList;
  ContextTypeInfo = 0LL;
  memset(&attributes.Size + 1, 0, 20);
  memset(&attributes.ParentObject, 0, 24);
  attributes.Size = 56;
  attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
  attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
  if ( p_m_FileObjectInfoHeadList->Flink != p_m_FileObjectInfoHeadList )
  {
    Blink = this->m_FileObjectInfoHeadList.Blink;
    if ( LODWORD(Blink[5].Blink) )
    {
      p_m_FileObjectInfoHeadList = &this->m_FileObjectInfoHeadList;
      attributes = *(_WDF_OBJECT_ATTRIBUTES *)&Blink[5].Blink;
      ContextTypeInfo = (__int64)attributes.ContextTypeInfo;
    }
    attributes.ExecutionLevel = this->m_ExecutionLevel;
    attributes.SynchronizationScope = this->m_SynchronizationScope;
  }
  v12 = FxIrp->m_Irp;
  v13 = (__int64)m_DeviceBase[1].m_DisposeSingleEntry.Next & 0x7FFFFFFF;
  v14 = m_DeviceBase->m_Globals;
  PreviousIrql = 0;
  if ( v13 != 1 )
  {
    if ( !v7 && (v13 != 4 || !BYTE4(m_DeviceBase[1].m_Globals)) )
    {
      if ( v14->FxVerboseOn )
        WPP_IFR_SF_q(v14, 5u, 0xDu, 0xAu, WPP_FxFileObject_cpp_Traceguids, v12);
      FxVerifierDbgBreakPoint(m_DeviceBase->m_Globals);
      v19 = -1073741438;
      goto LABEL_73;
    }
    Tag = v14->Tag;
    ContextSizeOverride = 0LL;
    v111 = Tag;
    v105.u.PoolFlags = 64LL;
    if ( ContextTypeInfo )
    {
      ContextSizeOverride = attributes.ContextSizeOverride;
      if ( !attributes.ContextSizeOverride )
        ContextSizeOverride = *(_QWORD *)(ContextTypeInfo + 16);
    }
    v23 = 208LL;
    id = 0;
    *(_QWORD *)&v105.UsePoolType = 208LL;
    if ( ContextSizeOverride )
    {
      v50 = (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v50 < ContextSizeOverride )
        goto LABEL_72;
      v23 = v50 + 208;
      *(_QWORD *)&v105.UsePoolType = v23;
      v51 = v50 + 208;
      if ( v23 < 0xD0 )
      {
        *(_QWORD *)&v105.UsePoolType = -1LL;
        id = v51 < 0xD0 ? 0xC0000095 : 0;
        goto LABEL_71;
      }
      id = v51 < 0xD0 ? 0xC0000095 : 0;
    }
    if ( v14->FxVerifierHandle )
    {
      v68 = v23 + 48;
      v69 = v23;
      ContextTypeInfo = -1LL;
      if ( v23 + 48 >= v23 )
        ContextTypeInfo = v23 + 48;
      v23 = ContextTypeInfo;
      *(_QWORD *)&v105.UsePoolType = ContextTypeInfo;
      id = v68 < v69 ? 0xC0000095 : 0;
    }
    if ( id >= 0 )
    {
LABEL_23:
      v25 = v14->FxPoolTrackingOn == 0;
      *(_QWORD *)&v105.UsePoolType = 0LL;
      v105.u.PoolFlags = 64LL;
      if ( v25 )
        v26 = 0LL;
      else
        v26 = retaddr;
      v27 = FxPoolAllocator(v14, &v14->FxPoolFrameworks, &v105, v23, Tag, v26);
      v15 = (FxFileObject *)v27;
      if ( v27 )
      {
        if ( v14->FxVerifierHandle )
        {
          v15 = (FxFileObject *)(v27 + 3);
          *v27 = 0LL;
          v27[1] = 0LL;
          v27[2] = 0LL;
          *((_DWORD *)v27 + 8) = 1146058822;
        }
        *(_QWORD *)&v15[1].m_Type = 0LL;
        v15[1].m_Globals = 0LL;
        *(_QWORD *)&v15[1].m_ObjectFlags = 0LL;
        v15[1].m_ChildListHead.Flink = 0LL;
        v15[1].m_ChildListHead.Blink = 0LL;
        v15[1].FxNonPagedObject::FxObject::__vftable = (FxFileObject_vtbl *)v15;
        v28 = attributes.ContextTypeInfo;
        if ( attributes.ContextTypeInfo )
        {
          ContextSize = attributes.ContextSizeOverride;
          if ( !attributes.ContextSizeOverride )
            ContextSize = attributes.ContextTypeInfo->ContextSize;
          memset(&v15[1].m_SpinLock, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
          v28 = attributes.ContextTypeInfo;
        }
        v15[1].m_ChildListHead.Flink = (_LIST_ENTRY *)v28;
      }
      if ( v15 )
      {
        FxNonPagedObject::FxNonPagedObject(v15, 0x1018u, 0xA0u, m_DeviceBase->m_Globals);
        v15->FxNonPagedObject::FxObject::__vftable = (FxFileObject_vtbl *)FxFileObject::`vftable'{for `FxNonPagedObject'};
        v15->IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)FxFileObject::`vftable'{for `IFxHasCallbacks'};
        v15->m_FileObject.m_FileObject = FileObject;
        v15->m_PkgContext = 0LL;
        v15->m_DeviceBase = m_DeviceBase;
        v30 = KeAcquireSpinLockRaiseToDpc(&v15->m_SpinLock.m_Lock);
        v15->m_ObjectFlags |= 2u;
        KeReleaseSpinLock(&v15->m_SpinLock.m_Lock, v30);
        v19 = FxObject::Commit(v15, &attributes, 0LL, m_DeviceBase, 1u);
        if ( v19 >= 0 )
        {
          if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0
            && (m_DeviceObject = (FxVerifierLock *)m_DeviceBase[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
          {
            FxVerifierLock::Lock(m_DeviceObject, &PreviousIrql, v31);
            v32 = PreviousIrql;
          }
          else
          {
            v32 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_NPLock.m_Lock);
          }
          v33 = (_LIST_ENTRY *)&m_DeviceBase[2];
          v34 = m_DeviceBase[2].FxNonPagedObject::FxObject::__vftable;
          p_m_Link = (FxDeviceBase_vtbl **)&v15->m_Link;
          if ( (FxDeviceBase *)v34->~FxObject != &m_DeviceBase[2] )
            __fastfail(3u);
          *p_m_Link = v34;
          v15->m_Link.Blink = v33;
          v34->~FxObject = (void (__fastcall *)(FxObject *))p_m_Link;
          v33->Flink = (_LIST_ENTRY *)p_m_Link;
          if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0
            && (v73 = (FxVerifierLock *)m_DeviceBase[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
          {
            FxVerifierLock::Unlock(v73, v32, (unsigned __int8)v34);
          }
          else
          {
            KeReleaseSpinLock(&m_DeviceBase->m_NPLock.m_Lock, v32);
          }
          if ( v13 == 2 )
          {
            FileObject->FsContext = v15;
          }
          else if ( v13 == 3 )
          {
            FileObject->FsContext2 = v15;
          }
          v16 = 0LL;
          if ( v15->m_ObjectSize )
            v16 = (WDFFILEOBJECT__ *)((unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
          for ( i = this->m_FileObjectInfoHeadList.Blink->Blink; ; i = i->Blink )
          {
            if ( i == &this->m_FileObjectInfoHeadList )
            {
              p_m_FileObjectInfoHeadList = &this->m_FileObjectInfoHeadList;
              goto LABEL_8;
            }
            Blink = i;
            attributes = *(_WDF_OBJECT_ATTRIBUTES *)&i[5].Blink;
            if ( _mm_cvtsi128_si32(*(__m128i *)&attributes.Size) )
            {
              attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
              attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
              attributes.ParentObject = 0LL;
              v19 = FxObjectAllocateContext(v15, &attributes, 1u, 0LL);
              if ( v19 < 0 )
                break;
            }
          }
          v71 = i[9].Blink;
          if ( v71 )
            Flink = (unsigned __int64)v71[1].Flink;
          else
            Flink = (unsigned __int64)this->m_DeviceBase->m_Driver;
          v74 = *(_WORD *)(Flink + 10);
          v75 = this->m_DeviceBase;
          v76 = (const void *)(Flink ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v74 )
            v76 = 0LL;
          v77 = v75->m_ObjectSize;
          v78 = (const void *)((unsigned __int64)v75 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v77 )
            v78 = 0LL;
          WPP_IFR_SF_qqqd(globals, 2u, 0xDu, 0x17u, WPP_FxPkgGeneral_cpp_Traceguids, &i[5].Blink, v78, v76, v19);
          goto LABEL_144;
        }
        FxObject::DeleteFromFailedCreate(v15);
LABEL_73:
        v52 = this->m_DeviceBase;
        v53 = v52->m_ObjectSize;
        v54 = (const void *)((unsigned __int64)v52 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v53 )
          v54 = 0LL;
        WPP_IFR_SF_qd(globals, 2u, 0xDu, 0x16u, WPP_FxPkgGeneral_cpp_Traceguids, v54, v19);
        goto LABEL_65;
      }
LABEL_72:
      v19 = -1073741670;
      goto LABEL_73;
    }
LABEL_71:
    WPP_IFR_SF_DDid(v14, ContextTypeInfo, ContextSizeOverride, v23, InvokeOnSuccess, 0xA0u, 0, ContextSizeOverride, id);
    v23 = *(_QWORD *)&v105.UsePoolType;
    Tag = v111;
    if ( id < 0 )
      goto LABEL_72;
    goto LABEL_23;
  }
  v15 = 0LL;
  v16 = 0LL;
LABEL_8:
  if ( this->m_DriverCreatedQueue || (this->m_Flags & 0xC) != 0 )
  {
    if ( p_m_FileObjectInfoHeadList->Flink == p_m_FileObjectInfoHeadList )
    {
      m_Device = this->m_Device;
      attributes = m_Device->m_RequestAttributes;
    }
    else
    {
      Blink = this->m_FileObjectInfoHeadList.Blink;
      if ( BYTE4(Blink[9].Flink) )
      {
        v57 = Blink[9].Blink;
        *(_LIST_ENTRY *)&attributes.Size = v57[2];
        *(_LIST_ENTRY *)&attributes.EvtDestroyCallback = v57[3];
        *(_LIST_ENTRY *)&attributes.ParentObject = v57[4];
        v37 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v57[5].Flink;
      }
      else
      {
        v36 = this->m_DeviceBase;
        *(_OWORD *)&attributes.Size = *(_OWORD *)&v36[2].m_ExecutionLevel;
        *(_OWORD *)&attributes.EvtDestroyCallback = *(_OWORD *)&v36[3].FxNonPagedObject::FxObject::__vftable;
        *(_OWORD *)&attributes.ParentObject = *(_OWORD *)&v36[3].m_Globals;
        v37 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v36[3].m_ChildListHead.Flink;
      }
      attributes.ContextTypeInfo = v37;
      m_Device = this->m_Device;
    }
    if ( m_Device->m_CxDeviceInfoListHead.Flink != &m_Device->m_CxDeviceInfoListHead )
    {
      attributes.ExecutionLevel = WdfExecutionLevelDispatch;
      attributes.SynchronizationScope = WdfSynchronizationScopeNone;
      attributes.ParentObject = 0LL;
    }
    v19 = FxRequest::_CreateForPackage(m_Device, &attributes, FxIrp->m_Irp, &pRequest);
    if ( v19 >= 0 )
    {
      v39 = pRequest;
      for ( j = this->m_FileObjectInfoHeadList.Blink->Blink; j != &this->m_FileObjectInfoHeadList; j = j->Blink )
      {
        Blink = j;
        if ( BYTE4(j[9].Flink) )
        {
          v82 = j[9].Blink;
          *(_LIST_ENTRY *)&attributes.Size = v82[2];
          *(_LIST_ENTRY *)&attributes.EvtDestroyCallback = v82[3];
          *(_LIST_ENTRY *)&attributes.ParentObject = v82[4];
          v83 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v82[5].Flink;
        }
        else
        {
          v84 = this->m_DeviceBase;
          *(_OWORD *)&attributes.Size = *(_OWORD *)&v84[2].m_ExecutionLevel;
          *(_OWORD *)&attributes.EvtDestroyCallback = *(_OWORD *)&v84[3].FxNonPagedObject::FxObject::__vftable;
          *(_OWORD *)&attributes.ParentObject = *(_OWORD *)&v84[3].m_Globals;
          v83 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v84[3].m_ChildListHead.Flink;
        }
        attributes.ContextTypeInfo = v83;
        if ( attributes.Size )
        {
          attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
          attributes.ParentObject = 0LL;
          attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
          v19 = FxObjectAllocateContext(v39, &attributes, 1u, 0LL);
          if ( v19 < 0 )
          {
            v85 = j[9].Blink;
            v86 = this->m_DeviceBase;
            if ( v85 )
              m_Driver = (unsigned __int64)v85[1].Flink;
            else
              m_Driver = (unsigned __int64)v86->m_Driver;
            v88 = *(_WORD *)(m_Driver + 10);
            v89 = m_Driver ^ 0xFFFFFFFFFFFFFFF8uLL;
            flags = v19;
            v25 = v88 == 0;
            v90 = v86->m_ObjectSize;
            if ( v25 )
              v89 = 0LL;
            v91 = 25;
            v92 = (const void *)((unsigned __int64)v86 ^ 0xFFFFFFFFFFFFFFF8uLL);
            InvokeOnCancel = (_IRP *)v89;
            if ( !v90 )
              v92 = 0LL;
            goto LABEL_169;
          }
          v39 = pRequest;
        }
      }
      if ( KeGetCurrentIrql() <= 1u )
      {
        KeEnterCriticalRegion();
        v110 = 1;
      }
      p_m_Flags = &this->m_Flags;
      if ( (this->m_Flags & 4) != 0 || !this->m_DriverCreatedQueue )
      {
        v25 = this->m_ExecutionLevel == WdfExecutionLevelPassive;
        outputRequest = 0LL;
        if ( v25 )
        {
          if ( KeGetCurrentIrql() >= 2u )
          {
            v19 = -1073741808;
            v93 = this->m_DeviceBase;
            flags = -1073741808;
            v94 = v93->m_ObjectSize;
            v92 = (const void *)((unsigned __int64)v93 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v94 )
              v92 = 0LL;
            v91 = 26;
            InvokeOnCancel = FxIrp->m_Irp;
LABEL_169:
            WPP_IFR_SF_qqd(globals, 2u, 0xDu, v91, WPP_FxPkgGeneral_cpp_Traceguids, v92, InvokeOnCancel, flags);
            goto LABEL_170;
          }
          p_m_Flags = &this->m_Flags;
        }
        v55 = FxIoQueue::QueueRequest(this->m_DefaultQueueForCreates, v39, v41);
        m_DefaultQueueForCreates = this->m_DefaultQueueForCreates;
        v19 = v55;
        if ( v55 < 0 )
        {
          v45 = 27;
LABEL_58:
          v46 = m_DefaultQueueForCreates->m_ObjectSize;
          v47 = (const void *)((unsigned __int64)m_DefaultQueueForCreates ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v46 )
            v47 = 0LL;
          WPP_IFR_SF_qd(globals, 2u, 0xDu, v45, WPP_FxPkgGeneral_cpp_Traceguids, v47, v19);
          goto $RequestIsGone;
        }
        if ( FxIoQueue::GetRequest(m_DefaultQueueForCreates, FileObject, 0LL, &outputRequest) < 0 )
        {
LABEL_180:
          v19 = 259;
$RequestIsGone:
          if ( v110 )
            KeLeaveCriticalRegion();
          return (unsigned int)v19;
        }
        v39 = pRequest;
        v43 = 1;
        LOBYTE(outputRequest) = 1;
      }
      else
      {
        v43 = 0;
      }
      if ( (*p_m_Flags & 4) != 0 )
      {
        for ( k = this->m_FileObjectInfoHeadList.Blink; k != &this->m_FileObjectInfoHeadList; k = k->Blink )
        {
          Blink = k;
          if ( !BYTE4(k[9].Flink) )
            break;
          if ( v15 )
            v15->m_PkgContext = k->Blink;
          if ( v39->m_ObjectSize )
            v62 = (WDFREQUEST__ *)((unsigned __int64)v39 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v62 = 0LL;
          v63 = this->m_DeviceBase;
          v64 = v63->m_ObjectSize;
          v65 = (WDFDEVICE__ *)((unsigned __int64)v63 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v64 )
            v65 = 0LL;
          if ( FxCxFileObjectFileCreate::Invoke((FxCxFileObjectFileCreate *)&k[2], v65, v62, v16) )
            goto LABEL_180;
        }
        v43 = (char)outputRequest;
      }
      if ( this->m_DriverCreatedQueue )
      {
        if ( !v43 )
        {
          v19 = FxIoQueue::QueueRequest(this->m_DriverCreatedQueue, v39, v41);
          if ( v19 >= 0 )
            goto $RequestIsGone;
          m_DefaultQueueForCreates = this->m_DriverCreatedQueue;
          v45 = 29;
          goto LABEL_58;
        }
        v95 = FxIoQueue::ForwardRequest(this->m_DefaultQueueForCreates, this->m_DriverCreatedQueue, v39);
        if ( v95 < 0 )
        {
          m_DriverCreatedQueue = this->m_DriverCreatedQueue;
          v97 = m_DriverCreatedQueue->m_ObjectSize;
          v98 = (const void *)((unsigned __int64)m_DriverCreatedQueue ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v97 )
            v98 = 0LL;
          WPP_IFR_SF_qd(globals, 2u, 0xDu, 0x1Cu, WPP_FxPkgGeneral_cpp_Traceguids, v98, v95);
          FxRequest::Complete(v39, v95);
          v19 = 259;
          goto $RequestIsGone;
        }
      }
      else
      {
        if ( (this->m_Flags & 8) != 0 )
        {
          if ( this->m_CxFileCleanupCloseV2 && v15 )
            v15->m_PkgContext = 0LL;
          if ( v39->m_ObjectSize )
            v56 = (WDFREQUEST__ *)((unsigned __int64)v39 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v56 = 0LL;
          v58 = this->m_DeviceBase;
          v59 = v58->m_ObjectSize;
          v60 = (WDFDEVICE__ *)((unsigned __int64)v58 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v59 )
            v60 = 0LL;
          FxFileObjectFileCreate::Invoke((FxFileObjectFileCreate *)&Blink[1], v60, v56, v16);
          v19 = 259;
          goto $RequestIsGone;
        }
        if ( !BYTE1(this->m_DeviceBase[1].m_ChildEntry.Blink) )
        {
          FxRequest::Complete(v39, 0);
          v19 = 259;
          goto $RequestIsGone;
        }
        FxPkgGeneral::ForwardCreateRequest(this, FxIrp, FxPkgGeneral::_CreateCompletionRoutine2, v39);
      }
      goto LABEL_180;
    }
    v79 = this->m_DeviceBase;
    v80 = v79->m_ObjectSize;
    v81 = (const void *)((unsigned __int64)v79 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v80 )
      v81 = 0LL;
    WPP_IFR_SF_qd(globals, 2u, 0xDu, 0x18u, WPP_FxPkgGeneral_cpp_Traceguids, v81, v19);
LABEL_170:
    if ( pRequest )
      FxObject::DeleteFromFailedCreate(pRequest);
    if ( !v15 )
      goto LABEL_65;
LABEL_144:
    FxFileObject::DeleteFileObjectFromFailedCreate(v15);
LABEL_65:
    FxPkgGeneral::DecrementOpenHandleCount(this);
    FxIrp->m_Irp->IoStatus.Status = v19;
    FxIrp->m_Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(FxIrp->m_Irp, 0);
    FxIrp->m_Irp = 0LL;
    goto $RequestIsGone;
  }
  v17 = FxIrp->m_Irp;
  if ( BYTE1(this->m_DeviceBase[1].m_ChildEntry.Blink) )
  {
    CurrentStackLocation = v17->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    if ( IoSetCompletionRoutineEx(
           this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
           FxIrp->m_Irp,
           FxPkgGeneral::_CreateCompletionRoutine,
           this,
           1u,
           1u,
           1u) < 0 )
    {
      v67 = FxIrp->m_Irp->Tail.Overlay.CurrentStackLocation;
      v67[-1].CompletionRoutine = FxPkgGeneral::_CreateCompletionRoutine;
      v67[-1].Context = this;
      v67[-1].Control = -32;
    }
    return (unsigned int)IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, FxIrp->m_Irp);
  }
  else
  {
    v17->IoStatus.Status = 0;
    v19 = 0;
    FxIrp->m_Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(FxIrp->m_Irp, 0);
    FxIrp->m_Irp = 0LL;
  }
  return (unsigned int)v19;
}
