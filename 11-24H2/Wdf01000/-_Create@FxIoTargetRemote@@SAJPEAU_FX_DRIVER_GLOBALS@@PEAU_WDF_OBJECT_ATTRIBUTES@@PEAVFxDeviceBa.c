/*
 * XREFs of ?_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBase@@PEAPEAV1@@Z @ 0x140013A20
 * Callers:
 *     imp_WdfIoTargetCreate @ 0x140013E70 (imp_WdfIoTargetCreate.c)
 * Callees:
 *     WPP_IFR_SF_qqqd @ 0x140003694 (WPP_IFR_SF_qqqd.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140010D70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_DDid @ 0x1400111CC (WPP_IFR_SF_DDid.c)
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140011878 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140012FE8 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x140014068 (--0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 *     ??0FxCREvent@@QEAA@E@Z @ 0x1400141B0 (--0FxCREvent@@QEAA@E@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140015350 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140016CE0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 *     memset @ 0x1400AC800 (memset.c)
 */

__int64 __fastcall FxIoTargetRemote::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxDeviceBase *Device,
        FX_POOL ***Target)
{
  ULONG Tag; // r13d
  unsigned __int64 ContextSize; // rax
  void *level; // r11
  __int64 v11; // rdx
  unsigned __int64 flags; // r9
  unsigned __int64 v13; // r14
  int id; // ebx
  void *v15; // rax
  FX_POOL **v16; // rax
  FX_POOL **v17; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 ContextSizeOverride; // r8
  unsigned __int8 v20; // dl
  signed int v21; // eax
  unsigned int v22; // esi
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned int v26; // ebx
  void *ParentObject; // rdx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v30; // r15
  bool v31; // zf
  unsigned __int16 v32; // ax
  const void *v33; // rcx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rcx
  const void *v36; // rdx
  const _GUID *AssignDriverAsDefaultParent; // [rsp+20h] [rbp-40h]
  __m128i v38; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+98h] [rbp+38h]
  FxObject *pParent; // [rsp+A8h] [rbp+48h] BYREF
  void *hTarget; // [rsp+B8h] [rbp+58h] BYREF

  pParent = 0LL;
  *Target = 0LL;
  if ( Attributes && (ParentObject = Attributes->ParentObject) != 0LL )
  {
    FxObjectHandleGetPtr(FxDriverGlobals, ParentObject, 0x1000u, (void **)&pParent);
    v38.m128i_i64[0] = 0LL;
    v38.m128i_i64[1] = 5379LL;
    m_DeviceBase = pParent->m_DeviceBase;
    if ( !m_DeviceBase )
    {
      v36 = (const void *)((unsigned __int64)pParent ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !pParent->m_ObjectSize )
        v36 = 0LL;
      WPP_IFR_SF_q(pParent->m_Globals, 2u, 0x14u, 0xBu, WPP_FxDeviceBase_cpp_Traceguids, v36);
      v26 = -1073741808;
      WPP_IFR_SF_qd(
        FxDriverGlobals,
        2u,
        0xEu,
        0xAu,
        WPP_FxIoTargetRemote_cpp_Traceguids,
        Attributes->ParentObject,
        -1073741808);
      return v26;
    }
    if ( m_DeviceBase != Device )
    {
      m_ObjectSize = Device->m_ObjectSize;
      v30 = (const void *)((unsigned __int64)Device ^ 0xFFFFFFFFFFFFFFF8uLL);
      v31 = m_ObjectSize == 0;
      v26 = -1073741808;
      v32 = m_DeviceBase->m_ObjectSize;
      if ( v31 )
        v30 = 0LL;
      v33 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v32 )
        v33 = 0LL;
      WPP_IFR_SF_qqqd(
        FxDriverGlobals,
        2u,
        0xEu,
        0xBu,
        WPP_FxIoTargetRemote_cpp_Traceguids,
        Attributes->ParentObject,
        v33,
        v30,
        -1073741808);
      return v26;
    }
  }
  else
  {
    pParent = Device;
  }
  Tag = FxDriverGlobals->Tag;
  v38.m128i_i64[1] = 64LL;
  ContextSize = FxGetContextSize(Attributes);
  v11 = -1LL;
  flags = ContextSize;
  v13 = 560LL;
  id = (int)level;
  if ( ContextSize )
  {
    v24 = (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v24 < flags )
      goto LABEL_26;
    v25 = v24 + 560;
    v13 = -1LL;
    if ( v25 >= 0x230 )
      v13 = v25;
    id = v25 < 0x230 ? 0xC0000095 : 0;
    if ( v25 < 0x230 )
      goto LABEL_25;
  }
  if ( FxDriverGlobals->FxVerifierHandle != (_BYTE)level )
  {
    v34 = v13 + 48;
    v35 = v13;
    if ( v13 + 48 >= v13 )
      v11 = v13 + 48;
    v13 = v11;
    id = v34 < v35 ? 0xC0000095 : 0;
  }
  if ( id < 0 )
  {
LABEL_25:
    WPP_IFR_SF_DDid(
      FxDriverGlobals,
      v11,
      0xC0000095,
      flags,
      AssignDriverAsDefaultParent,
      0x1F8u,
      (unsigned int)level,
      flags,
      id);
    level = 0LL;
    if ( id >= 0 )
      goto LABEL_6;
LABEL_26:
    v26 = -1073741670;
    WPP_IFR_SF_D(FxDriverGlobals, 2u, 0xEu, 0xCu, WPP_FxIoTargetRemote_cpp_Traceguids, 0xC000009A);
    return v26;
  }
LABEL_6:
  v15 = retaddr;
  v38.m128i_i64[0] = 0LL;
  v38.m128i_i64[1] = 64LL;
  if ( FxDriverGlobals->FxPoolTrackingOn == (_BYTE)level )
    v15 = level;
  v16 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, &v38, v13, Tag, v15);
  v17 = v16;
  if ( v16 )
  {
    if ( FxDriverGlobals->FxVerifierHandle )
    {
      v17 = v16 + 6;
      *(_OWORD *)v16 = 0LL;
      *((_OWORD *)v16 + 1) = 0LL;
      *((_OWORD *)v16 + 2) = 0LL;
      *((_DWORD *)v16 + 8) = 1146058822;
    }
    *((_OWORD *)v17 + 32) = 0LL;
    *((_OWORD *)v17 + 33) = 0LL;
    *((_OWORD *)v17 + 34) = 0LL;
    v17[64] = (FX_POOL *)v17;
    if ( Attributes )
    {
      ContextTypeInfo = Attributes->ContextTypeInfo;
      if ( ContextTypeInfo )
      {
        ContextSizeOverride = Attributes->ContextSizeOverride;
        if ( !ContextSizeOverride )
          ContextSizeOverride = ContextTypeInfo->ContextSize;
        memset(v17 + 70, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      v17[68] = (FX_POOL *)Attributes->ContextTypeInfo;
    }
  }
  if ( !v17 )
    goto LABEL_26;
  FxIoTarget::FxIoTarget((FxIoTarget *)v17, FxDriverGlobals, 0x1F8u);
  *v17 = (FX_POOL *)FxIoTargetRemote::`vftable';
  v17[45] = 0LL;
  v17[46] = 0LL;
  v17[47] = 0LL;
  FxCREvent::FxCREvent((FxCREvent *)v17 + 12, v20);
  memset(v17 + 54, 0, 0x48uLL);
  *((_BYTE *)v17 + 168) = 0;
  v17[52] = 0LL;
  *((_BYTE *)v17 + 424) = 1;
  v17[43] = 0LL;
  v17[45] = 0LL;
  v17[46] = 0LL;
  v17[47] = 0LL;
  v17[44] = 0LL;
  v17[36] = (FX_POOL *)Device->m_Driver;
  v17[12] = (FX_POOL *)Device;
  v17[37] = (FX_POOL *)Device->m_DeviceObject.m_DeviceObject;
  Device->AddIoTarget(Device, (FxIoTarget *)v17);
  v21 = FxObject::Commit((FxObject *)v17, Attributes, &hTarget, pParent, 1u);
  v22 = v21;
  if ( v21 < 0 )
  {
    WPP_IFR_SF_D(FxDriverGlobals, 2u, 0xEu, 0xDu, WPP_FxIoTargetRemote_cpp_Traceguids, v21);
    FxObject::DeleteFromFailedCreate((FxObject *)v17);
  }
  else
  {
    *Target = v17;
  }
  return v22;
}
