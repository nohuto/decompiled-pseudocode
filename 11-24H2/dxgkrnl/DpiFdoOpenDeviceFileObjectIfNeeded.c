/*
 * XREFs of DpiFdoOpenDeviceFileObjectIfNeeded @ 0x1402443B4
 * Callers:
 *     DpiFdoDispatchPnp @ 0x14023F8E0 (DpiFdoDispatchPnp.c)
 *     DpiFdoStartAdapter @ 0x140245688 (DpiFdoStartAdapter.c)
 * Callees:
 *     DpiIndirectOpenDevice @ 0x14024FB34 (DpiIndirectOpenDevice.c)
 */

__int64 __fastcall DpiFdoOpenDeviceFileObjectIfNeeded(__int64 a1)
{
  __int64 v3; // rsi
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // edi

  if ( !*(_BYTE *)(a1 + 1158) )
    return 0LL;
  v3 = a1 + 1168;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(a1 + 1168);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 1224) = KeGetCurrentThread();
  v5 = DpiIndirectOpenDevice(v4, a1 + 1232);
  v6 = v5;
  if ( v5 < 0 )
  {
    WdLogSingleEntry1(2LL, v5);
    WdLogGlobalForLineNumber = 20351;
  }
  *(_QWORD *)(a1 + 1224) = 0LL;
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v3);
  return v6;
}
