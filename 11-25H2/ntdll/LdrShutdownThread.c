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

void __noreturn LdrShutdownThread(void)
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
  void **TlsExpansionSlots; // rdi
  void *FiberData; // r8
  _QWORD v11[2]; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v12; // [rsp+30h] [rbp-C8h]
  __int128 v13; // [rsp+40h] [rbp-B8h]
  __int128 v14; // [rsp+50h] [rbp-A8h]
  __int64 v15; // [rsp+60h] [rbp-98h]
  _QWORD v16[2]; // [rsp+70h] [rbp-88h] BYREF
  __int128 v17; // [rsp+80h] [rbp-78h]
  __int128 v18; // [rsp+90h] [rbp-68h]
  __int128 v19; // [rsp+A0h] [rbp-58h]
  __int64 v20; // [rsp+B0h] [rbp-48h]
  __int64 *v21; // [rsp+C0h] [rbp-38h]
  __int64 v22; // [rsp+C8h] [rbp-30h]
  _PEB *v23; // [rsp+108h] [rbp+10h]

  v0 = NtCurrentTeb();
  ProcessEnvironmentBlock = v0->ProcessEnvironmentBlock;
  v23 = ProcessEnvironmentBlock;
  FlsData = v0->FlsData;
  if ( FlsData )
    RtlpFlsDataCleanup(&RtlpFlsContext);
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
        v21 = v7;
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
              v22 = v7[7];
              v11[0] = 72LL;
              v11[1] = 1LL;
              v12 = 0LL;
              v13 = 0LL;
              v14 = 0LL;
              v15 = 0LL;
              RtlActivateActivationContextUnsafeFast(v11, v7[17]);
              if ( *((_WORD *)v7 + 55) )
                LdrpCallTlsInitializers(3LL, v7);
              LdrpCallInitRoutine(v8, v7[6], 3LL);
              RtlDeactivateActivationContextUnsafeFast(v11);
            }
          }
          ProcessEnvironmentBlock = v23;
        }
      }
      if ( *(_WORD *)(LdrpImageEntry + 110) )
      {
        v16[0] = 72LL;
        v16[1] = 1LL;
        v17 = 0LL;
        v18 = 0LL;
        v19 = 0LL;
        v20 = 0LL;
        RtlActivateActivationContextUnsafeFast(v16, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(3LL, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast(v16);
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
    RtlpFlsDataCleanup(&RtlpFlsContext);
  }
  if ( (v3->SameTebFlags & 4) != 0 )
  {
    FiberData = v0->NtTib.FiberData;
    v0->NtTib.FiberData = 0LL;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, FiberData);
  }
  RtlFreeThreadActivationContextStack();
  if ( (v3->SameTebFlags & 0x400) != 0 && LdrInitState == 3 )
    TpTrimPools();
  if ( NtCurrentTeb()->HeapFlsData )
  {
    RtlpFlsDataCleanup(&RtlpHpEnvFlsContext);
    NtCurrentTeb()->HeapFlsData = (void *)-1LL;
  }
  TlsExpansionSlots = v0->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    v0->TlsExpansionSlots = 0LL;
    RtlEnterCriticalSection(&FastPebLock);
    RtlLeaveCriticalSection(&FastPebLock);
    RtlpFreeHeapMetadata(NtCurrentPeb()->ProcessHeap, TlsExpansionSlots);
  }
}
