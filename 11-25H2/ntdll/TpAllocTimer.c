/*
 * XREFs of TpAllocTimer @ 0x1800461E0
 * Callers:
 *     RtlCreateTimer @ 0x18003B9A0 (RtlCreateTimer.c)
 *     RtlpInitializeWnf @ 0x1800F9018 (RtlpInitializeWnf.c)
 *     RtlpHpGCTimerEnable @ 0x180143E10 (RtlpHpGCTimerEnable.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     TppCleanupGroupAddMember @ 0x1800469E0 (TppCleanupGroupAddMember.c)
 *     TppWorkInitialize @ 0x180047FD0 (TppWorkInitialize.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     NtSetInformationWorkerFactory @ 0x180166830 (NtSetInformationWorkerFactory.c)
 */

__int64 __fastcall TpAllocTimer(__int64 *a1, __int64 a2, int a3, __int64 a4)
{
  __int64 Heap; // rbx
  int v9; // r9d
  __int64 result; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  int v15; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 || !a2 || a4 && (*(_DWORD *)(a4 + 56) & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    return 3221225485LL;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap);
    if ( Heap )
    {
      *(_QWORD *)(Heap + 176) = retaddr;
      if ( a4 )
        v9 = *(_DWORD *)(a4 + 56);
      else
        v9 = 0;
      result = TppWorkInitialize(
                 Heap,
                 a3,
                 a4,
                 v9,
                 (__int64)TppTimerpCleanupGroupMemberVFuncs,
                 (__int64)TppTimerpTaskVFuncs);
      if ( (int)result >= 0 )
      {
        v11 = *(_QWORD *)(Heap + 144);
        v12 = _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 432), 1u);
        if ( v12 <= 0 && v12 + 1 > 0 )
        {
          v13 = *(_QWORD *)(v11 + 56);
          v15 = 1;
          NtSetInformationWorkerFactory(v13, 3LL, &v15);
        }
        *(_QWORD *)(Heap + 240) = 0LL;
        *(_BYTE *)(Heap + 353) = 0;
        if ( a4 )
          *(_QWORD *)(Heap + 32) = *(_QWORD *)(a4 + 48);
        if ( *(_QWORD *)(Heap + 16) )
          TppCleanupGroupAddMember(Heap);
        *(_QWORD *)(Heap + 80) = a2;
        result = 0LL;
        *a1 = Heap;
      }
    }
    else
    {
      return 3221225495LL;
    }
  }
  return result;
}
