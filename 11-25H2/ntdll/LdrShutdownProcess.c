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

void __noreturn LdrShutdownProcess(void)
{
  struct _TEB *v0; // rdi
  _PEB *ProcessEnvironmentBlock; // rbx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  __int64 *FlsData; // rdx
  char v4; // r14
  __int64 *v5; // rsi
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64); // r15
  struct _PEB *v8; // rax
  char *CurrentSwitchContext; // rax
  char *v10; // rbx
  REGHANDLE v11; // rcx
  __int64 *HeapFlsData; // rdx
  REGHANDLE v13; // rcx
  REGHANDLE v14; // rcx
  REGHANDLE v15; // rcx
  _UNICODE_STRING CommandLine; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v17[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v18; // [rsp+60h] [rbp-A8h]
  __int128 v19; // [rsp+70h] [rbp-98h]
  __int128 v20; // [rsp+80h] [rbp-88h]
  __int64 v21; // [rsp+90h] [rbp-78h]
  _QWORD v22[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v23; // [rsp+B0h] [rbp-58h]
  __int128 v24; // [rsp+C0h] [rbp-48h]
  __int128 v25; // [rsp+D0h] [rbp-38h]
  __int64 v26; // [rsp+E0h] [rbp-28h]

  CommandLine = 0LL;
  v0 = NtCurrentTeb();
  ProcessEnvironmentBlock = v0->ProcessEnvironmentBlock;
  if ( !byte_1801D4988 )
  {
    CommandLine = ProcessEnvironmentBlock->ProcessParameters->CommandLine;
    ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
    if ( (ProcessParameters->Flags & 1) == 0 )
      CommandLine.Buffer = (wchar_t *)((char *)CommandLine.Buffer + (unsigned __int64)ProcessParameters);
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      7914,
      (__int64)"LdrShutdownProcess",
      2,
      "Process 0x%p (%wZ) exiting\n",
      v0->ClientId.UniqueProcess,
      &CommandLine);
    qword_1801D4990 = (__int64)v0->ClientId.UniqueThread;
    byte_1801D4988 = 1;
    if ( g_ShimsEnabled )
      ((void (*)(void))(__ROR8__(g_pfnSE_ProcessDying, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))();
    FlsData = (__int64 *)v0->FlsData;
    if ( FlsData )
      RtlpFlsDataCleanup(&RtlpFlsContext, FlsData, 1);
    if ( (LdrpPolicyBits & 2) != 0
      || (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x40000000) != 0
      || (AvrfAppVerifierMode & 1) != 0 )
    {
      v4 = 0;
      v5 = (__int64 *)qword_1801D4978;
      while ( v5 != &qword_1801D4970 )
      {
        v6 = (__int64)(v5 - 4);
        v5 = (__int64 *)v5[1];
        v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v6 + 56);
        if ( v7 && (*(_DWORD *)(v6 + 104) & 0x80000) != 0 )
        {
          v17[0] = 72LL;
          v17[1] = 1LL;
          v18 = 0LL;
          v19 = 0LL;
          v20 = 0LL;
          v21 = 0LL;
          RtlActivateActivationContextUnsafeFast((__int64)v17, *(_QWORD *)(v6 + 136));
          if ( *(_WORD *)(v6 + 110) )
          {
            if ( v0->ThreadLocalStoragePointer )
              LdrpCallTlsInitializers(0, v6);
          }
          LdrpCallInitRoutine(v7, *(_QWORD *)(v6 + 48), 0, 1LL);
          RtlDeactivateActivationContextUnsafeFast((__int64)v17);
        }
      }
      if ( *(_WORD *)(LdrpImageEntry + 110) && v0->ThreadLocalStoragePointer )
      {
        v22[0] = 72LL;
        v22[1] = 1LL;
        v23 = 0LL;
        v24 = 0LL;
        v25 = 0LL;
        v26 = 0LL;
        RtlActivateActivationContextUnsafeFast((__int64)v22, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(0, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast((__int64)v22);
      }
    }
    else
    {
      v4 = 1;
    }
    if ( g_isUcpListInitialized )
    {
      UcpUnInitializeListHead();
      v14 = qword_1801CE6D8;
      dword_1801CE6B8 = 0;
      qword_1801CE6D8 = 0LL;
      EtwNotificationUnregister(v14, 0LL);
    }
    v8 = NtCurrentPeb();
    if ( VSMEnclaveProvidersRegistered && v8->ProcessHeap )
    {
      v13 = qword_1801CE9D8;
      dword_1801CE9B8 = 0;
      qword_1801CE9D8 = 0LL;
      EtwNotificationUnregister(v13, 0LL);
      VSMEnclaveProvidersRegistered = 0;
    }
    if ( CastGuardProvidersRegistered )
    {
      v15 = qword_1801CEA48;
      dword_1801CEA28 = 0;
      qword_1801CEA48 = 0LL;
      EtwNotificationUnregister(v15, 0LL);
      CastGuardProvidersRegistered = 0;
    }
    if ( !v4 )
      RtlDetectHeapLeaks();
    CurrentSwitchContext = SbGetCurrentSwitchContext();
    v10 = CurrentSwitchContext;
    if ( CurrentSwitchContext )
    {
      v11 = *((_QWORD *)CurrentSwitchContext + 2);
      if ( v11 )
      {
        EtwNotificationUnregister(v11, 0LL);
        *((_QWORD *)v10 + 2) = 0LL;
      }
    }
    HeapFlsData = (__int64 *)NtCurrentTeb()->HeapFlsData;
    if ( HeapFlsData )
      RtlpFlsDataCleanup(&RtlpHpEnvFlsContext, HeapFlsData, 1);
  }
}
