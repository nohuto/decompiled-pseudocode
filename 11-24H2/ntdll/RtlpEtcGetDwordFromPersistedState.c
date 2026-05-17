/*
 * XREFs of RtlpEtcGetDwordFromPersistedState @ 0x180146DE8
 * Callers:
 *     RtlpEcReadPolicyState @ 0x180146CC0 (RtlpEcReadPolicyState.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlStringCchPrintfW @ 0x1800B56AC (RtlStringCchPrintfW.c)
 *     RtlpGetPersistedRegistryLocation @ 0x180119720 (RtlpGetPersistedRegistryLocation.c)
 *     RtlpEtcGetDwordFromRegistry @ 0x180146ED0 (RtlpEtcGetDwordFromRegistry.c)
 */

__int64 __fastcall RtlpEtcGetDwordFromPersistedState(
        wchar_t *a1,
        _WORD *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int PersistedRegistryLocation; // ebx
  __int64 v9; // rbx
  wchar_t *Heap; // rax
  unsigned __int64 v11; // rdi
  int v13; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-10h] BYREF

  v14 = 0LL;
  v13 = 0;
  PersistedRegistryLocation = RtlpGetPersistedRegistryLocation(a1, a2, &v14, &v13);
  if ( PersistedRegistryLocation >= 0 )
  {
    v9 = (unsigned int)(a3 + v13);
    Heap = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 2 * v9);
    v11 = (unsigned __int64)Heap;
    if ( Heap )
    {
      PersistedRegistryLocation = RtlStringCchPrintfW(Heap, v9, L"%s%s", v14, a4);
      if ( PersistedRegistryLocation >= 0 )
        PersistedRegistryLocation = RtlpEtcGetDwordFromRegistry(v11, a5, a6);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
    }
    else
    {
      PersistedRegistryLocation = -1073741801;
    }
  }
  if ( v14 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v14);
  return (unsigned int)PersistedRegistryLocation;
}
