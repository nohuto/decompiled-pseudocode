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
        wchar_t *a1,
        _WORD *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int PersistedRegistryLocation; // ebx
  __int64 v9; // r9
  __int64 v10; // rbx
  wchar_t *Heap; // rax
  __int64 v12; // rdi
  __int64 v13; // r9
  int v15; // [rsp+30h] [rbp-18h] BYREF
  __int64 v16; // [rsp+38h] [rbp-10h] BYREF

  v16 = 0LL;
  v15 = 0;
  PersistedRegistryLocation = RtlpGetPersistedRegistryLocation(a1, a2, &v16, &v15);
  if ( PersistedRegistryLocation >= 0 )
  {
    v10 = (unsigned int)(a3 + v15);
    Heap = (wchar_t *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, 2 * v10);
    v12 = (__int64)Heap;
    if ( Heap )
    {
      PersistedRegistryLocation = RtlStringCchPrintfW(Heap, v10, L"%s%s", v16, a4);
      if ( PersistedRegistryLocation >= 0 )
        PersistedRegistryLocation = RtlpEtcGetDwordFromRegistry(v12, a5, a6);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v12, v13);
    }
    else
    {
      PersistedRegistryLocation = -1073741801;
    }
  }
  if ( v16 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v16, v9);
  return (unsigned int)PersistedRegistryLocation;
}
