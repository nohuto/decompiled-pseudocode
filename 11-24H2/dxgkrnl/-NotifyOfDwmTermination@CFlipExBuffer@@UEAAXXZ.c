/*
 * XREFs of ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x14009D8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ @ 0x14001F72C (-SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ.c)
 *     ?ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ @ 0x14001F750 (-ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ.c)
 *     ?DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ @ 0x14001F788 (-DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ.c)
 *     ?NotifyOfDwmTermination@CCompositionBuffer@@UEAAXXZ @ 0x14009D5F0 (-NotifyOfDwmTermination@CCompositionBuffer@@UEAAXXZ.c)
 */

void __fastcall CFlipExBuffer::NotifyOfDwmTermination(CFlipExBuffer *this)
{
  CFlipExBuffer::SignalMaxGpuFence(this);
  CFlipExBuffer::DisableCascadedSignaling(this);
  CFlipExBuffer::ReleasePendingPresentLimits(this);
  CCompositionBuffer::NotifyOfDwmTermination(this);
}
