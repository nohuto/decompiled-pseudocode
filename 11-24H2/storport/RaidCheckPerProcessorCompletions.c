/*
 * XREFs of RaidCheckPerProcessorCompletions @ 0x14001F090
 * Callers:
 *     RaidStartIoPacket @ 0x140004760 (RaidStartIoPacket.c)
 * Callees:
 *     RaidUnitCompleteIrpRequest @ 0x14000B1C0 (RaidUnitCompleteIrpRequest.c)
 *     RaidAdapterPoFxIdleComponent @ 0x14001D890 (RaidAdapterPoFxIdleComponent.c)
 *     RaidUnitCompleteRequest @ 0x14001F490 (RaidUnitCompleteRequest.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

void __fastcall RaidCheckPerProcessorCompletions(__int64 a1, unsigned __int16 *a2)
{
  __int64 v3; // rax
  unsigned int v4; // r8d
  char *v5; // rdx
  union _SLIST_HEADER *v6; // rbx
  union _SLIST_HEADER *v7; // rsi
  PSLIST_ENTRY v8; // r14
  bool v9; // zf
  PSLIST_ENTRY v10; // rbp
  _SLIST_ENTRY *Next; // rax
  __int64 v12; // rbx
  PSLIST_ENTRY v13; // rbx
  __int64 v14; // rdx
  IRP *v15; // rcx

  if ( (*(_BYTE *)(a1 + 4660) & 1) != 0 )
  {
    v3 = *a2;
    if ( (unsigned int)v3 < g_RaidPerfRedirectGroupCount )
    {
      v4 = *((unsigned __int8 *)a2 + 2);
      if ( v4 < *((_DWORD *)g_RaidDPCRedirectionProcessors + v3) )
      {
        v5 = (char *)g_RaidPerProcessorState + 128 * (unsigned __int64)(v4 + ((_DWORD)v3 << 6));
        _InterlockedExchange((volatile __int32 *)v5 + 24, 1);
        v6 = (union _SLIST_HEADER *)(v5 + 64);
        v7 = (union _SLIST_HEADER *)(v5 + 80);
        if ( FirstEntrySList((PSLIST_HEADER)v5 + 4) )
        {
          v8 = ExpInterlockedFlushSList(v6);
          while ( v8 )
          {
            v9 = (BYTE1(v8[-1].Next) & 1) == 0;
            v10 = v8 - 2;
            v8 = v8->Next;
            if ( !v9 )
            {
              v12 = *((_QWORD *)&v10[13].Next + 1);
              RaidAdapterPoFxIdleComponent(v12, *((unsigned int *)&v10[46].Next + 3), 0LL);
              _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(v12 + 4960) + 80LL));
              _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v12 + 4960) + 96LL));
              BYTE1(v10[1].Next) &= ~1u;
            }
            Next = v10[41].Next;
            if ( Next == (_SLIST_ENTRY *)RaidUnitCompleteRequest )
              RaidUnitCompleteRequest(v10);
            else
              ((void (__fastcall *)(PSLIST_ENTRY))Next)(v10);
          }
        }
        if ( FirstEntrySList(v7) )
        {
          v13 = ExpInterlockedFlushSList(v7);
          while ( v13 )
          {
            v14 = *((_QWORD *)&v13[3].Next + 1);
            v15 = (IRP *)&v13[-8];
            v13 = v13->Next;
            RaidUnitCompleteIrpRequest(v15, *(_DWORD *)(v14 + 24));
          }
        }
        _InterlockedExchange(
          (volatile __int32 *)g_RaidPerProcessorState
        + 2048 * (unsigned __int64)*a2
        + 32 * *((unsigned __int8 *)a2 + 2)
        + 24,
          0);
      }
    }
  }
}
