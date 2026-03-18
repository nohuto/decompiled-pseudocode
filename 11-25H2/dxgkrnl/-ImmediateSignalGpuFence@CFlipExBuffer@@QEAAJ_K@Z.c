/*
 * XREFs of ?ImmediateSignalGpuFence@CFlipExBuffer@@QEAAJ_K@Z @ 0x140011F80
 * Callers:
 *     ?SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ @ 0x14001029C (-SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ.c)
 * Callees:
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x14033C7E8 (DxgkImmediateSignalSynchronizationObjectByReference.c)
 */

__int64 __fastcall CFlipExBuffer::ImmediateSignalGpuFence(CFlipExBuffer *this)
{
  __int64 result; // rax

  result = 3221225659LL;
  if ( *((_QWORD *)this + 45) )
    return DxgkImmediateSignalSynchronizationObjectByReference();
  return result;
}
