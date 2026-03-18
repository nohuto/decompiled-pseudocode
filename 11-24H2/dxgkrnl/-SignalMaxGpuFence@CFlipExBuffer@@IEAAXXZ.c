/*
 * XREFs of ?SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ @ 0x14001F72C
 * Callers:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x14001F5B8 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x14009D8E0 (-NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ.c)
 * Callees:
 *     ?ImmediateSignalGpuFence@CFlipExBuffer@@QEAAJ_K@Z @ 0x140021410 (-ImmediateSignalGpuFence@CFlipExBuffer@@QEAAJ_K@Z.c)
 */

void __fastcall CFlipExBuffer::SignalMaxGpuFence(CFlipExBuffer *this)
{
  unsigned __int64 v1; // rdx

  v1 = *((_QWORD *)this + 46);
  if ( v1 )
    CFlipExBuffer::ImmediateSignalGpuFence(this, v1);
}
