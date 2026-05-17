/*
 * XREFs of RtlpGetPersistedRegistryLocation @ 0x180119720
 * Callers:
 *     RtlpEtcGetDwordFromPersistedState @ 0x180146DE8 (RtlpEtcGetDwordFromPersistedState.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlGetPersistedStateLocation @ 0x180026620 (RtlGetPersistedStateLocation.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpGetPersistedRegistryLocation(wchar_t *String, _WORD *a2, _QWORD *a3, _DWORD *a4)
{
  int PersistedStateLocation; // eax
  int v9; // ebx
  void *Heap; // rdi
  unsigned int v12[4]; // [rsp+40h] [rbp-28h] BYREF

  v12[0] = 0;
  PersistedStateLocation = RtlGetPersistedStateLocation(String, L"TargetNtPath", a2, 0, 0LL, 0, v12);
  v9 = PersistedStateLocation;
  if ( PersistedStateLocation == -2147483643 )
  {
    Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v12[0]);
    if ( Heap )
    {
      v9 = RtlGetPersistedStateLocation(String, L"TargetNtPath", a2, 0, Heap, v12[0], v12);
      if ( v9 < 0 )
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
      }
      else
      {
        *a3 = Heap;
        if ( a4 )
          *a4 = (v12[0] >> 1) - 1;
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
