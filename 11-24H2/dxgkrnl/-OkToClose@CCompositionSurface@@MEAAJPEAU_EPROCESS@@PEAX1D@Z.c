/*
 * XREFs of ?OkToClose@CCompositionSurface@@MEAAJPEAU_EPROCESS@@PEAX1D@Z @ 0x1400360C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14001A9A4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14001BAF0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?NotifyBuffersOfDwmTermination@CCompositionSurface@@IEAAXXZ @ 0x14009CE90 (-NotifyBuffersOfDwmTermination@CCompositionSurface@@IEAAXXZ.c)
 */

__int64 __fastcall CCompositionSurface::OkToClose(CCompositionSurface *this, struct _EPROCESS *a2, void *a3, void *a4)
{
  if ( a2 == *((struct _EPROCESS **)this + 4)
    && _InterlockedExchangeAdd((volatile signed __int32 *)this + 6, 0xFFFFFFFF) == 1 )
  {
    *((_QWORD *)this + 4) = 0LL;
    if ( (unsigned __int8)PsGetProcessExitProcessCalled(a2) )
    {
      CPushLock::AcquireLockExclusive((CCompositionSurface *)((char *)this + 8));
      CCompositionSurface::NotifyBuffersOfDwmTermination(this);
      CPushLock::ReleaseLock((CCompositionSurface *)((char *)this + 8));
    }
  }
  return 0LL;
}
