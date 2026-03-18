/*
 * XREFs of ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x140021B80
 * Callers:
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x140020A70 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z @ 0x140021E28 (-_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x140011A74 (WPP_IFR_SF_qq.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x140013630 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_ @ 0x14003842C (WPP_IFR_SF_.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x14003CB50 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxFileObject::_GetFileObjectFromWdm(
        FxDevice *pDevice,
        _WDF_FILEOBJECT_CLASS FileObjectClass,
        _FILE_OBJECT *pWdmFileObject,
        FxFileObject **ppFxFileObject)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  __int32 v5; // eax
  char m_ObjectFlags; // al
  _FILE_OBJECT *m_FileObject; // rbp
  FxFileObject *FsContext; // rsi
  KIRQL v13; // r12
  _LIST_ENTRY *p_m_FileObjectListHead; // rdx
  _LIST_ENTRY *Flink; // r8
  _LIST_ENTRY *v16; // rcx
  FxVerifierLock *m_PkgWmi; // rcx
  FxVerifierLock *v19; // rcx
  unsigned int v20; // edx
  _FILE_OBJECT *_a2; // [rsp+30h] [rbp-48h]
  _FX_DRIVER_GLOBALS *globals; // [rsp+80h] [rbp+8h]
  unsigned __int8 irql; // [rsp+88h] [rbp+10h] BYREF

  m_Globals = pDevice->m_Globals;
  v5 = FileObjectClass & 0x7FFFFFFF;
  globals = m_Globals;
  if ( (FileObjectClass & 0x7FFFFFFF) == 1 )
    goto LABEL_13;
  if ( pWdmFileObject )
  {
    if ( v5 == 2 )
    {
      FsContext = (FxFileObject *)pWdmFileObject->FsContext;
      goto LABEL_18;
    }
    if ( v5 == 3 )
    {
      FsContext = (FxFileObject *)pWdmFileObject->FsContext2;
      goto LABEL_18;
    }
LABEL_5:
    m_ObjectFlags = pDevice->m_ObjectFlags;
    m_FileObject = 0LL;
    FsContext = 0LL;
    irql = 0;
    if ( m_ObjectFlags < 0 && (m_PkgWmi = (FxVerifierLock *)pDevice[-1].m_PkgWmi) != 0LL )
    {
      FxVerifierLock::Lock(m_PkgWmi, &irql, (unsigned __int8)pWdmFileObject);
      v13 = irql;
    }
    else
    {
      v13 = KeAcquireSpinLockRaiseToDpc(&pDevice->m_NPLock.m_Lock);
    }
    p_m_FileObjectListHead = &pDevice->m_FileObjectListHead;
    Flink = pDevice->m_FileObjectListHead.Flink;
    v16 = Flink;
    if ( pWdmFileObject )
    {
      while ( v16 != p_m_FileObjectListHead )
      {
        if ( (_FILE_OBJECT *)v16[-1].Flink == pWdmFileObject )
          goto LABEL_14;
        v16 = v16->Flink;
      }
    }
    else
    {
LABEL_14:
      FsContext = (FxFileObject *)&v16[-9];
      if ( v16 != (_LIST_ENTRY *)144 )
        goto LABEL_15;
    }
    if ( pDevice->m_Exclusive
      && pDevice->m_DeviceObject.m_DeviceObject->DeviceType == 27
      && Flink != p_m_FileObjectListHead )
    {
      FsContext = (FxFileObject *)&Flink[-9];
      if ( Flink != (_LIST_ENTRY *)144 )
        m_FileObject = FsContext->m_FileObject.m_FileObject;
      _a2 = m_FileObject;
      m_Globals = globals;
      WPP_IFR_SF_qq(globals, 3u, 0x12u, 0xFu, WPP_FxFileObject_cpp_Traceguids, pWdmFileObject, _a2);
      WPP_IFR_SF_(globals, 3u, 0x12u, 0x10u, WPP_FxFileObject_cpp_Traceguids);
      goto LABEL_16;
    }
LABEL_15:
    m_Globals = globals;
LABEL_16:
    if ( SLOBYTE(pDevice->m_ObjectFlags) < 0 && (v19 = (FxVerifierLock *)pDevice[-1].m_PkgWmi) != 0LL )
      FxVerifierLock::Unlock(v19, v13, (unsigned __int8)Flink);
    else
      KeReleaseSpinLock(&pDevice->m_NPLock.m_Lock, v13);
LABEL_18:
    if ( !FsContext && FileObjectClass >= WdfFileObjectInvalid )
    {
      WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0x11u, WPP_FxFileObject_cpp_Traceguids, pWdmFileObject);
      WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0x12u, WPP_FxFileObject_cpp_Traceguids);
      if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v20, 9u) )
        FxVerifierDbgBreakPoint(pDevice->m_Globals);
    }
    *ppFxFileObject = FsContext;
    return 0LL;
  }
  if ( pDevice->m_Exclusive && v5 == 4 )
    goto LABEL_5;
  if ( FileObjectClass < WdfFileObjectInvalid )
  {
LABEL_13:
    *ppFxFileObject = 0LL;
    return 0LL;
  }
  WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0xEu, WPP_FxFileObject_cpp_Traceguids);
  FxVerifierDbgBreakPoint(pDevice->m_Globals);
  return 3221225473LL;
}
