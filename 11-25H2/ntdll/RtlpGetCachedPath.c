/*
 * XREFs of RtlpGetCachedPath @ 0x1800AC640
 * Callers:
 *     RtlGetExePath @ 0x1800AAE60 (RtlGetExePath.c)
 *     RtlGetSearchPath @ 0x1800AB330 (RtlGetSearchPath.c)
 *     LdrpGetDllPath @ 0x1800AC280 (LdrpGetDllPath.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpComputeDllPath @ 0x1800AC8B0 (RtlpComputeDllPath.c)
 *     RtlpComputeDllPathWithOptions @ 0x1800AC9A0 (RtlpComputeDllPathWithOptions.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpGetCachedPath(__int64 *a1, __int64 (__fastcall *a2)(__int64, __int64), __int64 a3, __int64 a4)
{
  char v8; // r15
  __int64 v9; // rbx
  __int64 result; // rax
  __int64 v11; // rdi
  bool v12; // zf

  if ( a3 || a4 )
  {
    v8 = 0;
    v9 = 0LL;
  }
  else
  {
    v8 = 1;
    RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
    v9 = *a1;
    if ( *a1
      && *(_QWORD *)(v9 + 96) == LdrpAppPackagesPathVersion
      && (*(_BYTE *)(v9 + 116) || *(_QWORD *)(v9 + 88) == NtCurrentPeb()->ProcessParameters->EnvironmentVersion) )
    {
      ++*(_QWORD *)(v9 + 80);
      RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
      return v9;
    }
    RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  }
  if ( a2 == RtlpComputeDllPath )
  {
    result = RtlpComputeDllPath(a3, a4);
  }
  else if ( a2 == RtlpComputeDllPathWithOptions )
  {
    result = RtlpComputeDllPathWithOptions(a3, a4);
  }
  else
  {
    result = a2(a3, a4);
  }
  v11 = result;
  if ( result )
  {
    *(_QWORD *)(result + 80) = 1LL;
    if ( !v8 )
      return v11;
    RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
    if ( *a1 != v9
      || (*a1 = v11, ++*(_QWORD *)(v11 + 80), !v9)
      || (v12 = *(_QWORD *)(v9 + 80) == 1LL, --*(_QWORD *)(v9 + 80), !v12) )
    {
      RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
      return v11;
    }
    RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v9);
    return v11;
  }
  return result;
}
