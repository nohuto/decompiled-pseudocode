/*
 * XREFs of ?CancelWatchdogTimer@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x180057470
 * Callers:
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x1800573E0 (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?OnHostFrozen@ExternalResourceSet@ExecutionModel@@UEAAJXZ @ 0x18008E370 (-OnHostFrozen@ExternalResourceSet@ExecutionModel@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ExecutionModel::ExternalResourceSet::CancelWatchdogTimer(ExecutionModel::ExternalResourceSet *this)
{
  __int64 v2; // rax

  if ( (unsigned int)TpSetTimerEx(*((_QWORD *)this + 168), 0LL, 0LL, 0LL) )
  {
    v2 = *(_QWORD *)this;
    *((_DWORD *)this + 338) &= ~8u;
    (*(void (__fastcall **)(ExecutionModel::ExternalResourceSet *))(v2 + 16))(this);
  }
}
