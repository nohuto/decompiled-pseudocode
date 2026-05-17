/*
 * XREFs of TpAllocTimer @ 0x18006CE10
 * Callers:
 *     RtlCreateTimer @ 0x18006D040 (RtlCreateTimer.c)
 *     RtlpInitializeWnf @ 0x1800F73B8 (RtlpInitializeWnf.c)
 *     RtlpHpGCTimerEnable @ 0x180142720 (RtlpHpGCTimerEnable.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     TppWorkInitialize @ 0x18001A6B0 (TppWorkInitialize.c)
 *     TppCleanupGroupAddMember @ 0x18001C7C0 (TppCleanupGroupAddMember.c)
 *     TppRaiseInvalidParameter @ 0x18006B7F4 (TppRaiseInvalidParameter.c)
 *     NtSetInformationWorkerFactory @ 0x1801652A0 (NtSetInformationWorkerFactory.c)
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
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x100000) | 8u, 0x168uLL);
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
