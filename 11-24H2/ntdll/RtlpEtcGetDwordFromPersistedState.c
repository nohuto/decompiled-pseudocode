/*
 * XREFs of RtlpEtcGetDwordFromPersistedState @ 0x180145198
 * Callers:
 *     RtlpEcReadPolicyState @ 0x180145070 (RtlpEcReadPolicyState.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlStringCchPrintfW @ 0x180081F4C (RtlStringCchPrintfW.c)
 *     RtlpGetPersistedRegistryLocation @ 0x180117950 (RtlpGetPersistedRegistryLocation.c)
 *     RtlpEtcGetDwordFromRegistry @ 0x180145280 (RtlpEtcGetDwordFromRegistry.c)
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
