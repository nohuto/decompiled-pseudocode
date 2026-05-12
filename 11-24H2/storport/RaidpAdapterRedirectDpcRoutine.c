/*
 * XREFs of RaidpAdapterRedirectDpcRoutine @ 0x14001F240
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitCompleteIrpRequest @ 0x14000B1C0 (RaidUnitCompleteIrpRequest.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x14001C05C (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidUnitCompleteRequest @ 0x14001F490 (RaidUnitCompleteRequest.c)
 *     McTemplateK0pzqqxxtt_EtwWriteTransfer @ 0x140052F38 (McTemplateK0pzqqxxtt_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

void __fastcall RaidpAdapterRedirectDpcRoutine(
        struct _KDPC *Dpc,
        union _SLIST_HEADER *DeferredContext,
        _QWORD *SystemArgument1,
        PVOID SystemArgument2)
{
  LARGE_INTEGER v4; // rbx
  union _SLIST_HEADER *v5; // rdi
  unsigned int v6; // ebp
  union _SLIST_HEADER *v7; // r15
  _DWORD *v9; // r14
  PSLIST_ENTRY i; // rdi
  bool v11; // zf
  PSLIST_ENTRY v12; // rsi
  _SLIST_ENTRY *Next; // rax
  PSLIST_ENTRY j; // rdi
  __int64 v15; // rdx
  IRP *v16; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v18; // rax
  LARGE_INTEGER v19; // rdx
  unsigned int LowPart; // ecx
  LARGE_INTEGER v21; // r8
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // r9
  int v24; // [rsp+60h] [rbp-48h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+C0h] [rbp+18h] BYREF

  v4.QuadPart = 0LL;
  v5 = DeferredContext + 4;
  v6 = 0;
  v7 = DeferredContext + 5;
  v24 = MEMORY[0xFFFFF78000000320];
  if ( StorEtwLoggingEnabled && (byte_140171463 & 4) != 0 )
  {
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v4 = PerformanceCounter;
  }
  v9 = (_DWORD *)SystemArgument1[8];
  if ( FirstEntrySList(v5) )
  {
    for ( i = ExpInterlockedFlushSList(v5); i; ++v6 )
    {
      v11 = (BYTE1(i[-1].Next) & 1) == 0;
      v12 = i - 2;
      i = i->Next;
      if ( !v11 )
      {
        RaidAdapterPoFxIdleComponentFromMiniport(*((_QWORD *)&v12[13].Next + 1), *((unsigned int *)&v12[46].Next + 3));
        BYTE1(v12[1].Next) &= ~1u;
      }
      Next = v12[41].Next;
      if ( Next == (_SLIST_ENTRY *)RaidUnitCompleteRequest )
        RaidUnitCompleteRequest(v12);
      else
        ((void (__fastcall *)(PSLIST_ENTRY))Next)(v12);
    }
  }
  if ( FirstEntrySList(v7) )
  {
    for ( j = ExpInterlockedFlushSList(v7); j; ++v6 )
    {
      v15 = *((_QWORD *)&j[3].Next + 1);
      v16 = (IRP *)&j[-8];
      j = j->Next;
      RaidUnitCompleteIrpRequest(v16, *(_DWORD *)(v15 + 24));
    }
  }
  if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - v24) > v9[1178] )
  {
    v9[1178] = MEMORY[0xFFFFF78000000320] - v24;
    v9[1179] = v6;
  }
  if ( v6 > v9[1177] )
    v9[1177] = v6;
  if ( StorEtwLoggingEnabled && (byte_140171463 & 4) != 0 && v6 >= 0x19 )
  {
    PerformanceFrequency.QuadPart = 1LL;
    if ( UseQPCTime )
      v18 = KeQueryPerformanceCounter(&PerformanceFrequency);
    else
      v18.QuadPart = KeQueryUnbiasedInterruptTime();
    if ( v18.QuadPart <= 0 || v18.QuadPart >= v4.QuadPart )
      v22 = v18.QuadPart - v4.QuadPart;
    else
      v22 = v18.QuadPart - v4.QuadPart - 1;
    if ( UseQPCTime )
    {
      LowPart = PerformanceFrequency.LowPart;
      LOBYTE(v23) = 0;
      if ( PerformanceFrequency.QuadPart && v22 )
      {
        v21.QuadPart = 1000 * (v22 % PerformanceFrequency.QuadPart);
        v19.QuadPart = 10000 * (v21.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart)
                     % PerformanceFrequency.QuadPart;
        v23 = 10000 * (v21.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
            + 10000
            * (1000 * (v22 / PerformanceFrequency.QuadPart)
             + v21.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart);
      }
    }
    else
    {
      LOBYTE(v23) = v22;
    }
    if ( (byte_140171463 & 4) != 0 )
      McTemplateK0pzqqxxtt_EtwWriteTransfer(
        LowPart,
        v19.LowPart,
        v21.LowPart,
        (unsigned int)RaidpAdapterRedirectDpcRoutine,
        (__int64)L"RaidpAdapterRedirectDpcRoutine",
        v9[14],
        v6,
        v22,
        v23,
        0,
        0);
  }
}
