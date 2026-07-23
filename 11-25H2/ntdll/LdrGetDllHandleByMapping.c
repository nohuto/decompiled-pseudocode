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

NTSTATUS __cdecl LdrGetDllHandleByMapping(PVOID BaseAddress, PVOID *DllHandle)
{
  int v4; // edi
  NTSTATUS LoadedDllByMappingLockHeld; // ebx
  void *v6; // rbx
  PVOID v7; // rdi
  void *Buf1; // [rsp+60h] [rbp+18h] BYREF
  PVOID BaseAddressa; // [rsp+68h] [rbp+20h]

  BaseAddressa = 0LL;
  v4 = 0;
  Buf1 = 0LL;
  LoadedDllByMappingLockHeld = RtlImageNtHeaderEx(1u, BaseAddress, 0LL, (PIMAGE_NT_HEADERS *)&Buf1);
  if ( LoadedDllByMappingLockHeld >= 0 )
  {
    v6 = Buf1;
    RtlAcquireSRWLockShared(&LdrpModuleDatatableLock);
    LoadedDllByMappingLockHeld = LdrpFindLoadedDllByMappingLockHeld(BaseAddress, v6);
    if ( LoadedDllByMappingLockHeld >= 0 )
    {
      v4 = *(_DWORD *)(*((_QWORD *)BaseAddressa + 19) + 56LL);
      LODWORD(Buf1) = v4;
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
        v7 = BaseAddressa;
        LoadedDllByMappingLockHeld = LdrpIncrementModuleLoadCount((__int64)BaseAddressa);
        if ( LoadedDllByMappingLockHeld >= 0 )
          *DllHandle = (PVOID)*((_QWORD *)v7 + 6);
      }
      LdrpDereferenceModule((char *)BaseAddressa);
    }
  }
  return LoadedDllByMappingLockHeld;
}
