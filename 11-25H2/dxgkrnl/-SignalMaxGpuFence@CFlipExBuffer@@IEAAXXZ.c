/*
 * XREFs of ?SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ @ 0x14001029C
 * Callers:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x140010128 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x14009B6B0 (-NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ.c)
 * Callees:
 *     ?ImmediateSignalGpuFence@CFlipExBuffer@@QEAAJ_K@Z @ 0x140011F80 (-ImmediateSignalGpuFence@CFlipExBuffer@@QEAAJ_K@Z.c)
 */

void __fastcall CFlipExBuffer::SignalMaxGpuFence(CFlipExBuffer *this)
{
  unsigned __int64 v1; // rdx

  v1 = *((_QWORD *)this + 46);
  if ( v1 )
    CFlipExBuffer::ImmediateSignalGpuFence(this, v1);
}
