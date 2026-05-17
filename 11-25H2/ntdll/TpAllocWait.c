/*
 * XREFs of TpAllocWait @ 0x18003CCE0
 * Callers:
 *     EtwpRegisterTpNotificationOnce @ 0x180001008 (EtwpRegisterTpNotificationOnce.c)
 *     RtlRegisterWait @ 0x18003C400 (RtlRegisterWait.c)
 *     RtlpWnfRegisterTpNotification @ 0x1800F90FC (RtlpWnfRegisterTpNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     TppCleanupGroupAddMember @ 0x1800469E0 (TppCleanupGroupAddMember.c)
 *     TppWorkInitialize @ 0x180047FD0 (TppWorkInitialize.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x18007F694 (TppAdjustRunningThreadGoalWithLock.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtCreateWaitCompletionPacket @ 0x180164C50 (NtCreateWaitCompletionPacket.c)
 *     NtSetInformationWorkerFactory @ 0x180166830 (NtSetInformationWorkerFactory.c)
 */

__int64 __fastcall TpAllocWait(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r12d
  _QWORD *p_Length; // r14
  __int64 Heap; // rbx
  int WaitCompletionPacket; // esi
  int v10; // r9d
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // r15
  _BYTE *v14; // r12
  unsigned __int8 Number; // cl
  int v16; // r13d
  unsigned __int16 Group; // r9
  int v18; // eax
  unsigned int i; // edx
  __int64 v20; // rax
  __int64 v21; // rax
  void *v23; // rcx
  __int64 v24; // rcx
  unsigned __int16 v25; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  int v27; // [rsp+70h] [rbp+8h] BYREF

  v5 = a3;
  p_Length = &Ldr->Length;
  if ( !Ldr
    || !a2
    || a4 && (*(_DWORD *)(a4 + 56) & 0xFFFFFFFC) != 0
    || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(Ldr, a2, a3);
    return 3221225485LL;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap);
    if ( Heap )
    {
      *(_QWORD *)(Heap + 176) = retaddr;
      WaitCompletionPacket = NtCreateWaitCompletionPacket(Heap + 368, 1LL);
      if ( WaitCompletionPacket < 0
        || (!a4 ? (v10 = 0) : (v10 = *(_DWORD *)(a4 + 56)),
            WaitCompletionPacket = TppWorkInitialize(
                                     Heap,
                                     v5,
                                     a4,
                                     v10,
                                     (__int64)TppWaitpCleanupGroupMemberVFuncs,
                                     (__int64)TppWaitpTaskVFuncs),
            WaitCompletionPacket < 0) )
      {
        v23 = *(void **)(Heap + 368);
        if ( v23 )
          NtClose(v23);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 1835008), Heap);
      }
      else
      {
        v11 = *(_QWORD *)(Heap + 144);
        v12 = _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 432), 1u);
        if ( v12 <= 0 && v12 + 1 > 0 )
        {
          v24 = *(_QWORD *)(v11 + 56);
          v27 = 1;
          NtSetInformationWorkerFactory(v24, 3LL, &v27);
        }
        *(_QWORD *)(Heap + 240) = 0LL;
        *(_BYTE *)(Heap + 353) = 1;
        if ( a4 )
          *(_QWORD *)(Heap + 32) = *(_QWORD *)(a4 + 48);
        if ( *(_QWORD *)(Heap + 16) )
          TppCleanupGroupAddMember(Heap);
        v13 = *(_QWORD *)(Heap + 144);
        *(_QWORD *)(Heap + 448) = TppWaitCompletion;
        WaitCompletionPacket = 0;
        v14 = (_BYTE *)(Heap + 460);
        if ( v13 )
        {
          Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
          v16 = TppNumberNodes;
          LOBYTE(v27) = Number;
          Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
          v18 = *(_DWORD *)(v13 + 440);
          v25 = Group;
          if ( !v18 )
            v18 = MEMORY[0x7FFE03C0];
          if ( *(_DWORD *)(v13 + 424) != v18 )
          {
            RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v13 + 72));
            TppAdjustRunningThreadGoalWithLock(v13);
            RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v13 + 72));
            Number = v27;
            Group = v25;
          }
          for ( i = 0; i < TppNumberNodes; ++i )
          {
            v20 = *(_QWORD *)(v13 + 48) + 16LL * (TppMaximumGroups * i + Group);
            if ( *(_WORD *)(v20 + 8) == Group )
            {
              v21 = *(_QWORD *)v20;
              if ( _bittest64(&v21, Number) )
              {
                v16 = i;
                break;
              }
            }
          }
          *(_DWORD *)(Heap + 456) = v16;
          if ( Heap != -460 )
            *v14 = v27;
        }
        else
        {
          *(_DWORD *)(Heap + 456) = 0;
          *v14 = 0;
        }
        *(_QWORD *)(Heap + 424) = 0LL;
        *(_QWORD *)(Heap + 440) = Heap + 432;
        *(_QWORD *)(Heap + 432) = Heap + 432;
        *(_QWORD *)(Heap + 392) = TppDirectTaskVFuncs;
        *(_DWORD *)(Heap + 400) = *(_DWORD *)(Heap + 456);
        *(_BYTE *)(Heap + 404) = *(_BYTE *)(Heap + 460);
        *(_QWORD *)(Heap + 80) = a2;
        *p_Length = Heap;
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
    return (unsigned int)WaitCompletionPacket;
  }
}
