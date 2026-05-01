/*
 * XREFs of ?CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x18005E01C
 * Callers:
 *     ?ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x180086F44 (-ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ExecutionModel::ResourceManager::CheckPendingInternalResourceRequestsAsync(
        ExecutionModel::ResourceManager *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 40);
  if ( (v1 & 3) == 0 )
  {
    *((_DWORD *)this + 40) = v1 | 1;
    TpPostWork(*((_QWORD *)this + 18));
  }
}
