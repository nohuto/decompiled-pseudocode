/*
 * XREFs of ?SupportsChainedMdls@FxDmaEnabler@@QEAAEXZ @ 0x140068A64
 * Callers:
 *     imp_WdfDmaTransactionInitializeUsingRequest @ 0x140086C80 (imp_WdfDmaTransactionInitializeUsingRequest.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxDmaEnabler::SupportsChainedMdls(FxDmaEnabler *this)
{
  return this->m_SimplexAdapterInfo.DeviceDescription.Version == 3 || (*((_BYTE *)this + 380) & 0xC) != 4;
}
