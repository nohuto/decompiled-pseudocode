/*
 * XREFs of NvmeNamespaceResetRecoveryRoutine @ 0x140137F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NvmeNamespaceResetRecoveryRoutine(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)Context + 63) + 8LL), 2, 1) == 1 )
  {
    ++*(_DWORD *)(*((_QWORD *)Context + 63) + 20LL);
  }
  else
  {
    _InterlockedAdd(
      (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)Context + 2) + 1288LL) + 32LL) + 52LL),
      1u);
    ++*(_DWORD *)(*((_QWORD *)Context + 63) + 16LL);
  }
  _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)Context + 63) + 8LL), 3, 2);
  if ( _InterlockedExchangeAdd(
         (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)Context + 2) + 1288LL) + 32LL) + 48LL),
         0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)Context + 2) + 1288LL) + 32LL) + 24LL), 0, 0);
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 15));
}
