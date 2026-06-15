/*
 * XREFs of ?LockObjectCache@CDeviceGraphObjectCache@@UEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAPEAV?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@PEAPEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@8@@Z @ 0x140034F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CDeviceGraphObjectCache::LockObjectCache(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v5; // rbx

  if ( a3 )
    *a3 = a1 + 80;
  if ( a4 )
    *a4 = a1 + 128;
  v5 = a1 + 32;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  *a2 = v5;
  return a2;
}
