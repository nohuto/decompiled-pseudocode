/*
 * XREFs of RtlpGetPersistedRegistryLocation @ 0x18011C240
 * Callers:
 *     RtlpEtcGetDwordFromPersistedState @ 0x180148398 (RtlpEtcGetDwordFromPersistedState.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlGetPersistedStateLocation @ 0x180080A00 (RtlGetPersistedStateLocation.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpGetPersistedRegistryLocation(wchar_t *String, _WORD *a2, _QWORD *a3, _DWORD *a4)
{
  int PersistedStateLocation; // eax
  int v9; // ebx
  void *Heap; // rdi
  __int64 v11; // r9
  unsigned int v13[4]; // [rsp+40h] [rbp-28h] BYREF

  v13[0] = 0;
  PersistedStateLocation = RtlGetPersistedStateLocation(String, L"TargetNtPath", a2, 0, 0LL, 0, v13);
  v9 = PersistedStateLocation;
  if ( PersistedStateLocation == -2147483643 )
  {
    Heap = (void *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, v13[0]);
    if ( Heap )
    {
      v9 = RtlGetPersistedStateLocation(String, L"TargetNtPath", a2, 0, Heap, v13[0], v13);
      if ( v9 < 0 )
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap, v11);
      }
      else
      {
        *a3 = Heap;
        if ( a4 )
          *a4 = (v13[0] >> 1) - 1;
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else if ( PersistedStateLocation >= 0 )
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v9;
}
