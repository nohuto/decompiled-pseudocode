/*
 * XREFs of LdrShutdownProcess @ 0x1800ABBC0
 * Callers:
 *     RtlExitUserProcess @ 0x1800AAE10 (RtlExitUserProcess.c)
 * Callees:
 *     RtlDetectHeapLeaks @ 0x180022B90 (RtlDetectHeapLeaks.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18003BF70 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x18003F690 (LdrpCallInitRoutine.c)
 *     LdrpCallTlsInitializers @ 0x18003F930 (LdrpCallTlsInitializers.c)
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     EtwNotificationUnregister @ 0x180049B40 (EtwNotificationUnregister.c)
 *     RtlpFlsDataCleanup @ 0x180064800 (RtlpFlsDataCleanup.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18008CC80 (RtlActivateActivationContextUnsafeFast.c)
 *     SbGetCurrentSwitchContext @ 0x18008D9C0 (SbGetCurrentSwitchContext.c)
 *     RtlpHpEnvFlsCleanup @ 0x1800AB420 (RtlpHpEnvFlsCleanup.c)
 *     UcpUnInitializeListHead @ 0x180155F30 (UcpUnInitializeListHead.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v7; // r15
  struct _PEB *v8; // rax
  char *CurrentSwitchContext; // rax
  char *v10; // rbx
  REGHANDLE v11; // rcx
  REGHANDLE v12; // rcx
  REGHANDLE v13; // rcx
  REGHANDLE v14; // rcx
  _UNICODE_STRING CommandLine; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v16[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v17; // [rsp+60h] [rbp-A8h]
  __int128 v18; // [rsp+70h] [rbp-98h]
  __int128 v19; // [rsp+80h] [rbp-88h]
  __int64 v20; // [rsp+90h] [rbp-78h]
  _QWORD v21[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v22; // [rsp+B0h] [rbp-58h]
  __int128 v23; // [rsp+C0h] [rbp-48h]
  __int128 v24; // [rsp+D0h] [rbp-38h]
  __int64 v25; // [rsp+E0h] [rbp-28h]

  CommandLine = 0LL;
  v0 = NtCurrentTeb();
  ProcessEnvironmentBlock = v0->ProcessEnvironmentBlock;
  if ( !byte_1801D1908 )
  {
    CommandLine = ProcessEnvironmentBlock->ProcessParameters->CommandLine;
    ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
    if ( (ProcessParameters->Flags & 1) == 0 )
      CommandLine.Buffer = (wchar_t *)((char *)CommandLine.Buffer + (unsigned __int64)ProcessParameters);
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      7909,
      (__int64)"LdrShutdownProcess",
      2,
      "Process 0x%p (%wZ) exiting\n",
      v0->ClientId.UniqueProcess,
      &CommandLine);
    qword_1801D1910 = (__int64)v0->ClientId.UniqueThread;
    byte_1801D1908 = 1;
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
      v5 = (__int64 *)qword_1801D18F8;
      while ( v5 != &qword_1801D18F0 )
      {
        v6 = (__int64)(v5 - 4);
        v5 = (__int64 *)v5[1];
        v7 = *(_QWORD *)(v6 + 56);
        if ( v7 && (*(_DWORD *)(v6 + 104) & 0x80000) != 0 )
        {
          v16[0] = 72LL;
          v16[1] = 1LL;
          v17 = 0LL;
          v18 = 0LL;
          v19 = 0LL;
          v20 = 0LL;
          RtlActivateActivationContextUnsafeFast((__int64)v16, *(_QWORD *)(v6 + 136));
          if ( *(_WORD *)(v6 + 110) )
          {
            if ( v0->ThreadLocalStoragePointer )
              LdrpCallTlsInitializers(0, v6);
          }
          LdrpCallInitRoutine(v7, *(_QWORD *)(v6 + 48), 0, 1LL);
          RtlDeactivateActivationContextUnsafeFast((__int64)v16);
        }
      }
      if ( *(_WORD *)(LdrpImageEntry + 110) && v0->ThreadLocalStoragePointer )
      {
        v21[0] = 72LL;
        v21[1] = 1LL;
        v22 = 0LL;
        v23 = 0LL;
        v24 = 0LL;
        v25 = 0LL;
        RtlActivateActivationContextUnsafeFast((__int64)v21, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(0, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast((__int64)v21);
      }
    }
    else
    {
      v4 = 1;
    }
    if ( g_isUcpListInitialized )
    {
      UcpUnInitializeListHead();
      v13 = qword_1801CB6D8;
      dword_1801CB6B8 = 0;
      qword_1801CB6D8 = 0LL;
      EtwNotificationUnregister(v13, 0LL);
    }
    v8 = NtCurrentPeb();
    if ( VSMEnclaveProvidersRegistered && v8->ProcessHeap )
    {
      v12 = qword_1801CB9D8;
      dword_1801CB9B8 = 0;
      qword_1801CB9D8 = 0LL;
      EtwNotificationUnregister(v12, 0LL);
      VSMEnclaveProvidersRegistered = 0;
    }
    if ( CastGuardProvidersRegistered )
    {
      v14 = qword_1801CBA48;
      dword_1801CBA28 = 0;
      qword_1801CBA48 = 0LL;
      EtwNotificationUnregister(v14, 0LL);
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
    RtlpHpEnvFlsCleanup(1);
  }
}
