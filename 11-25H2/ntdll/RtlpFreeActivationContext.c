/*
 * XREFs of RtlpFreeActivationContext @ 0x1800E1E78
 * Callers:
 *     RtlReleaseActivationContext @ 0x18001A130 (RtlReleaseActivationContext.c)
 *     RtlpMoveActCtxToFreeList @ 0x1800E1D40 (RtlpMoveActCtxToFreeList.c)
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpUninitializeAssemblyStorageMap @ 0x1800E27D4 (RtlpUninitializeAssemblyStorageMap.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpFreeActivationContext(__int64 a1)
{
  void (__fastcall *v1)(__int64, __int64, _QWORD, _QWORD, _QWORD, char *); // rax
  __int64 result; // rax
  __int64 v4; // r9
  char v5; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, char *))(a1 + 32);
  v5 = 0;
  if ( v1 )
    v1(1LL, a1, *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 40), 0LL, &v5);
  result = RtlpUninitializeAssemblyStorageMap(a1 + 112);
  if ( (*(_BYTE *)(a1 + 4) & 2) == 0 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1 - 8, v4);
  return result;
}
