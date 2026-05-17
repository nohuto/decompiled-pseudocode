/*
 * XREFs of RtlpFreeActivationContext @ 0x180080B3C
 * Callers:
 *     RtlReleaseActivationContext @ 0x18005E4D0 (RtlReleaseActivationContext.c)
 *     RtlpMoveActCtxToFreeList @ 0x1800F4600 (RtlpMoveActCtxToFreeList.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpUninitializeAssemblyStorageMap @ 0x180081494 (RtlpUninitializeAssemblyStorageMap.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpFreeActivationContext(__int64 a1)
{
  void (__fastcall *v1)(__int64, __int64, _QWORD, _QWORD, _QWORD, char *); // rax
  __int64 result; // rax
  char v4; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, char *))(a1 + 32);
  v4 = 0;
  if ( v1 )
    v1(1LL, a1, *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 40), 0LL, &v4);
  result = RtlpUninitializeAssemblyStorageMap(a1 + 112);
  if ( (*(_BYTE *)(a1 + 4) & 2) == 0 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1 - 8);
  return result;
}
