/*
 * XREFs of LdrGetDllHandleByMapping @ 0x1800EA420
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     LdrpIncrementModuleLoadCount @ 0x180046500 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x180047D50 (LdrpDereferenceModule.c)
 *     RtlImageNtHeaderEx @ 0x18006ECD0 (RtlImageNtHeaderEx.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x1800907B0 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     LdrpFatalExceptionFilter @ 0x18015C750 (LdrpFatalExceptionFilter.c)
 */

NTSTATUS __cdecl LdrGetDllHandleByMapping(PVOID BaseAddress, PVOID *DllHandle)
{
  int v4; // edi
  NTSTATUS LoadedDllByMappingLockHeld; // ebx
  void *v6; // rbx
  PVOID v7; // rdi
  unsigned int v9[8]; // [rsp+28h] [rbp-20h] BYREF
  void *Buf1; // [rsp+60h] [rbp+18h] BYREF
  PVOID BaseAddressa; // [rsp+68h] [rbp+20h] BYREF

  BaseAddressa = 0LL;
  v4 = 0;
  Buf1 = 0LL;
  LoadedDllByMappingLockHeld = RtlImageNtHeaderEx(1u, BaseAddress, 0LL, (PIMAGE_NT_HEADERS *)&Buf1);
  if ( LoadedDllByMappingLockHeld >= 0 )
  {
    *(_QWORD *)v9 = 0LL;
    v6 = Buf1;
    v9[0] = *((_DWORD *)Buf1 + 2);
    v9[1] = *((_DWORD *)Buf1 + 20);
    RtlAcquireSRWLockShared(&LdrpModuleDatatableLock);
    LoadedDllByMappingLockHeld = LdrpFindLoadedDllByMappingLockHeld(
                                   BaseAddress,
                                   v6,
                                   v9,
                                   (volatile signed __int32 **)&BaseAddressa);
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
