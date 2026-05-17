/*
 * XREFs of LdrGetDllHandleByMapping @ 0x18006CD70
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     LdrpIncrementModuleLoadCount @ 0x180047B20 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x180048C70 (LdrpDereferenceModule.c)
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x18006E750 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     LdrpFatalExceptionFilter @ 0x18015F850 (LdrpFatalExceptionFilter.c)
 */

__int64 __fastcall LdrGetDllHandleByMapping(unsigned __int64 a1, _QWORD *a2)
{
  int v4; // edi
  int Count; // ebx
  __int64 v6; // rbx
  __int64 v7; // rdi
  int v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  v4 = 0;
  v11 = 0LL;
  Count = RtlImageNtHeaderEx(1, a1, 0LL, &v11);
  v9 = Count;
  if ( Count >= 0 )
  {
    v10 = 0LL;
    v6 = v11;
    LODWORD(v10) = *(_DWORD *)(v11 + 8);
    HIDWORD(v10) = *(_DWORD *)(v11 + 80);
    RtlAcquireSRWLockShared(&LdrpModuleDatatableLock);
    Count = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64 *, __int64 *, int))LdrpFindLoadedDllByMappingLockHeld)(
              a1,
              v6,
              &v10,
              &v12,
              v9);
    if ( Count >= 0 )
    {
      v4 = *(_DWORD *)(*(_QWORD *)(v12 + 152) + 56LL);
      LODWORD(v11) = v4;
    }
    RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
    if ( Count >= 0 )
    {
      if ( v4 < 7 )
      {
        Count = -1073741515;
      }
      else
      {
        v7 = v12;
        Count = LdrpIncrementModuleLoadCount(v12);
        if ( Count >= 0 )
          *a2 = *(_QWORD *)(v7 + 48);
      }
      LdrpDereferenceModule(v12);
    }
  }
  return (unsigned int)Count;
}
