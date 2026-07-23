/*
 * XREFs of LdrShutdownThread @ 0x1800AB0D0
 * Callers:
 *     RtlExitUserThread @ 0x1800AADB0 (RtlExitUserThread.c)
 * Callees:
 *     LdrpReleaseLoaderLock @ 0x180031810 (LdrpReleaseLoaderLock.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18003BF70 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x18003F690 (LdrpCallInitRoutine.c)
 *     LdrpCallTlsInitializers @ 0x18003F930 (LdrpCallTlsInitializers.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     LdrpAcquireLoaderLock @ 0x180049720 (LdrpAcquireLoaderLock.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     TpTrimPools @ 0x18005E2D0 (TpTrimPools.c)
 *     RtlpFreeHeapMetadata @ 0x1800647B8 (RtlpFreeHeapMetadata.c)
 *     RtlpFlsDataCleanup @ 0x180064800 (RtlpFlsDataCleanup.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18008CC80 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlpHpEnvFlsCleanup @ 0x1800AB420 (RtlpHpEnvFlsCleanup.c)
 *     LdrpFreeTls @ 0x1800AB4A0 (LdrpFreeTls.c)
 *     RtlFreeThreadActivationContextStack @ 0x1800AB560 (RtlFreeThreadActivationContextStack.c)
 *     LdrpDrainWorkQueue @ 0x1800AB680 (LdrpDrainWorkQueue.c)
 *     LdrpDropLastInProgressCount @ 0x1800ACA84 (LdrpDropLastInProgressCount.c)
 */

void __noreturn LdrShutdownThread(void)
{
  struct _TEB *v0; // rbx
  _PEB *ProcessEnvironmentBlock; // r12
  __int64 *FlsData; // r15
  $0F0CF1477DD258E599462CF86DF691E6 *v3; // rsi
  char v4; // r14
  __int64 v5; // rcx
  __int64 *v6; // r13
  __int64 v7; // rdi
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
  __int64 v21; // [rsp+C0h] [rbp-38h]
  __int64 v22; // [rsp+C8h] [rbp-30h]
  _PEB *v23; // [rsp+108h] [rbp+10h]

  v0 = NtCurrentTeb();
  ProcessEnvironmentBlock = v0->ProcessEnvironmentBlock;
  v23 = ProcessEnvironmentBlock;
  FlsData = (__int64 *)v0->FlsData;
  if ( FlsData )
    RtlpFlsDataCleanup(&RtlpFlsContext, (__int64 *)v0->FlsData, 1);
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
      v6 = (__int64 *)qword_1801D18F8;
      while ( v6 != &qword_1801D18F0 )
      {
        v7 = (__int64)(v6 - 4);
        v21 = v7;
        v6 = (__int64 *)v6[1];
        v5 = *(unsigned int *)(v7 + 104);
        if ( ProcessEnvironmentBlock->ImageBaseAddress != *(void **)(v7 + 48) && (v5 & 0x40000) == 0 )
        {
          v8 = *(_QWORD *)(v7 + 56);
          if ( v8 )
          {
            v5 &= 0x80004u;
            if ( (_DWORD)v5 == 524292 )
            {
              v22 = *(_QWORD *)(v7 + 56);
              v11[0] = 72LL;
              v11[1] = 1LL;
              v12 = 0LL;
              v13 = 0LL;
              v14 = 0LL;
              v15 = 0LL;
              RtlActivateActivationContextUnsafeFast((__int64)v11, *(_QWORD *)(v7 + 136));
              if ( *(_WORD *)(v7 + 110) )
                LdrpCallTlsInitializers(3u, v7);
              LdrpCallInitRoutine(v8, *(_QWORD *)(v7 + 48), 3u, 0LL);
              RtlDeactivateActivationContextUnsafeFast((__int64)v11);
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
        RtlActivateActivationContextUnsafeFast((__int64)v16, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(3u, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast((__int64)v16);
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
    RtlpFlsDataCleanup(&RtlpFlsContext, FlsData, 2);
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
  RtlpHpEnvFlsCleanup(3LL);
  TlsExpansionSlots = v0->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    v0->TlsExpansionSlots = 0LL;
    RtlEnterCriticalSection(&FastPebLock);
    RtlLeaveCriticalSection(&FastPebLock);
    RtlpFreeHeapMetadata((_DWORD *)NtCurrentPeb()->ProcessHeap, TlsExpansionSlots);
  }
}
