/*
 * XREFs of ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x140020A70
 * Callers:
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x14001FB80 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x140011A74 (WPP_IFR_SF_qq.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x140013630 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z @ 0x140013E20 (-IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x140021B80 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_ @ 0x14003842C (WPP_IFR_SF_.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x14003CB50 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x140044FC0 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgGeneral::OnClose(FxPkgGeneral *this, FxIrp *FxIrp, unsigned __int8 a3)
{
  _QWORD *p_Type; // rsi
  __int64 v6; // rbx
  FxDeviceBase *m_DeviceBase; // rsi
  int Next; // r15d
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  int v10; // eax
  char v11; // al
  FxDeviceBase_vtbl *v12; // r14
  unsigned __int8 v13; // bp
  unsigned __int8 v14; // r8
  FxDeviceBase *v15; // rcx
  FxDeviceBase_vtbl *v16; // rdx
  FxDeviceBase_vtbl *v17; // rax
  unsigned int v18; // ebp
  _LIST_ENTRY *GetDefaultIoTarget; // rax
  _LIST_ENTRY *Flink; // rbx
  _IRP *m_Irp; // rax
  char v22; // r13
  FxDeviceBase *v23; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _FX_DRIVER_GLOBALS *v25; // r15
  int v26; // eax
  _FILE_OBJECT *_a1; // r14
  int FileObjectFromWdm; // eax
  FxFileObject *FsContext; // rsi
  char m_ObjectFlags; // al
  KIRQL v31; // r8
  _LIST_ENTRY *v32; // rdx
  _LIST_ENTRY *Blink; // rcx
  FxDeviceBase *v34; // rax
  _IRP *v35; // rax
  char v36; // r14
  unsigned __int64 v38; // rcx
  _DEVICE_OBJECT *v39; // rcx
  NTSTATUS v40; // eax
  unsigned __int64 v41; // r13
  _LIST_ENTRY *v42; // rcx
  _LIST_ENTRY *v43; // rcx
  FxVerifierLock *m_DeviceObject; // rcx
  FxVerifierLock *v45; // rcx
  FxVerifierLock *v46; // rcx
  FxVerifierLock *v47; // rcx
  void (__fastcall *_a2)(FxDeviceBase *, FxDeviceInfoFlags); // rax
  unsigned int v49; // edx
  _FX_DRIVER_GLOBALS *v50; // rbx
  unsigned int v51; // edx
  FxVerifierDownlevelOption v52; // r9d
  _FX_DRIVER_GLOBALS *v53; // rcx
  FxDeviceBase *v54; // rcx
  FxFileObject *ppFxFileObject; // [rsp+40h] [rbp-48h] BYREF
  PVOID Tag; // [rsp+48h] [rbp-40h]
  unsigned __int8 v57; // [rsp+98h] [rbp+10h] BYREF
  _FX_DRIVER_GLOBALS *PreviousIrql; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 v59; // [rsp+A8h] [rbp+20h] BYREF

  p_Type = &FxIrp->m_Irp->Type;
  Tag = p_Type;
  v59 = 0LL;
  v6 = *(_QWORD *)(p_Type[23] + 48LL);
  if ( !v6 || (*(_DWORD *)(v6 + 80) & 0x100) == 0 )
  {
    m_DeviceBase = this->m_DeviceBase;
    Next = (int)m_DeviceBase[1].m_DisposeSingleEntry.Next;
    m_Globals = m_DeviceBase->m_Globals;
    v10 = Next & 0x7FFFFFFF;
    PreviousIrql = m_Globals;
    if ( (Next & 0x7FFFFFFF) != 1 )
    {
      if ( v6 )
      {
        if ( v10 == 2 )
        {
          v12 = *(FxDeviceBase_vtbl **)(v6 + 24);
        }
        else
        {
          if ( v10 != 3 )
            goto LABEL_7;
          v12 = *(FxDeviceBase_vtbl **)(v6 + 32);
        }
LABEL_44:
        if ( !v12 && Next >= 0 )
        {
          WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0x11u, WPP_FxFileObject_cpp_Traceguids, (const void *)v6);
          WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0x12u, WPP_FxFileObject_cpp_Traceguids);
          if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v49, 9u) )
          {
            FxVerifierDbgBreakPoint(m_DeviceBase->m_Globals);
            goto LABEL_15;
          }
        }
        v18 = 0;
        if ( v12 )
        {
          v38 = 0LL;
          if ( WORD1(v12->~FxObject) )
            v38 = (unsigned __int64)v12 ^ 0xFFFFFFFFFFFFFFF8uLL;
          GetDefaultIoTarget = (_LIST_ENTRY *)v12->GetDefaultIoTarget;
          v59 = v38;
          if ( !GetDefaultIoTarget )
            GetDefaultIoTarget = &this->m_FileObjectInfoHeadList;
          goto LABEL_18;
        }
LABEL_16:
        for ( GetDefaultIoTarget = this->m_FileObjectInfoHeadList.Blink;
              GetDefaultIoTarget != &this->m_FileObjectInfoHeadList;
              GetDefaultIoTarget = GetDefaultIoTarget->Blink )
        {
          if ( !LODWORD(GetDefaultIoTarget[9].Flink) && GetDefaultIoTarget[2].Blink )
          {
            GetDefaultIoTarget = GetDefaultIoTarget->Blink;
            break;
          }
        }
LABEL_18:
        Flink = GetDefaultIoTarget->Flink;
        if ( GetDefaultIoTarget->Flink != &this->m_FileObjectInfoHeadList )
        {
          v41 = v59;
          do
          {
            if ( Flink[4].Blink )
            {
              v42 = Flink[4].Flink;
              LOBYTE(v59) = 0;
              if ( v42 )
                ((void (__fastcall *)(_LIST_ENTRY *, unsigned __int64 *))v42->Flink[1].Flink)(v42, &v59);
              ((void (__fastcall *)(unsigned __int64))Flink[4].Blink)(v41);
              v43 = Flink[4].Flink;
              if ( v43 )
                ((void (__fastcall *)(_LIST_ENTRY *, _QWORD))v43->Flink[1].Blink)(v43, (unsigned __int8)v59);
            }
            Flink = Flink->Flink;
          }
          while ( Flink != &this->m_FileObjectInfoHeadList );
        }
        m_Irp = FxIrp->m_Irp;
        v22 = 0;
        v23 = this->m_DeviceBase;
        ppFxFileObject = 0LL;
        CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
        v25 = v23->m_Globals;
        v26 = (__int64)v23[1].m_DisposeSingleEntry.Next & 0x7FFFFFFF;
        _a1 = CurrentStackLocation->FileObject;
        if ( v26 == 1 )
          goto LABEL_32;
        if ( _a1 )
        {
          if ( v26 == 2 )
          {
            FsContext = (FxFileObject *)_a1->FsContext;
            ppFxFileObject = FsContext;
            _a1->FsContext = 0LL;
            goto LABEL_57;
          }
          if ( v26 == 3 )
          {
            FsContext = (FxFileObject *)_a1->FsContext2;
            ppFxFileObject = FsContext;
            _a1->FsContext2 = 0LL;
            goto LABEL_57;
          }
        }
        else if ( v26 != 4 )
        {
          if ( v25->FxVerboseOn )
            WPP_IFR_SF_(v25, 5u, 0xDu, 0xBu, WPP_FxFileObject_cpp_Traceguids);
          FxVerifierDbgBreakPoint(v23->m_Globals);
          goto LABEL_32;
        }
        FileObjectFromWdm = FxFileObject::_GetFileObjectFromWdm(
                              (FxDevice *)v23,
                              WdfFileObjectWdfCannotUseFsContexts,
                              CurrentStackLocation->FileObject,
                              &ppFxFileObject);
        FsContext = ppFxFileObject;
        if ( FileObjectFromWdm >= 0 && ppFxFileObject )
          goto LABEL_25;
        WPP_IFR_SF_q(v25, 2u, 0x12u, 0xCu, WPP_FxFileObject_cpp_Traceguids, _a1);
        WPP_IFR_SF_(v25, 2u, 0x12u, 0xDu, WPP_FxFileObject_cpp_Traceguids);
        FxVerifierDbgBreakPoint(v23->m_Globals);
LABEL_57:
        if ( !FsContext )
        {
LABEL_32:
          p_Type = Tag;
          goto $Passthru;
        }
LABEL_25:
        m_ObjectFlags = v23->m_ObjectFlags;
        LOBYTE(PreviousIrql) = 0;
        if ( m_ObjectFlags < 0 && (m_DeviceObject = (FxVerifierLock *)v23[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
        {
          FxVerifierLock::Lock(m_DeviceObject, (unsigned __int8 *)&PreviousIrql, a3);
          v31 = (unsigned __int8)PreviousIrql;
        }
        else
        {
          v31 = KeAcquireSpinLockRaiseToDpc(&v23->m_NPLock.m_Lock);
          LOBYTE(PreviousIrql) = v31;
        }
        v32 = FsContext->m_Link.Flink;
        if ( v32->Blink != &FsContext->m_Link || (Blink = FsContext->m_Link.Blink, Blink->Flink != &FsContext->m_Link) )
          __fastfail(3u);
        Blink->Flink = v32;
        v32->Blink = Blink;
        if ( SLOBYTE(v23->m_ObjectFlags) < 0 && (v45 = (FxVerifierLock *)v23[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
          FxVerifierLock::Unlock(v45, v31, v31);
        else
          KeReleaseSpinLock(&v23->m_NPLock.m_Lock, v31);
        FsContext->DeleteObject(FsContext);
        goto LABEL_32;
      }
      if ( BYTE4(m_DeviceBase[1].m_Globals) && v10 == 4 )
      {
LABEL_7:
        v11 = m_DeviceBase->m_ObjectFlags;
        v12 = 0LL;
        v57 = 0;
        if ( v11 < 0 && (v46 = (FxVerifierLock *)m_DeviceBase[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
        {
          FxVerifierLock::Lock(v46, &v57, a3);
          v13 = v57;
        }
        else
        {
          v13 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_NPLock.m_Lock);
          v57 = v13;
        }
        v15 = m_DeviceBase + 2;
        v16 = m_DeviceBase[2].FxNonPagedObject::FxObject::__vftable;
        v17 = v16;
        if ( v6 )
        {
          while ( v17 != (FxDeviceBase_vtbl *)v15 )
          {
            if ( v17[-1].SetDeviceTelemetryInfoFlags == (void (__fastcall *)(FxDeviceBase *, FxDeviceInfoFlags))v6 )
              goto LABEL_40;
            v17 = (FxDeviceBase_vtbl *)v17->SelfDestruct;
          }
        }
        else
        {
LABEL_40:
          v12 = v17 - 1;
          if ( v17 != (FxDeviceBase_vtbl *)144 )
          {
LABEL_41:
            if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0
              && (v47 = (FxVerifierLock *)m_DeviceBase[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
            {
              FxVerifierLock::Unlock(v47, v13, v14);
            }
            else
            {
              KeReleaseSpinLock(&m_DeviceBase->m_NPLock.m_Lock, v13);
            }
            m_Globals = PreviousIrql;
            goto LABEL_44;
          }
        }
        if ( BYTE4(m_DeviceBase[1].m_Globals)
          && m_DeviceBase->m_DeviceObject.m_DeviceObject->DeviceType == 27
          && v16 != (FxDeviceBase_vtbl *)v15 )
        {
          v12 = v16 - 1;
          if ( v16 == (FxDeviceBase_vtbl *)144 )
            _a2 = 0LL;
          else
            _a2 = v12->SetDeviceTelemetryInfoFlags;
          WPP_IFR_SF_qq(PreviousIrql, 3u, 0x12u, 0xFu, WPP_FxFileObject_cpp_Traceguids, (const void *)v6, _a2);
          WPP_IFR_SF_(PreviousIrql, 3u, 0x12u, 0x10u, WPP_FxFileObject_cpp_Traceguids);
        }
        goto LABEL_41;
      }
      if ( Next >= 0 )
      {
        WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0xEu, WPP_FxFileObject_cpp_Traceguids);
        FxVerifierDbgBreakPoint(m_DeviceBase->m_Globals);
        v18 = -1073741823;
        goto LABEL_16;
      }
    }
LABEL_15:
    v18 = 0;
    goto LABEL_16;
  }
  v22 = 1;
  v18 = 0;
$Passthru:
  v34 = this->m_DeviceBase;
  if ( BYTE1(v34[1].m_ChildEntry.Blink) )
  {
    v35 = FxIrp->m_Irp;
    ++v35->CurrentLocation;
    ++v35->Tail.Overlay.CurrentStackLocation;
    v18 = IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, FxIrp->m_Irp);
    v36 = 0;
  }
  else
  {
    v39 = v34->m_DeviceObject.m_DeviceObject;
    v36 = 0;
    if ( *(_QWORD *)&v34[3].m_SpinLock.m_DbgFlagIsInitialized && ((__int64)v39[1].CurrentIrp & 1) == 0 )
    {
      v40 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&v39[1], FxIrp->m_Irp, a5, 1u, 0x20u);
      if ( v40 < 0 )
      {
        v50 = this->m_Globals;
        WPP_IFR_SF_qd(v50, 2u, 0xDu, 0x1Eu, WPP_FxPkgGeneral_cpp_Traceguids, FxIrp->m_Irp, v40);
        if ( _FX_DRIVER_GLOBALS::IsVerificationEnabled(v50, v51, 9u, v52) )
          FxVerifierDbgBreakPoint(v53);
      }
      else
      {
        v36 = 1;
      }
    }
    FxIrp->m_Irp->IoStatus.Status = v18;
    FxIrp->m_Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(FxIrp->m_Irp, 0);
    FxIrp->m_Irp = 0LL;
  }
  if ( !v22 && _InterlockedExchangeAdd(&this->m_OpenHandleCount, 0xFFFFFFFF) == 1 )
  {
    v54 = this->m_DeviceBase;
    if ( BYTE5(v54[1].m_Globals) )
      FxObject::DeleteObject(v54);
  }
  if ( v36 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], p_Type, 0x20u);
  return v18;
}
