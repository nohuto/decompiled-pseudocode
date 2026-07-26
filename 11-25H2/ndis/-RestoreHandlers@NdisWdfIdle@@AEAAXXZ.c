/*
 * XREFs of ?RestoreHandlers@NdisWdfIdle@@AEAAXXZ @ 0x1400B7B4C
 * Callers:
 *     ?HandlersRestoredEntry@EntryFuncs@?$IdleStateMachine@VNdisWdfIdle@@@@SAGPEAX@Z @ 0x1400B7930 (-HandlersRestoredEntry@EntryFuncs@-$IdleStateMachine@VNdisWdfIdle@@@@SAGPEAX@Z.c)
 *     ?HandlersRestoredTimeLimitedEntry@EntryFuncs@?$IdleStateMachine@VNdisWdfIdle@@@@SAGPEAX@Z @ 0x1400B7950 (-HandlersRestoredTimeLimitedEntry@EntryFuncs@-$IdleStateMachine@VNdisWdfIdle@@@@SAGPEAX@Z.c)
 *     ?RestoreHandlersCleanupEntry@EntryFuncs@?$IdleStateMachine@VNdisWdfIdle@@@@SAGPEAX@Z @ 0x1400B7BC0 (-RestoreHandlersCleanupEntry@EntryFuncs@-$IdleStateMachine@VNdisWdfIdle@@@@SAGPEAX@Z.c)
 * Callees:
 *     ?ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140055260 (-ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005A650 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMRestoreFilterHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1400A6D6C (-ndisMRestoreFilterHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

void __fastcall NdisWdfIdle::RestoreHandlers(NdisWdfIdle *this)
{
  _NDIS_MINIPORT_BLOCK *m_miniport; // rcx
  KIRQL v3; // dl
  KIRQL NewIrql; // [rsp+30h] [rbp+8h] BYREF

  NewIrql = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(this->m_miniport, &NewIrql);
  ndisMRestoreOpenHandlers(this->m_miniport, 8u);
  ndisMRestoreFilterHandlers(this->m_miniport);
  m_miniport = this->m_miniport;
  v3 = NewIrql;
  m_miniport->MiniportThread = 0LL;
  KeReleaseSpinLock(&m_miniport->Lock, v3);
}
