/*
 * XREFs of ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEXZ @ 0x140019DB4
 * Callers:
 *     ?PowerWakingDmaEnable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x140019D90 (-PowerWakingDmaEnable@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingDmaEnableNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x14007A9C0 (-PowerWakingDmaEnableNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerD0StartingDmaEnable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x14007AB50 (-PowerD0StartingDmaEnable@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14001A2AC (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?PowerDmaPowerUp@FxPkgPnp@@IEAAEXZ @ 0x14001A548 (-PowerDmaPowerUp@FxPkgPnp@@IEAAEXZ.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14001A5C8 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall FxPkgPnp::PowerDmaEnableAndScan(FxPkgPnp *this)
{
  FxEnumerationInfo *m_EnumInfo; // rcx
  _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY *p_m_ListHead; // rax
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v6; // rax
  __int16 v7; // dx
  unsigned __int64 v8; // rcx

  if ( !FxPkgPnp::PowerDmaPowerUp(this) )
    return 0;
  m_EnumInfo = this->m_EnumInfo;
  if ( m_EnumInfo )
  {
    FxTransactionedList::LockForEnum(&m_EnumInfo->m_ChildListList, this->m_Globals);
    Flink = 0LL;
LABEL_4:
    p_m_ListHead = &this->m_EnumInfo->m_ChildListList.m_ListHead;
    if ( !Flink )
    {
      Flink = p_m_ListHead->Flink;
      goto LABEL_6;
    }
    while ( 1 )
    {
      Flink = Flink->Flink;
LABEL_6:
      if ( Flink == p_m_ListHead )
        break;
      if ( LODWORD(Flink[2].Flink) == 1 )
      {
        if ( !Flink )
          break;
        Blink = Flink[2].Blink;
        v6 = Blink[12].Flink;
        v7 = WORD1(Blink->Blink);
        if ( v6 )
        {
          v8 = (unsigned __int64)Blink ^ 0xFFFFFFFFFFFFFFF8uLL;
          if ( !v7 )
            v8 = 0LL;
          ((void (__fastcall *)(unsigned __int64))v6)(v8);
        }
        goto LABEL_4;
      }
    }
    FxTransactionedList::UnlockFromEnum(&this->m_EnumInfo->m_ChildListList, this->m_Globals);
  }
  return 1;
}
