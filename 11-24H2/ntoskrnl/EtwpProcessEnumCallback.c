/*
 * XREFs of EtwpProcessEnumCallback @ 0x1408EF230
 * Callers:
 *     EtwpProcessThreadImageRundown @ 0x140A0F50C (EtwpProcessThreadImageRundown.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     PsGetProcessServerSilo @ 0x14043D810 (PsGetProcessServerSilo.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     EtwpEnumerateWorkingSet @ 0x1407B0EE0 (EtwpEnumerateWorkingSet.c)
 *     EtwpObjectHandleRundown @ 0x1407B13BC (EtwpObjectHandleRundown.c)
 *     PsEnumProcessThreads @ 0x1408EEAB0 (PsEnumProcessThreads.c)
 *     EtwpThreadEnumCallback @ 0x1408EEB50 (EtwpThreadEnumCallback.c)
 *     EtwpIsProcessZombie @ 0x1408EF5F4 (EtwpIsProcessZombie.c)
 *     EtwpTraceProcessRundown @ 0x1408EF628 (EtwpTraceProcessRundown.c)
 *     EtwpProcessPerfCtrsRundown @ 0x1408F0418 (EtwpProcessPerfCtrsRundown.c)
 *     EtwpSysModuleRunDown @ 0x1408F1048 (EtwpSysModuleRunDown.c)
 *     EtwpEnumerateAddressSpace @ 0x140951B80 (EtwpEnumerateAddressSpace.c)
 */

__int64 __fastcall EtwpProcessEnumCallback(PEPROCESS Process, __int64 a2)
{
  __int64 v2; // r14
  char v3; // r12
  _DWORD *v5; // rbx
  char v7; // r13
  char v8; // r15
  __int64 ProcessServerSilo; // rax
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // bp
  _QWORD *ServerSiloGlobals; // rax
  __int64 v17; // rdx
  unsigned int v18; // ebp
  unsigned int j; // r15d
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // r15d
  unsigned int i; // ebp
  __int64 Prcb; // rax
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-78h] BYREF

  v2 = *(_QWORD *)(a2 + 32);
  v3 = *(_BYTE *)(a2 + 64);
  v5 = *(_DWORD **)a2;
  memset(&ApcState, 0, sizeof(ApcState));
  v7 = 0;
  v8 = 0;
  ProcessServerSilo = PsGetProcessServerSilo((__int64)Process);
  if ( *(_QWORD *)(v2 + 1360) != EtwpHostSiloState )
  {
    ServerSiloGlobals = PsGetServerSiloGlobals(ProcessServerSilo);
    if ( ServerSiloGlobals[104] != v17 )
      return 0LL;
  }
  *(_BYTE *)(a2 + 65) = 0;
  if ( !(unsigned int)EtwpIsProcessZombie(Process) )
  {
    v14 = 1;
    if ( Process == PsIdleProcess )
    {
      v8 = 1;
    }
    else
    {
      if ( KeGetCurrentThread()->ApcState.Process == Process )
        goto LABEL_6;
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink) )
      {
        KeStackAttachProcess(Process, &ApcState);
        v7 = 1;
        goto LABEL_6;
      }
    }
    v14 = 0;
LABEL_6:
    *(_BYTE *)(a2 + 65) = v14;
    *(_BYTE *)(a2 + 67) = v8;
    if ( v5 )
    {
      if ( v3 )
      {
        if ( (*v5 & 1) != 0 )
          EtwpTraceProcessRundown((_DWORD)Process);
        if ( (*v5 & 2) != 0 && (Process->SecureState.SecureHandle & 1) == 0 )
        {
          if ( Process == PsIdleProcess )
          {
            v22 = KeNumberProcessors_0;
            for ( i = 0; i < v22; ++i )
            {
              Prcb = KeGetPrcb(i);
              EtwpThreadEnumCallback((__int64)Process, *(_QWORD *)(Prcb + 24), a2);
            }
          }
          else
          {
            PsEnumProcessThreads((__int64)Process, EtwpThreadEnumCallback, a2);
          }
        }
        if ( (*v5 & 0xC004) != 0 )
          EtwpEnumerateAddressSpace(Process);
        if ( (*v5 & 4) != 0 && Process == PsInitialSystemProcess )
        {
          LOBYTE(v10) = v3;
          EtwpSysModuleRunDown(v2, v10);
        }
        if ( (v5[1] & 0x8000000) != 0 )
          EtwpEnumerateWorkingSet((__int64)Process, a2);
      }
      else
      {
        if ( (v5[1] & 0x8000000) != 0 )
          EtwpEnumerateWorkingSet((__int64)Process, a2);
        if ( (*v5 & 4) != 0 && Process == PsInitialSystemProcess )
          EtwpSysModuleRunDown(v2, 0LL);
        if ( (*v5 & 0xC004) != 0 )
          EtwpEnumerateAddressSpace(Process);
        if ( (v5[4] & 0x40) != 0 && Process != PsIdleProcess )
          EtwpObjectHandleRundown(Process, a2);
        if ( (*v5 & 2) != 0 )
        {
          if ( Process == PsIdleProcess )
          {
            v18 = KeNumberProcessors_0;
            for ( j = 0; j < v18; ++j )
            {
              v20 = KeGetPrcb(j);
              EtwpThreadEnumCallback((__int64)Process, *(_QWORD *)(v20 + 24), a2);
              v21 = KeGetPrcb(j);
              EtwpThreadEnumCallback((__int64)Process, *(_QWORD *)(v21 + 14392), a2);
            }
          }
          else
          {
            PsEnumProcessThreads((__int64)Process, EtwpThreadEnumCallback, a2);
          }
        }
        if ( (*v5 & 8) != 0 )
          EtwpProcessPerfCtrsRundown(Process, v2);
        if ( (*v5 & 1) != 0 )
          EtwpTraceProcessRundown((_DWORD)Process);
      }
    }
    if ( v7 )
    {
      KiUnstackDetachProcess((__int64)&ApcState, 0, v12, v13);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink);
    }
    return 0LL;
  }
  if ( v5 && (*v5 & 1) != 0 && !v3 )
    EtwpTraceProcessRundown(v11);
  return 0LL;
}
