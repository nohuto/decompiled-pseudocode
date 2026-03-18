/*
 * XREFs of ??1FxWorkItem@@UEAA@XZ @ 0x140040398
 * Callers:
 *     ??_EFxWorkItem@@UEAAPEAXI@Z @ 0x140040360 (--_EFxWorkItem@@UEAAPEAXI@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x140040500 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ?Free@MxWorkItem@@QEAAXXZ @ 0x1400406D8 (-Free@MxWorkItem@@QEAAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxWorkItem::~FxWorkItem(FxWorkItem *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxObject *m_Object; // rcx
  const void *_a1; // rdx

  m_Globals = this->m_Globals;
  this->__vftable = (FxWorkItem_vtbl *)FxWorkItem::`vftable';
  if ( !this->m_RunningDown && this->m_Callback )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xAu, WPP_FxWorkItem_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  m_Object = this->m_Object;
  if ( m_Object )
  {
    m_Object->Release(m_Object, this, 91, "minkernel\\wdf\\framework\\shared\\core\\fxworkitem.cpp");
    this->m_Object = 0LL;
  }
  if ( this->m_WorkItem.m_WorkItem )
    MxWorkItem::Free(&this->m_WorkItem);
  FxNonPagedObject::~FxNonPagedObject(this);
}
