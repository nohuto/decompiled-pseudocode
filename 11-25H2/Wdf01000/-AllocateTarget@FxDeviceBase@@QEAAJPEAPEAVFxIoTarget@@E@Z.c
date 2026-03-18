/*
 * XREFs of ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x14004EF68
 * Callers:
 *     ?PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ @ 0x14004F254 (-PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ.c)
 *     imp_WdfDeviceMiniportCreate @ 0x14007F6B0 (imp_WdfDeviceMiniportCreate.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140024C90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x14003754C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x140037570 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x140039D48 (--0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 *     ?Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z @ 0x14004F158 (-Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z.c)
 *     ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GG@Z @ 0x14007A9E4 (--0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GG@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxDeviceBase::AllocateTarget(
        FxDeviceBase *this,
        FxIoTarget **Target,
        unsigned __int8 SelfTarget,
        __int64 a4)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FX_POOL **v8; // rax
  FxIoTarget *v9; // rax
  FxIoTarget *v10; // rbx
  int v11; // eax
  int v12; // esi
  int _a2; // ecx
  __int64 result; // rax
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rdi
  unsigned __int16 v17; // cx
  unsigned __int16 v18; // r9
  const void *v19; // rdi
  bool v20; // zf
  FX_POOL **v21; // rax
  unsigned __int16 v22; // ax

  p_m_Globals = &this->m_Globals;
  m_Globals = this->m_Globals;
  if ( SelfTarget )
  {
    v21 = FxObjectHandleAlloc2(m_Globals, (unsigned __int64)Target, 0x160uLL, a4, 0LL, 0, FxObjectTypeExternal);
    v10 = (FxIoTarget *)v21;
    if ( v21 )
    {
      FxIoTarget::FxIoTarget((FxIoTarget *)v21, *p_m_Globals, 0x160u, 0x1205u);
      v10[1].__vftable = 0LL;
      v10->__vftable = (FxIoTarget_vtbl *)FxIoTargetSelf::`vftable';
      goto LABEL_5;
    }
    v10 = 0LL;
  }
  else
  {
    v8 = FxObjectHandleAlloc2(m_Globals, (unsigned __int64)Target, 0x158uLL, a4, 0LL, 0, FxObjectTypeExternal);
    if ( !v8 )
    {
      v10 = 0LL;
      goto LABEL_11;
    }
    FxIoTarget::FxIoTarget((FxIoTarget *)v8, *p_m_Globals, 0x158u);
    v10 = v9;
  }
  if ( !v10 )
  {
LABEL_11:
    v12 = -1073741670;
    m_ObjectSize = this->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(*p_m_Globals, 2u, 0x12u, 0xDu, WPP_FxDeviceBase_cpp_Traceguids, _a1, -1073741670);
    goto LABEL_9;
  }
LABEL_5:
  v11 = this->AddIoTarget(this, v10);
  v12 = v11;
  if ( v11 < 0 )
  {
    v17 = this->m_ObjectSize;
    v18 = 14;
    v19 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v20 = v17 == 0;
    _a2 = v11;
  }
  else
  {
    v12 = FxIoTarget::Init(v10, this);
    _a2 = v12;
    if ( v12 < 0 )
    {
      v18 = 15;
    }
    else
    {
      v12 = FxObject::Commit(v10, 0LL, 0LL, this, 1u);
      _a2 = v12;
      if ( v12 >= 0 )
      {
        v12 = 0;
        goto LABEL_9;
      }
      v18 = 16;
    }
    v22 = this->m_ObjectSize;
    v19 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v20 = v22 == 0;
  }
  if ( v20 )
    v19 = 0LL;
  WPP_IFR_SF_qd(*p_m_Globals, 2u, 0x12u, v18, WPP_FxDeviceBase_cpp_Traceguids, v19, _a2);
  FxObject::DeleteFromFailedCreate(v10);
  v10 = 0LL;
LABEL_9:
  result = (unsigned int)v12;
  *Target = v10;
  return result;
}
