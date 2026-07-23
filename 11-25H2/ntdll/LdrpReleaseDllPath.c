/*
 * XREFs of LdrpReleaseDllPath @ 0x180049A60
 * Callers:
 *     LdrLoadDll @ 0x180014E40 (LdrLoadDll.c)
 *     LdrpHandleProtectedDelayload @ 0x180022ED0 (LdrpHandleProtectedDelayload.c)
 *     LdrpGetDelayloadExportDll @ 0x180023840 (LdrpGetDelayloadExportDll.c)
 *     LdrGetDllHandle @ 0x180049620 (LdrGetDllHandle.c)
 *     LdrGetDllHandleEx @ 0x180049800 (LdrGetDllHandleEx.c)
 *     LdrpGetProcApphelpCheckModule @ 0x180049B30 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpMapDllSearchPath @ 0x18006FE50 (LdrpMapDllSearchPath.c)
 *     LdrpCorInitialize @ 0x1800D0840 (LdrpCorInitialize.c)
 *     LdrpLoadWow64 @ 0x1800D0A34 (LdrpLoadWow64.c)
 *     LdrpInitShimEngine @ 0x1800D0BF0 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x1800D1760 (LdrpLoadShimEngine.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 *     LdrLoadEnclaveModule @ 0x1800D8840 (LdrLoadEnclaveModule.c)
 *     LdrpInitializeImportRedirection @ 0x1800FC888 (LdrpInitializeImportRedirection.c)
 *     LdrpLoadPatchImage @ 0x1801600BC (LdrpLoadPatchImage.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18009E150 (RtlpAcquireSRWLockExclusiveContended.c)
 */

void __fastcall LdrpReleaseDllPath(__int64 *a1)
{
  char *SchedulerSharedDataSlot; // r8
  __int64 v2; // rdi
  void *v3; // rbx
  unsigned int i; // edx
  char *v5; // rcx

  if ( *((_BYTE *)a1 + 124) )
  {
    SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    v2 = *a1;
    v3 = (void *)(*a1 - 128);
    if ( SchedulerSharedDataSlot )
    {
      for ( i = 0; i < 8; ++i )
      {
        v5 = &SchedulerSharedDataSlot[8 * i];
        if ( !*(_QWORD *)v5 )
        {
          if ( v5 )
            *(_QWORD *)v5 = &RtlpCachedPathLock;
          break;
        }
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&RtlpCachedPathLock, 0LL) )
      RtlpAcquireSRWLockExclusiveContended(&RtlpCachedPathLock);
    if ( (*(_QWORD *)(v2 - 48))-- != 1LL )
      v3 = 0LL;
    RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
    if ( v3 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  }
}
