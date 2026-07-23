/*
 * XREFs of LdrpReleaseDllPath @ 0x1800375C0
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x1800360B0 (LdrpHandleProtectedDelayload.c)
 *     LdrpGetDelayloadExportDll @ 0x180036720 (LdrpGetDelayloadExportDll.c)
 *     LdrGetDllHandle @ 0x180037180 (LdrGetDllHandle.c)
 *     LdrGetDllHandleEx @ 0x180037360 (LdrGetDllHandleEx.c)
 *     LdrpGetProcApphelpCheckModule @ 0x180037690 (LdrpGetProcApphelpCheckModule.c)
 *     LdrLoadDll @ 0x18006EDE0 (LdrLoadDll.c)
 *     LdrpMapDllSearchPath @ 0x180091810 (LdrpMapDllSearchPath.c)
 *     LdrpCorInitialize @ 0x1800ACFF8 (LdrpCorInitialize.c)
 *     LdrpLoadWow64 @ 0x1800AD1EC (LdrpLoadWow64.c)
 *     LdrpInitShimEngine @ 0x1800AD3A8 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x1800AD9B0 (LdrpLoadShimEngine.c)
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 *     LdrLoadEnclaveModule @ 0x1800D3B60 (LdrLoadEnclaveModule.c)
 *     LdrpInitializeImportRedirection @ 0x1800F56E8 (LdrpInitializeImportRedirection.c)
 *     LdrpLoadPatchImage @ 0x18015CFBC (LdrpLoadPatchImage.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180060050 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
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
