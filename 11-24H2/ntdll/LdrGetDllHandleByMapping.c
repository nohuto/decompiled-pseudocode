/*
 * XREFs of LdrGetDllHandleByMapping @ 0x1800EF240
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     LdrpIncrementModuleLoadCount @ 0x180019B00 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x18001B350 (LdrpDereferenceModule.c)
 *     RtlImageNtHeaderEx @ 0x1800590F0 (RtlImageNtHeaderEx.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x180073ED0 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     LdrpFatalExceptionFilter @ 0x18015E390 (LdrpFatalExceptionFilter.c)
 */

__int64 __fastcall LdrGetDllHandleByMapping(unsigned __int64 a1, _QWORD *a2)
{
  int v4; // edi
  int LoadedDllByMappingLockHeld; // ebx
  const void *v6; // rbx
  volatile signed __int32 *v7; // rdi
  unsigned int v9[8]; // [rsp+28h] [rbp-20h] BYREF
  _DWORD *v10; // [rsp+60h] [rbp+18h] BYREF
  volatile signed __int32 *v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0LL;
  v4 = 0;
  v10 = 0LL;
  LoadedDllByMappingLockHeld = RtlImageNtHeaderEx(1, a1, 0LL, &v10);
  if ( LoadedDllByMappingLockHeld >= 0 )
  {
    *(_QWORD *)v9 = 0LL;
    v6 = v10;
    v9[0] = v10[2];
    v9[1] = v10[20];
    RtlAcquireSRWLockShared(&LdrpModuleDatatableLock);
    LoadedDllByMappingLockHeld = LdrpFindLoadedDllByMappingLockHeld(a1, v6, v9, &v11);
    if ( LoadedDllByMappingLockHeld >= 0 )
    {
      v4 = *(_DWORD *)(*((_QWORD *)v11 + 19) + 56LL);
      LODWORD(v10) = v4;
    }
    RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
    if ( LoadedDllByMappingLockHeld >= 0 )
    {
      if ( v4 < 7 )
      {
        LoadedDllByMappingLockHeld = -1073741515;
      }
      else
      {
        v7 = v11;
        LoadedDllByMappingLockHeld = LdrpIncrementModuleLoadCount((__int64)v11);
        if ( LoadedDllByMappingLockHeld >= 0 )
          *a2 = *((_QWORD *)v7 + 6);
      }
      LdrpDereferenceModule((__int64)v11);
    }
  }
  return (unsigned int)LoadedDllByMappingLockHeld;
}
