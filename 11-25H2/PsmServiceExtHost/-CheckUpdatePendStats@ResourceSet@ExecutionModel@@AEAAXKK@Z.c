/*
 * XREFs of ?CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z @ 0x18008DBAC
 * Callers:
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x180010B10 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x1800123D0 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 * Callees:
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x18002C79C (CempQueryUnbiasedInterruptTimeMs64.c)
 */

void __fastcall ExecutionModel::ResourceSet::CheckUpdatePendStats(ExecutionModel::ResourceSet *this, int a2, int a3)
{
  int v5; // eax
  int v6; // eax

  if ( a2 )
  {
    v5 = *((_DWORD *)this + 333);
    if ( (v5 & 0x10) == 0 )
    {
      *((_DWORD *)this + 333) = v5 | 0x10;
      *((_DWORD *)this + 433) = CempQueryUnbiasedInterruptTimeMs64();
    }
  }
  if ( a3 )
  {
    v6 = *((_DWORD *)this + 333);
    if ( (v6 & 0x20) == 0 )
    {
      *((_DWORD *)this + 333) = v6 | 0x20;
      *((_DWORD *)this + 434) = CempQueryUnbiasedInterruptTimeMs64();
    }
  }
}
