/*
 * XREFs of LdrQueryModuleServiceTags @ 0x18015FD70
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     LdrpDereferenceModule @ 0x180048C70 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByHandle @ 0x18004E780 (LdrpFindLoadedDllByHandle.c)
 */

NTSTATUS __cdecl LdrQueryModuleServiceTags(PVOID DllHandle, PULONG ServiceTagBuffer, PULONG BufferSize)
{
  NTSTATUS result; // eax
  char *v6; // rsi
  __int64 v7; // rbx
  ULONG v8; // edi
  __int64 *v9; // r8
  PVOID BaseAddress[5]; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF

  BaseAddress[0] = 0LL;
  result = LdrpFindLoadedDllByHandle(DllHandle, (__int64 *)BaseAddress, &v11);
  if ( result >= 0 )
  {
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    v6 = (char *)BaseAddress[0];
    v7 = 0LL;
    v8 = *BufferSize;
    v9 = *(__int64 **)(*((_QWORD *)BaseAddress[0] + 19) + 16LL);
    while ( v9 )
    {
      if ( (unsigned int)v7 < v8 )
        ServiceTagBuffer[v7] = *((_DWORD *)v9 + 2);
      v9 = (__int64 *)*v9;
      v7 = (unsigned int)(v7 + 1);
    }
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    *BufferSize = v7;
    LdrpDereferenceModule(v6);
    return v8 < (unsigned int)v7 ? 0xC0000023 : 0;
  }
  return result;
}
