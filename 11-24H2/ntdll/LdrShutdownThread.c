/*
 * XREFs of LdrShutdownThread @ 0x1800045E0
 * Callers:
 *     RtlExitUserThread @ 0x1800042C0 (RtlExitUserThread.c)
 * Callees:
 *     LdrpDropLastInProgressCount @ 0x180001F40 (LdrpDropLastInProgressCount.c)
 *     LdrpDrainWorkQueue @ 0x180003E20 (LdrpDrainWorkQueue.c)
 *     RtlFreeThreadActivationContextStack @ 0x180003FF0 (RtlFreeThreadActivationContextStack.c)
 *     LdrpFreeTls @ 0x180004110 (LdrpFreeTls.c)
 *     RtlpHpEnvFlsCleanup @ 0x1800041C8 (RtlpHpEnvFlsCleanup.c)
 *     LdrpReleaseLoaderLock @ 0x180004E10 (LdrpReleaseLoaderLock.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18000F570 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x180012C90 (LdrpCallInitRoutine.c)
 *     LdrpCallTlsInitializers @ 0x180012F30 (LdrpCallTlsInitializers.c)
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     LdrpAcquireLoaderLock @ 0x18001CD20 (LdrpAcquireLoaderLock.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpFreeHeapMetadata @ 0x18004EBD8 (RtlpFreeHeapMetadata.c)
 *     RtlpFlsDataCleanup @ 0x18004EC20 (RtlpFlsDataCleanup.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800703A0 (RtlActivateActivationContextUnsafeFast.c)
 *     TpTrimPools @ 0x1800F57E0 (TpTrimPools.c)
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
  void **TlsExpansionSlots; // rdi
  __int64 result; // rax
  void *FiberData; // r8
  _QWORD v12[2]; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v13; // [rsp+30h] [rbp-C8h]
  __int128 v14; // [rsp+40h] [rbp-B8h]
  __int128 v15; // [rsp+50h] [rbp-A8h]
  __int64 v16; // [rsp+60h] [rbp-98h]
  _QWORD v17[2]; // [rsp+70h] [rbp-88h] BYREF
  __int128 v18; // [rsp+80h] [rbp-78h]
  __int128 v19; // [rsp+90h] [rbp-68h]
  __int128 v20; // [rsp+A0h] [rbp-58h]
  __int64 v21; // [rsp+B0h] [rbp-48h]
  __int64 *v22; // [rsp+C0h] [rbp-38h]
  __int64 v23; // [rsp+C8h] [rbp-30h]
  _PEB *v24; // [rsp+108h] [rbp+10h]

  v0 = NtCurrentTeb();
  ProcessEnvironmentBlock = v0->ProcessEnvironmentBlock;
  v24 = ProcessEnvironmentBlock;
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
        LdrpDrainWorkQueue(0);
      }
      LdrpAcquireLoaderLock();
      v6 = (__int64 *)qword_1801D28F8;
      while ( v6 != &qword_1801D28F0 )
      {
        v7 = v6 - 4;
        v22 = v7;
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
              v23 = v7[7];
              v12[0] = 72LL;
              v12[1] = 1LL;
              v13 = 0LL;
              v14 = 0LL;
              v15 = 0LL;
              v16 = 0LL;
              RtlActivateActivationContextUnsafeFast(v12, v7[17]);
              if ( *((_WORD *)v7 + 55) )
                LdrpCallTlsInitializers(3LL, v7);
              LdrpCallInitRoutine(v8, v7[6], 3LL, 0LL);
              RtlDeactivateActivationContextUnsafeFast(v12);
            }
          }
          ProcessEnvironmentBlock = v24;
        }
      }
      if ( *(_WORD *)(LdrpImageEntry + 110) )
      {
        v17[0] = 72LL;
        v17[1] = 1LL;
        v18 = 0LL;
        v19 = 0LL;
        v20 = 0LL;
        v21 = 0LL;
        RtlActivateActivationContextUnsafeFast(v17, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(3LL, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast(v17);
      }
      LdrpReleaseLoaderLock(v5, 19LL);
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
  RtlpHpEnvFlsCleanup(3);
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
