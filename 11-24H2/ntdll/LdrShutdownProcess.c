/*
 * XREFs of LdrShutdownProcess @ 0x180002B70
 * Callers:
 *     RtlExitUserProcess @ 0x180004320 (RtlExitUserProcess.c)
 * Callees:
 *     RtlpHpEnvFlsCleanup @ 0x1800041C8 (RtlpHpEnvFlsCleanup.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18000F570 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x180012C90 (LdrpCallInitRoutine.c)
 *     LdrpCallTlsInitializers @ 0x180012F30 (LdrpCallTlsInitializers.c)
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     EtwNotificationUnregister @ 0x18001D140 (EtwNotificationUnregister.c)
 *     RtlpFlsDataCleanup @ 0x18004EC20 (RtlpFlsDataCleanup.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800703A0 (RtlActivateActivationContextUnsafeFast.c)
 *     SbGetCurrentSwitchContext @ 0x1800710E0 (SbGetCurrentSwitchContext.c)
 *     RtlDetectHeapLeaks @ 0x18010A5F0 (RtlDetectHeapLeaks.c)
 *     UcpUnInitializeListHead @ 0x180157B70 (UcpUnInitializeListHead.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_UNKNOWN **LdrShutdownProcess()
{
  _UNKNOWN **result; // rax
  struct _TEB *v1; // rdi
  _PEB *ProcessEnvironmentBlock; // rbx
  void *FlsData; // rdx
  char v4; // r14
  __int64 *v5; // rsi
  __int64 *v6; // rbx
  __int64 v7; // r15
  struct _PEB *v8; // rax
  __int64 CurrentSwitchContext; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
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
  _UNKNOWN *retaddr; // [rsp+108h] [rbp+0h] BYREF

  result = &retaddr;
  v1 = NtCurrentTeb();
  ProcessEnvironmentBlock = v1->ProcessEnvironmentBlock;
  if ( !byte_1801D2908 )
  {
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrinit.c",
      7909,
      (int)"LdrShutdownProcess",
      2,
      "Process 0x%p (%wZ) exiting\n",
      (char)v1->ClientId.UniqueProcess);
    qword_1801D2910 = (__int64)v1->ClientId.UniqueThread;
    byte_1801D2908 = 1;
    if ( g_ShimsEnabled )
      ((void (*)(void))(__ROR8__(g_pfnSE_ProcessDying, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))();
    FlsData = v1->FlsData;
    if ( FlsData )
      RtlpFlsDataCleanup(&RtlpFlsContext, FlsData, 1LL);
    if ( (LdrpPolicyBits & 2) != 0
      || (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x40000000) != 0
      || (AvrfAppVerifierMode & 1) != 0 )
    {
      v4 = 0;
      v5 = (__int64 *)qword_1801D28F8;
      while ( v5 != &qword_1801D28F0 )
      {
        v6 = v5 - 4;
        v5 = (__int64 *)v5[1];
        v7 = v6[7];
        if ( v7 && (v6[13] & 0x80000) != 0 )
        {
          v15[0] = 72LL;
          v15[1] = 1LL;
          v16 = 0LL;
          v17 = 0LL;
          v18 = 0LL;
          v19 = 0LL;
          RtlActivateActivationContextUnsafeFast(v15, v6[17]);
          if ( *((_WORD *)v6 + 55) )
          {
            if ( v1->ThreadLocalStoragePointer )
              LdrpCallTlsInitializers(0LL, v6);
          }
          LdrpCallInitRoutine(v7, v6[6], 0LL, 1LL);
          RtlDeactivateActivationContextUnsafeFast(v15);
        }
      }
      if ( *(_WORD *)(LdrpImageEntry + 110) && v1->ThreadLocalStoragePointer )
      {
        v20[0] = 72LL;
        v20[1] = 1LL;
        v21 = 0LL;
        v22 = 0LL;
        v23 = 0LL;
        v24 = 0LL;
        RtlActivateActivationContextUnsafeFast(v20, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(0LL, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast(v20);
      }
    }
    else
    {
      v4 = 1;
    }
    if ( g_isUcpListInitialized )
    {
      UcpUnInitializeListHead();
      v13 = qword_1801CC6D8;
      dword_1801CC6B8 = 0;
      qword_1801CC6D8 = 0LL;
      EtwNotificationUnregister(v13, 0LL);
    }
    v8 = NtCurrentPeb();
    if ( VSMEnclaveProvidersRegistered && v8->ProcessHeap )
    {
      v12 = qword_1801CCA10;
      dword_1801CC9F0 = 0;
      qword_1801CCA10 = 0LL;
      EtwNotificationUnregister(v12, 0LL);
      VSMEnclaveProvidersRegistered = 0;
    }
    if ( CastGuardProvidersRegistered )
    {
      v14 = qword_1801CCA48;
      dword_1801CCA28 = 0;
      qword_1801CCA48 = 0LL;
      EtwNotificationUnregister(v14, 0LL);
      CastGuardProvidersRegistered = 0;
    }
    if ( !v4 )
      RtlDetectHeapLeaks();
    CurrentSwitchContext = SbGetCurrentSwitchContext();
    v10 = CurrentSwitchContext;
    if ( CurrentSwitchContext )
    {
      v11 = *(_QWORD *)(CurrentSwitchContext + 16);
      if ( v11 )
      {
        EtwNotificationUnregister(v11, 0LL);
        *(_QWORD *)(v10 + 16) = 0LL;
      }
    }
    return (_UNKNOWN **)RtlpHpEnvFlsCleanup(1LL);
  }
  return result;
}
