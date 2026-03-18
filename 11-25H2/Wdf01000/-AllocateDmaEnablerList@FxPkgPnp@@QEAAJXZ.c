/*
 * XREFs of ?AllocateDmaEnablerList@FxPkgPnp@@QEAAJXZ @ 0x1400A7228
 * Callers:
 *     ?AllocateDmaEnablerList@FxDevice@@UEAAJXZ @ 0x140094CD0 (-AllocateDmaEnablerList@FxDevice@@UEAAJXZ.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x140022C80 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140036B40 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 */

__int64 __fastcall FxPkgPnp::AllocateDmaEnablerList(FxPkgPnp *this, __int64 a2, unsigned __int8 a3)
{
  unsigned int v3; // ebx
  unsigned __int8 v6; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v8; // rax
  FX_POOL **v9; // rax
  FxSpinLockTransactionedList *v10; // rcx
  _QWORD *v11; // rax
  __m128i v12; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  irql = 0;
  if ( this->m_DmaEnablerList )
    return 0LL;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( !this->m_DmaEnablerList )
  {
    m_Globals = this->m_Globals;
    v8 = retaddr;
    v12.m128i_i64[0] = 0LL;
    v12.m128i_i64[1] = 64LL;
    if ( !m_Globals->FxPoolTrackingOn )
      v8 = 0LL;
    v9 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v12, 0x48uLL, m_Globals->Tag, v8);
    v10 = (FxSpinLockTransactionedList *)v9;
    if ( v9 )
    {
      *((_DWORD *)v9 + 12) = 0;
      *((_WORD *)v9 + 26) = 0;
      *((_BYTE *)v9 + 54) = 0;
      v9[5] = 0LL;
      v11 = v9 + 1;
      v11[1] = v11;
      *v11 = v11;
      v10->m_TransactionHead.Blink = &v10->m_TransactionHead;
      v10->m_TransactionHead.Flink = &v10->m_TransactionHead;
      v10->__vftable = (FxSpinLockTransactionedList_vtbl *)FxSpinLockTransactionedList::`vftable';
      v10->m_ListLock.m_Lock = 0LL;
      v10->m_ListLock.m_DbgFlagIsInitialized = 1;
      this->m_DmaEnablerList = v10;
    }
    else
    {
      v3 = -1073741670;
    }
  }
  FxNonPagedObject::Unlock(this, irql, v6);
  return v3;
}
