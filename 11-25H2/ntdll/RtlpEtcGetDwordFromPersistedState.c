/*
 * XREFs of RtlpEtcGetDwordFromPersistedState @ 0x180148398
 * Callers:
 *     RtlpEcReadPolicyState @ 0x180148270 (RtlpEcReadPolicyState.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlStringCchPrintfW @ 0x180084A7C (RtlStringCchPrintfW.c)
 *     RtlpGetPersistedRegistryLocation @ 0x18011C240 (RtlpGetPersistedRegistryLocation.c)
 *     RtlpEtcGetDwordFromRegistry @ 0x180148480 (RtlpEtcGetDwordFromRegistry.c)
 */

__int64 __fastcall RtlpEtcGetDwordFromPersistedState(
        const WCHAR *a1,
        const WCHAR *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int PersistedRegistryLocation; // ebx
  __int64 v9; // rbx
  wchar_t *Heap; // rax
  wchar_t *v11; // rdi
  int v13; // [rsp+30h] [rbp-18h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-10h] BYREF

  BaseAddress = 0LL;
  v13 = 0;
  PersistedRegistryLocation = RtlpGetPersistedRegistryLocation(a1, a2, (WCHAR **)&BaseAddress, &v13);
  if ( PersistedRegistryLocation >= 0 )
  {
    v9 = (unsigned int)(a3 + v13);
    Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 2 * v9);
    v11 = Heap;
    if ( Heap )
    {
      PersistedRegistryLocation = RtlStringCchPrintfW(Heap, v9, L"%s%s", BaseAddress, a4);
      if ( PersistedRegistryLocation >= 0 )
        PersistedRegistryLocation = RtlpEtcGetDwordFromRegistry(v11, a5, a6);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
    }
    else
    {
      PersistedRegistryLocation = -1073741801;
    }
  }
  if ( BaseAddress )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  return (unsigned int)PersistedRegistryLocation;
}
