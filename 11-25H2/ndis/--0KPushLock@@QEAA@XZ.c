/*
 * XREFs of ??0KPushLock@@QEAA@XZ @ 0x1401735C0
 * Callers:
 *     ??0_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x14006E6A0 (--0_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 *     ?ndisPDInitialize@@YAJXZ @ 0x140197BD8 (-ndisPDInitialize@@YAJXZ.c)
 *     ?ndisBindInitialize@@YAJXZ @ 0x140198D4C (-ndisBindInitialize@@YAJXZ.c)
 * Callees:
 *     <none>
 */

KPushLock *__fastcall KPushLock::KPushLock(KPushLock *this)
{
  this->m_Lock.Value = 0LL;
  return this;
}
