/*
 * XREFs of RtlGetCurrentDirectory_U @ 0x1800A1560
 * Callers:
 *     LdrpMakeUnicodeStringFromPathElement @ 0x180161EA4 (LdrpMakeUnicodeStringFromPathElement.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpReferenceCurrentDirectory @ 0x1800A1730 (RtlpReferenceCurrentDirectory.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

ULONG __cdecl RtlGetCurrentDirectory_U(ULONG BufferLength, PWSTR Buffer)
{
  unsigned __int64 v2; // rbp
  __int64 v4; // rax
  HANDLE *v5; // rdi
  wchar_t *v6; // rdx
  unsigned int Length; // ebx
  __int64 v8; // rbx
  unsigned __int64 v9; // r14
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rcx

  v2 = BufferLength;
  LOBYTE(BufferLength) = 1;
  v4 = RtlpReferenceCurrentDirectory(BufferLength, Buffer);
  v5 = (HANDLE *)v4;
  if ( v4 )
  {
    v6 = *(wchar_t **)(v4 + 32);
    Length = *(unsigned __int16 *)(v4 + 24);
  }
  else
  {
    ProcessParameters = NtCurrentPeb()->ProcessParameters;
    v6 = ProcessParameters->CurrentDirectory.DosPath.Buffer;
    Length = ProcessParameters->CurrentDirectory.DosPath.Length;
  }
  LODWORD(v8) = Length >> 1;
  if ( (unsigned int)v8 < 2 || v6[(unsigned int)(v8 - 2)] == 58 )
  {
    v9 = 2LL * (unsigned int)v8;
    if ( v2 > v9 )
      goto LABEL_6;
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF) == 1 )
      {
        NtClose(*(HANDLE *)(v4 + 8));
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
      }
      return 2 * v8 + 2;
    }
    else
    {
      RtlLeaveCriticalSection(&FastPebLock);
      return 2 * v8 + 2;
    }
  }
  else
  {
    v9 = 2LL * (unsigned int)v8;
    if ( v2 >= v9 )
    {
LABEL_6:
      memmove(Buffer, v6, v9);
      if ( v5 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
        {
          NtClose(v5[1]);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
        }
      }
      else
      {
        RtlLeaveCriticalSection(&FastPebLock);
      }
      if ( (unsigned int)v8 > 1 && Buffer[(unsigned int)(v8 - 2)] == 58 )
      {
        Buffer[v9 / 2] = 0;
      }
      else
      {
        v8 = (unsigned int)(v8 - 1);
        Buffer[v8] = 0;
      }
      return 2 * v8;
    }
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF) == 1 )
      {
        NtClose(*(HANDLE *)(v4 + 8));
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
      }
      return v9;
    }
    else
    {
      RtlLeaveCriticalSection(&FastPebLock);
      return v9;
    }
  }
}
