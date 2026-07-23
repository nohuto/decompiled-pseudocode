/*
 * XREFs of RtlpFreeActivationContext @ 0x1800029B8
 * Callers:
 *     RtlpMoveActCtxToFreeList @ 0x180001008 (RtlpMoveActCtxToFreeList.c)
 *     RtlReleaseActivationContext @ 0x1800740B0 (RtlReleaseActivationContext.c)
 * Callees:
 *     RtlpUninitializeAssemblyStorageMap @ 0x180003314 (RtlpUninitializeAssemblyStorageMap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

LOGICAL __fastcall RtlpFreeActivationContext(__int64 a1)
{
  void (__fastcall *v1)(__int64, __int64, _QWORD, _QWORD, _QWORD, char *); // rax
  LOGICAL result; // eax
  char v4; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, char *))(a1 + 32);
  v4 = 0;
  if ( v1 )
    v1(1LL, a1, *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 40), 0LL, &v4);
  result = RtlpUninitializeAssemblyStorageMap(a1 + 112);
  if ( (*(_BYTE *)(a1 + 4) & 2) == 0 )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)(a1 - 8));
  return result;
}
