/*
 * XREFs of RtlpGetCachedPath @ 0x1800842B0
 * Callers:
 *     RtlGetExePath @ 0x180082AD0 (RtlGetExePath.c)
 *     RtlGetSearchPath @ 0x180082FA0 (RtlGetSearchPath.c)
 *     LdrpGetDllPath @ 0x180083EF0 (LdrpGetDllPath.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpComputeDllPath @ 0x180084520 (RtlpComputeDllPath.c)
 *     RtlpComputeDllPathWithOptions @ 0x180084610 (RtlpComputeDllPathWithOptions.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpGetCachedPath(unsigned __int64 *a1, volatile signed __int32 **a2, __int64 a3, __int64 a4)
{
  char v8; // r15
  unsigned __int64 v9; // rbx
  __int64 result; // rax
  volatile signed __int32 **v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rdi
  bool v14; // zf

  if ( a3 || a4 )
  {
    v8 = 0;
    v9 = 0LL;
  }
  else
  {
    v8 = 1;
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpCachedPathLock, a2, 0LL);
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
  if ( a2 == (volatile signed __int32 **)RtlpComputeDllPath )
  {
    result = RtlpComputeDllPath(a3, a4);
  }
  else if ( a2 == (volatile signed __int32 **)RtlpComputeDllPathWithOptions )
  {
    result = RtlpComputeDllPathWithOptions(a3, a4);
  }
  else
  {
    result = ((__int64 (__fastcall *)(__int64, __int64))a2)(a3, a4);
  }
  v13 = result;
  if ( result )
  {
    *(_QWORD *)(result + 80) = 1LL;
    if ( !v8 )
      return v13;
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpCachedPathLock, v11, v12);
    if ( *a1 != v9
      || (*a1 = v13, ++*(_QWORD *)(v13 + 80), !v9)
      || (v14 = *(_QWORD *)(v9 + 80) == 1LL, --*(_QWORD *)(v9 + 80), !v14) )
    {
      RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
      return v13;
    }
    RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
    return v13;
  }
  return result;
}
