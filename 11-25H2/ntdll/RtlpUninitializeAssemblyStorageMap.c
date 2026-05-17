/*
 * XREFs of RtlpUninitializeAssemblyStorageMap @ 0x1800E27D4
 * Callers:
 *     RtlpFreeActivationContext @ 0x1800E1E78 (RtlpFreeActivationContext.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x1800E2350 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 */

__int64 __fastcall RtlpUninitializeAssemblyStorageMap(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rdi
  unsigned int i; // esi
  __int64 result; // rax
  __int64 v8; // rbp
  void *v9; // rcx

  if ( a1 )
  {
    v4 = (__int64 *)(a1 + 8);
    for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
    {
      result = *v4;
      v8 = *(_QWORD *)(*v4 + 8LL * i);
      if ( v8 )
      {
        v9 = *(void **)(v8 + 24);
        *(_DWORD *)(v8 + 8) = 0;
        *(_QWORD *)(v8 + 16) = 0LL;
        if ( v9 )
        {
          NtClose(v9);
          *(_QWORD *)(v8 + 24) = 0LL;
        }
        *(_QWORD *)(*v4 + 8LL * i) = 0LL;
        result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8, a4);
      }
    }
    if ( (*(_BYTE *)a1 & 1) != 0 )
      result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *v4, a4);
    *(_QWORD *)a1 = 0LL;
    *v4 = 0LL;
  }
  return result;
}
