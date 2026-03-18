/*
 * XREFs of ?ImmediateSignalGpuFence@CFlipExBuffer@@QEAAJ_K@Z @ 0x140021410
 * Callers:
 *     ?SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ @ 0x14001F72C (-SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ.c)
 * Callees:
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x1403313E0 (DxgkImmediateSignalSynchronizationObjectByReference.c)
 */

__int64 __fastcall CFlipExBuffer::ImmediateSignalGpuFence(CFlipExBuffer *this)
{
  __int64 result; // rax

  result = 3221225659LL;
  if ( *((_QWORD *)this + 45) )
    return DxgkImmediateSignalSynchronizationObjectByReference();
  return result;
}
