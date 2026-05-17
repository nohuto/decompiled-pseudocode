/*
 * XREFs of LdrpPinModule @ 0x18006D2E8
 * Callers:
 *     LdrGetDllHandleEx @ 0x18000A960 (LdrGetDllHandleEx.c)
 *     LdrpLoadDllInternal @ 0x18000B460 (LdrpLoadDllInternal.c)
 *     LdrInitShimEngineDynamic @ 0x180064C50 (LdrInitShimEngineDynamic.c)
 *     LdrpInitShimEngine @ 0x1800654D8 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x180065AE0 (LdrpLoadShimEngine.c)
 *     LdrAddRefDll @ 0x18006F1D0 (LdrAddRefDll.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     LdrpPinNodeRecurse @ 0x1800F7360 (LdrpPinNodeRecurse.c)
 */

__int64 __fastcall LdrpPinModule(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx

  v4 = 0;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpModuleDatatableLock, a2, a3);
  v5 = *(_QWORD *)(a1 + 152);
  if ( *(_DWORD *)(v5 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v5 - 56LL) & 0x20) == 0 )
  {
    if ( *(_DWORD *)(v5 + 24) )
      LdrpPinNodeRecurse();
    else
      v4 = -1073741823;
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return v4;
}
