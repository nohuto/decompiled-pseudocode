/*
 * XREFs of ?_CalledOnInputThread@CInputThreadBase@@IEBA_NXZ @ 0x1400E88E0
 * Callers:
 *     ?DeactivateInputProcessing@CInputThreadBase@@UEAA_NXZ @ 0x14021FB40 (-DeactivateInputProcessing@CInputThreadBase@@UEAA_NXZ.c)
 *     ?RevokeThreadAsInput@CInputThreadBase@@QEAAXXZ @ 0x14021FF90 (-RevokeThreadAsInput@CInputThreadBase@@QEAAXXZ.c)
 *     ?SetThreadPriority@CInputThreadBase@@QEAAXXZ @ 0x140220034 (-SetThreadPriority@CInputThreadBase@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInputThreadBase::_CalledOnInputThread(CInputThreadBase *this)
{
  return (unsigned int)PsGetCurrentThreadId() == *((_DWORD *)this + 10);
}
