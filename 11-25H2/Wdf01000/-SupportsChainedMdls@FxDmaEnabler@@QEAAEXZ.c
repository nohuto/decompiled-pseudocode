/*
 * XREFs of ?SupportsChainedMdls@FxDmaEnabler@@QEAAEXZ @ 0x14006A414
 * Callers:
 *     imp_WdfDmaTransactionInitializeUsingRequest @ 0x140086C90 (imp_WdfDmaTransactionInitializeUsingRequest.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxDmaEnabler::SupportsChainedMdls(FxDmaEnabler *this)
{
  return this->m_SimplexAdapterInfo.DeviceDescription.Version == 3 || (*((_BYTE *)this + 380) & 0xC) != 4;
}
