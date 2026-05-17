/*
 * XREFs of TpAllocWait @ 0x18006E7E0
 * Callers:
 *     RtlRegisterWait @ 0x18006DF00 (RtlRegisterWait.c)
 *     EtwpRegisterTpNotificationOnce @ 0x180095B08 (EtwpRegisterTpNotificationOnce.c)
 *     RtlpWnfRegisterTpNotification @ 0x1800F749C (RtlpWnfRegisterTpNotification.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     TppWorkInitialize @ 0x18001A6B0 (TppWorkInitialize.c)
 *     TppCleanupGroupAddMember @ 0x18001C7C0 (TppCleanupGroupAddMember.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x1800252B4 (TppAdjustRunningThreadGoalWithLock.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseInvalidParameter @ 0x18006B7F4 (TppRaiseInvalidParameter.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtCreateWaitCompletionPacket @ 0x1801636C0 (NtCreateWaitCompletionPacket.c)
 *     NtSetInformationWorkerFactory @ 0x1801652A0 (NtSetInformationWorkerFactory.c)
 */

__int64 __fastcall TpAllocWait(__int64 *a1, __int64 a2, int a3, __int64 a4)
{
  __int64 Heap; // rbx
  int WaitCompletionPacket; // esi
  int v10; // r9d
  unsigned __int64 v11; // r8
  __int64 v12; // rcx
  int v13; // eax
  volatile signed __int32 **v14; // rdx
  __int64 v15; // r15
  _BYTE *v16; // r12
  unsigned __int8 Number; // cl
  int v18; // r13d
  unsigned __int16 Group; // r9
  int v20; // eax
  unsigned int i; // edx
  __int64 v22; // rax
  __int64 v23; // rax
  void *v25; // rcx
  __int64 v26; // rcx
  unsigned __int16 v27; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  int v29; // [rsp+70h] [rbp+8h] BYREF

  if ( !a1 || !a2 || a4 && (*(_DWORD *)(a4 + 56) & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    return 3221225485LL;
  }
  else
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 1835008) | 8u, 0x1D8uLL);
    if ( Heap )
    {
      *(_QWORD *)(Heap + 176) = retaddr;
      WaitCompletionPacket = NtCreateWaitCompletionPacket(Heap + 368, 1LL);
      if ( WaitCompletionPacket < 0
        || (!a4 ? (v10 = 0) : (v10 = *(_DWORD *)(a4 + 56)),
            WaitCompletionPacket = TppWorkInitialize(
                                     Heap,
                                     a3,
                                     a4,
                                     v10,
                                     (__int64)TppWaitpCleanupGroupMemberVFuncs,
                                     (__int64)TppWaitpTaskVFuncs),
            WaitCompletionPacket < 0) )
      {
        v25 = *(void **)(Heap + 368);
        if ( v25 )
          NtClose(v25);
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 1835008, Heap);
      }
      else
      {
        v12 = *(_QWORD *)(Heap + 144);
        v13 = _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 432), 1u);
        v14 = (volatile signed __int32 **)(unsigned int)(v13 + 1);
        if ( v13 <= 0 && (int)v14 > 0 )
        {
          v26 = *(_QWORD *)(v12 + 56);
          v29 = 1;
          NtSetInformationWorkerFactory(v26, 3LL, &v29);
        }
        *(_QWORD *)(Heap + 240) = 0LL;
        *(_BYTE *)(Heap + 353) = 1;
        if ( a4 )
          *(_QWORD *)(Heap + 32) = *(_QWORD *)(a4 + 48);
        if ( *(_QWORD *)(Heap + 16) )
          TppCleanupGroupAddMember(Heap);
        v15 = *(_QWORD *)(Heap + 144);
        *(_QWORD *)(Heap + 448) = TppWaitCompletion;
        WaitCompletionPacket = 0;
        v16 = (_BYTE *)(Heap + 460);
        if ( v15 )
        {
          Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
          v18 = TppNumberNodes;
          LOBYTE(v29) = Number;
          Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
          v20 = *(_DWORD *)(v15 + 440);
          v27 = Group;
          if ( !v20 )
            v20 = MEMORY[0x7FFE03C0];
          if ( *(_DWORD *)(v15 + 424) != v20 )
          {
            RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v15 + 72), v14, v11);
            TppAdjustRunningThreadGoalWithLock(v15);
            RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v15 + 72));
            Number = v29;
            Group = v27;
          }
          for ( i = 0; i < TppNumberNodes; ++i )
          {
            v22 = *(_QWORD *)(v15 + 48) + 16LL * (TppMaximumGroups * i + Group);
            if ( *(_WORD *)(v22 + 8) == Group )
            {
              v23 = *(_QWORD *)v22;
              if ( _bittest64(&v23, Number) )
              {
                v18 = i;
                break;
              }
            }
          }
          *(_DWORD *)(Heap + 456) = v18;
          if ( Heap != -460 )
            *v16 = v29;
        }
        else
        {
          *(_DWORD *)(Heap + 456) = 0;
          *v16 = 0;
        }
        *(_QWORD *)(Heap + 424) = 0LL;
        *(_QWORD *)(Heap + 440) = Heap + 432;
        *(_QWORD *)(Heap + 432) = Heap + 432;
        *(_QWORD *)(Heap + 392) = TppDirectTaskVFuncs;
        *(_DWORD *)(Heap + 400) = *(_DWORD *)(Heap + 456);
        *(_BYTE *)(Heap + 404) = *(_BYTE *)(Heap + 460);
        *(_QWORD *)(Heap + 80) = a2;
        *a1 = Heap;
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
    return (unsigned int)WaitCompletionPacket;
  }
}
