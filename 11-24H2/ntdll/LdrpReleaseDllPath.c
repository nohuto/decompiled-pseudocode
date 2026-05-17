/*
 * XREFs of LdrpReleaseDllPath @ 0x18000ABC0
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x1800096B0 (LdrpHandleProtectedDelayload.c)
 *     LdrpGetDelayloadExportDll @ 0x180009D20 (LdrpGetDelayloadExportDll.c)
 *     LdrGetDllHandle @ 0x18000A780 (LdrGetDllHandle.c)
 *     LdrGetDllHandleEx @ 0x18000A960 (LdrGetDllHandleEx.c)
 *     LdrpGetProcApphelpCheckModule @ 0x18000AC90 (LdrpGetProcApphelpCheckModule.c)
 *     LdrLoadDll @ 0x180059200 (LdrLoadDll.c)
 *     LdrpCorInitialize @ 0x180065128 (LdrpCorInitialize.c)
 *     LdrpLoadWow64 @ 0x18006531C (LdrpLoadWow64.c)
 *     LdrpInitShimEngine @ 0x1800654D8 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x180065AE0 (LdrpLoadShimEngine.c)
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     LdrpMapDllSearchPath @ 0x180074F30 (LdrpMapDllSearchPath.c)
 *     LdrLoadEnclaveModule @ 0x1800D87F0 (LdrLoadEnclaveModule.c)
 *     LdrpInitializeImportRedirection @ 0x1800FA988 (LdrpInitializeImportRedirection.c)
 *     LdrpLoadPatchImage @ 0x18015EBFC (LdrpLoadPatchImage.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18004A470 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall LdrpReleaseDllPath(__int64 *a1)
{
  char *SchedulerSharedDataSlot; // r8
  __int64 v2; // rdi
  __int64 v3; // rbx
  unsigned int i; // edx
  char *v5; // rcx

  if ( *((_BYTE *)a1 + 124) )
  {
    SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    v2 = *a1;
    v3 = *a1 - 128;
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
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v3);
  }
}
