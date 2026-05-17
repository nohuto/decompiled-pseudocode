/*
 * XREFs of LdrShutdownThread @ 0x180009100
 * Callers:
 *     RtlExitUserThread @ 0x180008DE0 (RtlExitUserThread.c)
 * Callees:
 *     LdrpReleaseLoaderLock @ 0x180007A00 (LdrpReleaseLoaderLock.c)
 *     LdrpFreeTls @ 0x180009480 (LdrpFreeTls.c)
 *     RtlFreeThreadActivationContextStack @ 0x180009540 (RtlFreeThreadActivationContextStack.c)
 *     RtlpFreeHeapMetadata @ 0x18000A864 (RtlpFreeHeapMetadata.c)
 *     RtlpFlsDataCleanup @ 0x18000A8B0 (RtlpFlsDataCleanup.c)
 *     LdrpAcquireLoaderLock @ 0x180046860 (LdrpAcquireLoaderLock.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18004E410 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpDrainWorkQueue @ 0x18006FAA0 (LdrpDrainWorkQueue.c)
 *     LdrpCallTlsInitializers @ 0x180074330 (LdrpCallTlsInitializers.c)
 *     LdrpCallInitRoutine @ 0x180074730 (LdrpCallInitRoutine.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180074EB0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     LdrpDropLastInProgressCount @ 0x1800F05A0 (LdrpDropLastInProgressCount.c)
 *     TpTrimPools @ 0x1800F7360 (TpTrimPools.c)
 */

__int64 LdrShutdownThread()
{
  struct _TEB *v0; // rbx
  _PEB *ProcessEnvironmentBlock; // r12
  void *FlsData; // r15
  $C9D07D6EB863460955B0DD5F998611AD *v3; // rsi
  char v4; // r14
  __int64 v5; // rcx
  __int64 *v6; // r13
  __int64 *v7; // rdi
  __int64 v8; // r12
  void *HeapFlsData; // rdx
  void **TlsExpansionSlots; // rdi
  __int64 result; // rax
  void *FiberData; // r8
  _QWORD v13[2]; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v14; // [rsp+30h] [rbp-C8h]
  __int128 v15; // [rsp+40h] [rbp-B8h]
  __int128 v16; // [rsp+50h] [rbp-A8h]
  __int64 v17; // [rsp+60h] [rbp-98h]
  _QWORD v18[2]; // [rsp+70h] [rbp-88h] BYREF
  __int128 v19; // [rsp+80h] [rbp-78h]
  __int128 v20; // [rsp+90h] [rbp-68h]
  __int128 v21; // [rsp+A0h] [rbp-58h]
  __int64 v22; // [rsp+B0h] [rbp-48h]
  __int64 *v23; // [rsp+C0h] [rbp-38h]
  __int64 v24; // [rsp+C8h] [rbp-30h]
  _PEB *v25; // [rsp+108h] [rbp+10h]

  v0 = NtCurrentTeb();
  ProcessEnvironmentBlock = v0->ProcessEnvironmentBlock;
  v25 = ProcessEnvironmentBlock;
  FlsData = v0->FlsData;
  if ( FlsData )
    RtlpFlsDataCleanup(&RtlpFlsContext, v0->FlsData, 1LL);
  if ( (NtCurrentTeb()->SameTebFlags & 8) == 0 || (NtCurrentTeb()->SameTebFlags & 0x20) != 0 )
  {
    v3 = &v0->6126;
    if ( (v0->SameTebFlags & 0x2000) == 0 )
    {
      if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
      {
        v4 = 1;
      }
      else
      {
        v4 = 0;
        LdrpDrainWorkQueue(0LL);
      }
      LdrpAcquireLoaderLock();
      v6 = (__int64 *)qword_1801D4978;
      while ( v6 != &qword_1801D4970 )
      {
        v7 = v6 - 4;
        v23 = v7;
        v6 = (__int64 *)v6[1];
        v5 = *((unsigned int *)v7 + 26);
        if ( ProcessEnvironmentBlock->ImageBaseAddress != (void *)v7[6] && (v5 & 0x40000) == 0 )
        {
          v8 = v7[7];
          if ( v8 )
          {
            v5 &= 0x80004u;
            if ( (_DWORD)v5 == 524292 )
            {
              v24 = v7[7];
              v13[0] = 72LL;
              v13[1] = 1LL;
              v14 = 0LL;
              v15 = 0LL;
              v16 = 0LL;
              v17 = 0LL;
              RtlActivateActivationContextUnsafeFast(v13, v7[17]);
              if ( *((_WORD *)v7 + 55) )
                LdrpCallTlsInitializers(3LL, v7);
              LdrpCallInitRoutine(v8, v7[6], 3LL);
              RtlDeactivateActivationContextUnsafeFast(v13);
            }
          }
          ProcessEnvironmentBlock = v25;
        }
      }
      if ( *(_WORD *)(LdrpImageEntry + 110) )
      {
        v18[0] = 72LL;
        v18[1] = 1LL;
        v19 = 0LL;
        v20 = 0LL;
        v21 = 0LL;
        v22 = 0LL;
        RtlActivateActivationContextUnsafeFast(v18, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(3LL, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast(v18);
      }
      LdrpReleaseLoaderLock(v5, 19, 0);
      if ( !v4 )
        LdrpDropLastInProgressCount();
      LdrpFreeTls();
    }
  }
  else
  {
    v3 = &v0->6126;
  }
  if ( FlsData )
  {
    v0->FlsData = 0LL;
    RtlpFlsDataCleanup(&RtlpFlsContext, FlsData, 2LL);
  }
  if ( (v3->SameTebFlags & 4) != 0 )
  {
    FiberData = v0->NtTib.FiberData;
    v0->NtTib.FiberData = 0LL;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, FiberData);
  }
  RtlFreeThreadActivationContextStack();
  if ( (v3->SameTebFlags & 0x400) != 0 && LdrInitState == 3 )
    TpTrimPools();
  HeapFlsData = NtCurrentTeb()->HeapFlsData;
  if ( HeapFlsData )
  {
    RtlpFlsDataCleanup(&RtlpHpEnvFlsContext, HeapFlsData, 3LL);
    NtCurrentTeb()->HeapFlsData = (void *)-1LL;
  }
  TlsExpansionSlots = v0->TlsExpansionSlots;
  result = 0LL;
  if ( TlsExpansionSlots )
  {
    v0->TlsExpansionSlots = 0LL;
    RtlEnterCriticalSection(&FastPebLock);
    RtlLeaveCriticalSection(&FastPebLock);
    return RtlpFreeHeapMetadata(NtCurrentPeb()->ProcessHeap, TlsExpansionSlots);
  }
  return result;
}
