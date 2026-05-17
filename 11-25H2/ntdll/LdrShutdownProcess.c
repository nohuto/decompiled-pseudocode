/*
 * XREFs of LdrShutdownProcess @ 0x1800FDE80
 * Callers:
 *     RtlExitUserProcess @ 0x180008E40 (RtlExitUserProcess.c)
 * Callees:
 *     RtlpFlsDataCleanup @ 0x18000A8B0 (RtlpFlsDataCleanup.c)
 *     EtwNotificationUnregister @ 0x180045F20 (EtwNotificationUnregister.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18004E410 (RtlDeactivateActivationContextUnsafeFast.c)
 *     SbGetCurrentSwitchContext @ 0x180071CE0 (SbGetCurrentSwitchContext.c)
 *     LdrpCallTlsInitializers @ 0x180074330 (LdrpCallTlsInitializers.c)
 *     LdrpCallInitRoutine @ 0x180074730 (LdrpCallInitRoutine.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180074EB0 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     RtlDetectHeapLeaks @ 0x1800FE250 (RtlDetectHeapLeaks.c)
 *     UcpUnInitializeListHead @ 0x180159120 (UcpUnInitializeListHead.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void LdrShutdownProcess()
{
  struct _TEB *v0; // rdi
  _PEB *ProcessEnvironmentBlock; // rbx
  __int64 *FlsData; // rdx
  char v3; // r14
  __int64 *v4; // rsi
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, _QWORD, __int64); // r15
  struct _PEB *v7; // rax
  char *CurrentSwitchContext; // rax
  char *v9; // rbx
  __int64 v10; // rcx
  __int64 *HeapFlsData; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD v15[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v16; // [rsp+60h] [rbp-A8h]
  __int128 v17; // [rsp+70h] [rbp-98h]
  __int128 v18; // [rsp+80h] [rbp-88h]
  __int64 v19; // [rsp+90h] [rbp-78h]
  _QWORD v20[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v21; // [rsp+B0h] [rbp-58h]
  __int128 v22; // [rsp+C0h] [rbp-48h]
  __int128 v23; // [rsp+D0h] [rbp-38h]
  __int64 v24; // [rsp+E0h] [rbp-28h]

  v0 = NtCurrentTeb();
  ProcessEnvironmentBlock = v0->ProcessEnvironmentBlock;
  if ( !byte_1801D4988 )
  {
    LdrpLogInternal(
      (__int64)"minkernel\\ldr\\ldrinit.c",
      7914,
      (__int64)"LdrShutdownProcess",
      2,
      "Process 0x%p (%wZ) exiting\n",
      (char)v0->ClientId.UniqueProcess);
    qword_1801D4990 = (__int64)v0->ClientId.UniqueThread;
    byte_1801D4988 = 1;
    if ( g_ShimsEnabled )
      ((void (*)(void))(__ROR8__(g_pfnSE_ProcessDying, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))();
    FlsData = (__int64 *)v0->FlsData;
    if ( FlsData )
      RtlpFlsDataCleanup((__int64)&RtlpFlsContext, FlsData, 1);
    if ( (LdrpPolicyBits & 2) != 0
      || (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x40000000) != 0
      || (AvrfAppVerifierMode & 1) != 0 )
    {
      v3 = 0;
      v4 = (__int64 *)qword_1801D4978;
      while ( v4 != &qword_1801D4970 )
      {
        v5 = (__int64)(v4 - 4);
        v4 = (__int64 *)v4[1];
        v6 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v5 + 56);
        if ( v6 && (*(_DWORD *)(v5 + 104) & 0x80000) != 0 )
        {
          v15[0] = 72LL;
          v15[1] = 1LL;
          v16 = 0LL;
          v17 = 0LL;
          v18 = 0LL;
          v19 = 0LL;
          RtlActivateActivationContextUnsafeFast((__int64)v15, *(_QWORD *)(v5 + 136));
          if ( *(_WORD *)(v5 + 110) )
          {
            if ( v0->ThreadLocalStoragePointer )
              LdrpCallTlsInitializers(0, v5);
          }
          LdrpCallInitRoutine(v6, *(_QWORD *)(v5 + 48), 0, 1LL);
          RtlDeactivateActivationContextUnsafeFast((__int64)v15);
        }
      }
      if ( *(_WORD *)(LdrpImageEntry + 110) && v0->ThreadLocalStoragePointer )
      {
        v20[0] = 72LL;
        v20[1] = 1LL;
        v21 = 0LL;
        v22 = 0LL;
        v23 = 0LL;
        v24 = 0LL;
        RtlActivateActivationContextUnsafeFast((__int64)v20, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(0, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast((__int64)v20);
      }
    }
    else
    {
      v3 = 1;
    }
    if ( g_isUcpListInitialized )
    {
      UcpUnInitializeListHead();
      v13 = qword_1801CE6D8;
      dword_1801CE6B8 = 0;
      qword_1801CE6D8 = 0LL;
      EtwNotificationUnregister(v13, 0LL);
    }
    v7 = NtCurrentPeb();
    if ( VSMEnclaveProvidersRegistered && v7->ProcessHeap )
    {
      v12 = qword_1801CE9D8;
      dword_1801CE9B8 = 0;
      qword_1801CE9D8 = 0LL;
      EtwNotificationUnregister(v12, 0LL);
      VSMEnclaveProvidersRegistered = 0;
    }
    if ( CastGuardProvidersRegistered )
    {
      v14 = qword_1801CEA48;
      dword_1801CEA28 = 0;
      qword_1801CEA48 = 0LL;
      EtwNotificationUnregister(v14, 0LL);
      CastGuardProvidersRegistered = 0;
    }
    if ( !v3 )
      RtlDetectHeapLeaks();
    CurrentSwitchContext = SbGetCurrentSwitchContext();
    v9 = CurrentSwitchContext;
    if ( CurrentSwitchContext )
    {
      v10 = *((_QWORD *)CurrentSwitchContext + 2);
      if ( v10 )
      {
        EtwNotificationUnregister(v10, 0LL);
        *((_QWORD *)v9 + 2) = 0LL;
      }
    }
    HeapFlsData = (__int64 *)NtCurrentTeb()->HeapFlsData;
    if ( HeapFlsData )
      RtlpFlsDataCleanup((__int64)&RtlpHpEnvFlsContext, HeapFlsData, 1);
  }
}
