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

__int64 __fastcall RtlGetCurrentDirectory_U(__int64 a1, char *a2)
{
  size_t v2; // rbp
  __int64 v4; // rax
  __int64 v5; // rdi
  wchar_t *Buffer; // rdx
  unsigned int Length; // ebx
  __int64 v8; // rbx
  size_t v9; // r14
  __int64 v11; // r9
  __int64 v12; // r9
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rcx
  __int64 v14; // r9

  v2 = (unsigned int)a1;
  LOBYTE(a1) = 1;
  v4 = RtlpReferenceCurrentDirectory(a1, a2);
  v5 = v4;
  if ( v4 )
  {
    Buffer = *(wchar_t **)(v4 + 32);
    Length = *(unsigned __int16 *)(v4 + 24);
  }
  else
  {
    ProcessParameters = NtCurrentPeb()->ProcessParameters;
    Buffer = ProcessParameters->CurrentDirectory.DosPath.Buffer;
    Length = ProcessParameters->CurrentDirectory.DosPath.Length;
  }
  LODWORD(v8) = Length >> 1;
  if ( (unsigned int)v8 < 2 || Buffer[(unsigned int)(v8 - 2)] == 58 )
  {
    v9 = 2LL * (unsigned int)v8;
    if ( v2 > v9 )
      goto LABEL_6;
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF) == 1 )
      {
        NtClose(*(HANDLE *)(v4 + 8));
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5, v14);
      }
      return (unsigned int)(2 * v8 + 2);
    }
    else
    {
      RtlLeaveCriticalSection((__int64)&FastPebLock);
      return (unsigned int)(2 * v8 + 2);
    }
  }
  else
  {
    v9 = 2LL * (unsigned int)v8;
    if ( v2 >= v9 )
    {
LABEL_6:
      memmove(a2, Buffer, v9);
      if ( v5 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
        {
          NtClose(*(HANDLE *)(v5 + 8));
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5, v11);
        }
      }
      else
      {
        RtlLeaveCriticalSection((__int64)&FastPebLock);
      }
      if ( (unsigned int)v8 > 1 && *(_WORD *)&a2[2 * (unsigned int)(v8 - 2)] == 58 )
      {
        *(_WORD *)&a2[v9] = 0;
      }
      else
      {
        v8 = (unsigned int)(v8 - 1);
        *(_WORD *)&a2[2 * v8] = 0;
      }
      return (unsigned int)(2 * v8);
    }
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF) == 1 )
      {
        NtClose(*(HANDLE *)(v4 + 8));
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5, v12);
      }
      return (unsigned int)v9;
    }
    else
    {
      RtlLeaveCriticalSection((__int64)&FastPebLock);
      return (unsigned int)v9;
    }
  }
}
