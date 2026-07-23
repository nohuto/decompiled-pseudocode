/*
 * XREFs of RtlpQueryProcessDebugInformationRemote @ 0x180132130
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryProcessDebugInformation @ 0x180028C60 (RtlQueryProcessDebugInformation.c)
 *     RtlExitUserThread @ 0x1800AADB0 (RtlExitUserThread.c)
 *     NtUnmapViewOfSection @ 0x180160590 (NtUnmapViewOfSection.c)
 */

void __fastcall __noreturn RtlpQueryProcessDebugInformationRemote(_RTL_DEBUG_INFORMATION *BaseAddress)
{
  int ProcessDebugInformation; // edi
  ULONG_PTR ViewBaseDelta; // rcx
  PRTL_PROCESS_MODULES Modules; // rdx
  PRTL_PROCESS_BACKTRACES BackTraces; // rax
  _DWORD *Heaps; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax
  PRTL_PROCESS_LOCKS Locks; // rax
  PRTL_PROCESS_VERIFIER_OPTIONS VerifierOptions; // rax

  ProcessDebugInformation = RtlQueryProcessDebugInformation(
                              NtCurrentTeb()->ClientId.UniqueProcess,
                              BaseAddress->Flags,
                              BaseAddress);
  if ( ProcessDebugInformation >= 0 )
  {
    ViewBaseDelta = BaseAddress->ViewBaseDelta;
    if ( ViewBaseDelta )
    {
      Modules = BaseAddress->Modules;
      if ( Modules )
        BaseAddress->Modules = (PRTL_PROCESS_MODULES)((char *)Modules + ViewBaseDelta);
      BackTraces = BaseAddress->BackTraces;
      if ( BackTraces )
        BaseAddress->BackTraces = (PRTL_PROCESS_BACKTRACES)((char *)BackTraces + ViewBaseDelta);
      Heaps = BaseAddress->Heaps;
      if ( Heaps )
      {
        v7 = 0LL;
        for ( BaseAddress->Heaps = (char *)Heaps + ViewBaseDelta; (unsigned int)v7 < *Heaps; v7 = (unsigned int)(v7 + 1) )
        {
          v8 = 24 * v7;
          v9 = *(_QWORD *)&Heaps[24 * v7 + 20];
          if ( v9 )
            *(_QWORD *)&Heaps[v8 + 20] = ViewBaseDelta + v9;
          v10 = *(_QWORD *)&Heaps[v8 + 22];
          if ( v10 )
            *(_QWORD *)&Heaps[v8 + 22] = ViewBaseDelta + v10;
        }
      }
      Locks = BaseAddress->Locks;
      if ( Locks )
        BaseAddress->Locks = (PRTL_PROCESS_LOCKS)((char *)Locks + ViewBaseDelta);
      VerifierOptions = BaseAddress->VerifierOptions;
      if ( VerifierOptions )
        BaseAddress->VerifierOptions = (PRTL_PROCESS_VERIFIER_OPTIONS)((char *)VerifierOptions + ViewBaseDelta);
    }
  }
  BaseAddress->ViewBaseTarget = 0LL;
  NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  RtlExitUserThread(ProcessDebugInformation);
}
