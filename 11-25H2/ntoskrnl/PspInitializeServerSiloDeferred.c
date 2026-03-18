/*
 * XREFs of PspInitializeServerSiloDeferred @ 0x1407632B0
 * Callers:
 *     PspQueueDeferredWorkAndWait @ 0x140763518 (PspQueueDeferredWorkAndWait.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetServerSiloGlobals @ 0x1403D6D00 (PsGetServerSiloGlobals.c)
 *     PsAttachSiloToCurrentThread @ 0x14043C9E0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140443110 (PsDetachSiloFromCurrentThread.c)
 *     EtwpGetCurrentSiloMaxLoggers @ 0x1406407EC (EtwpGetCurrentSiloMaxLoggers.c)
 *     sub_140649A2C @ 0x140649A2C (sub_140649A2C.c)
 *     DbgkpInitializePhase1SiloState @ 0x1406FB194 (DbgkpInitializePhase1SiloState.c)
 *     ObInitServerSilo @ 0x140736FFC (ObInitServerSilo.c)
 *     PspInitializeProtectedProcessParameters @ 0x140762278 (PspInitializeProtectedProcessParameters.c)
 *     PsTerminateServerSilo @ 0x140762A00 (PsTerminateServerSilo.c)
 *     PspDeleteExternalServerSiloState @ 0x140762F68 (PspDeleteExternalServerSiloState.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140763928 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x140763A54 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x140763C18 (PspSiloLoadApiSets.c)
 *     PspNotifyServerSiloCreation @ 0x140769A58 (PspNotifyServerSiloCreation.c)
 *     RtlInitFunctionalityCache @ 0x14076DC08 (RtlInitFunctionalityCache.c)
 *     RtlNlsInitState @ 0x14076F5E4 (RtlNlsInitState.c)
 *     SeInitServerSilo @ 0x14077FA8C (SeInitServerSilo.c)
 *     EtwpCleanupSiloState @ 0x140797D1C (EtwpCleanupSiloState.c)
 *     EtwpInitializeSiloState @ 0x140798D8C (EtwpInitializeSiloState.c)
 *     EtwpPreInitializeSiloState @ 0x140799A0C (EtwpPreInitializeSiloState.c)
 *     ExpTimeZoneInitSiloState @ 0x1407A7590 (ExpTimeZoneInitSiloState.c)
 *     ExIsMultiSessionSku @ 0x1407A8688 (ExIsMultiSessionSku.c)
 *     ExIsStateSeparationEnabled @ 0x1407A8730 (ExIsStateSeparationEnabled.c)
 *     CmInitServerSiloState @ 0x1407C63E4 (CmInitServerSiloState.c)
 *     ExInitializeNls @ 0x140ABD924 (ExInitializeNls.c)
 */

__int64 __fastcall PspInitializeServerSiloDeferred(struct _LIST_ENTRY *Object)
{
  _DWORD *ServerSiloGlobals; // rbp
  int ApiSets; // edi
  struct _LIST_ENTRY *Flink; // r14
  struct _LIST_ENTRY *v5; // rbx
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v7; // r14
  struct _LIST_ENTRY *v8; // rbx
  struct _LIST_ENTRY *v9; // rbx
  struct _LIST_ENTRY *v10; // rbx
  unsigned int CurrentSiloMaxLoggers; // eax
  struct _LIST_ENTRY *v12; // rbx
  _QWORD *v13; // rax
  int v14; // eax
  int v15; // ebx
  PVOID *v17; // rax
  char v18; // [rsp+40h] [rbp+8h] BYREF
  char v19; // [rsp+48h] [rbp+10h] BYREF

  ServerSiloGlobals = PsGetServerSiloGlobals((__int64)Object);
  RtlNlsInitState(ServerSiloGlobals);
  ApiSets = sub_140649A2C((__int64)Object);
  if ( ApiSets < 0 )
    goto LABEL_25;
  ApiSets = PspSiloInitializeUserSharedData(Object);
  if ( ApiSets < 0 )
    goto LABEL_25;
  ApiSets = PspSiloInitializeSystemRootSymlink(Object);
  if ( ApiSets < 0 )
    goto LABEL_25;
  ApiSets = PspInitializeProtectedProcessParameters((__int64)ServerSiloGlobals);
  if ( ApiSets < 0 )
    goto LABEL_25;
  ApiSets = PspSiloLoadApiSets(Object);
  if ( ApiSets < 0 )
    goto LABEL_25;
  Flink = Object[94].Flink;
  v18 = 0;
  v5 = PsAttachSiloToCurrentThread(Object);
  ApiSets = ExIsMultiSessionSku(&v18);
  PsDetachSiloFromCurrentThread(v5);
  if ( ApiSets < 0 )
    goto LABEL_25;
  Blink = Flink[80].Blink;
  v19 = 0;
  BYTE4(Blink[1].Blink) = v18;
  v7 = Object[94].Flink;
  v8 = PsAttachSiloToCurrentThread(Object);
  ApiSets = ExIsStateSeparationEnabled(&v19);
  PsDetachSiloFromCurrentThread(v8);
  if ( ApiSets < 0 )
    goto LABEL_25;
  BYTE5(v7[80].Blink[1].Blink) = v19;
  v9 = PsAttachSiloToCurrentThread(Object);
  ApiSets = RtlInitFunctionalityCache();
  PsDetachSiloFromCurrentThread(v9);
  if ( ApiSets < 0 )
    goto LABEL_25;
  ApiSets = ObInitServerSilo(Object);
  if ( ApiSets < 0 )
    goto LABEL_25;
  ApiSets = ExpTimeZoneInitSiloState(Object);
  if ( ApiSets < 0 )
    goto LABEL_25;
  v10 = PsAttachSiloToCurrentThread(Object);
  ApiSets = ExInitializeNls();
  if ( ApiSets >= 0 )
    PsGetCurrentServerSiloGlobals()[64].Flink->Blink = (struct _LIST_ENTRY *)1;
  PsDetachSiloFromCurrentThread(v10);
  if ( ApiSets < 0 )
    goto LABEL_25;
  ApiSets = SeInitServerSilo(Object);
  if ( ApiSets < 0 )
    goto LABEL_25;
  ApiSets = CmInitServerSiloState(Object);
  if ( ApiSets < 0 )
    goto LABEL_25;
  CurrentSiloMaxLoggers = EtwpGetCurrentSiloMaxLoggers();
  ApiSets = EtwpPreInitializeSiloState(Object, CurrentSiloMaxLoggers);
  if ( ApiSets < 0 || (ApiSets = EtwpInitializeSiloState(Object, 0LL), ApiSets < 0) )
  {
    v17 = (PVOID *)PsGetServerSiloGlobals((__int64)Object);
    EtwpCleanupSiloState(v17[104]);
LABEL_25:
    ServerSiloGlobals[318] = 4;
    PspDeleteExternalServerSiloState((__int64)Object);
    return (unsigned int)ApiSets;
  }
  v12 = PsAttachSiloToCurrentThread(Object);
  v13 = PsGetServerSiloGlobals((__int64)Object);
  v13[117] = 0LL;
  v14 = DbgkpInitializePhase1SiloState((__int64)(v13 + 117));
  ApiSets = 0;
  if ( v14 < 0 )
    ApiSets = v14;
  PsDetachSiloFromCurrentThread(v12);
  if ( ApiSets < 0 )
    goto LABEL_25;
  v15 = PspNotifyServerSiloCreation(Object);
  if ( v15 >= 0 )
    return 0LL;
  PsTerminateServerSilo((__int64)Object);
  return (unsigned int)v15;
}
