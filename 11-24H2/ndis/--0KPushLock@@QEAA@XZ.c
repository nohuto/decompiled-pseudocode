/*
 * XREFs of ??0KPushLock@@QEAA@XZ @ 0x140166FD0
 * Callers:
 *     ?ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x14007E540 (-ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisPDInitialize@@YAJXZ @ 0x14018CBA0 (-ndisPDInitialize@@YAJXZ.c)
 *     ?ndisBindInitialize@@YAJXZ @ 0x14018DD14 (-ndisBindInitialize@@YAJXZ.c)
 * Callees:
 *     <none>
 */

KPushLock *__fastcall KPushLock::KPushLock(KPushLock *this)
{
  this->m_Lock.Value = 0LL;
  return this;
}
