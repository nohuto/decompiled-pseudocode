/*
 * XREFs of PspTerminateSiloSubsystemProcesses @ 0x1407738D8
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x140772820 (PspCompleteServerSiloShutdownDeferred.c)
 * Callees:
 *     PsGetSessionId @ 0x1403C1560 (PsGetSessionId.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     PsGetServerSiloServiceSessionId @ 0x14044B690 (PsGetServerSiloServiceSessionId.c)
 *     PspShutdownCsrProcess @ 0x1407731D4 (PspShutdownCsrProcess.c)
 *     PspGetNextJobProcess @ 0x14085CC88 (PspGetNextJobProcess.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14085D4DC (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

int __fastcall PspTerminateSiloSubsystemProcesses(struct _LIST_ENTRY *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  int ServerSiloServiceSessionId; // ebp
  struct _KPROCESS *i; // r9
  int v5; // edx
  unsigned int SessionId; // eax
  __int64 v7; // rax
  struct _KPROCESS *v8; // rbx
  void *ServerSiloGlobals; // rax
  struct _LIST_ENTRY *v10; // rcx
  struct _KPROCESS *v11; // r8
  __int64 v13; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+28h] [rbp-30h]
  __int128 v15; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+40h] [rbp-18h]
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF

  v17 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  PspEnumJobsAndProcessesInJobHierarchy(a1, (__int64)&v17, 2);
  CurrentThread = KeGetCurrentThread();
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId((__int64)a1);
  for ( i = 0LL; ; i = v8 )
  {
    v7 = ((__int64 (__fastcall *)(struct _LIST_ENTRY *, struct _KTHREAD *, __int128 *, struct _KPROCESS *, __int64, __int64))PspGetNextJobProcess)(
           a1,
           CurrentThread,
           &v15,
           i,
           v13,
           v14);
    v8 = (struct _KPROCESS *)v7;
    if ( !v7 )
      break;
    v5 = *(_DWORD *)(v7 + 1532);
    if ( ((v5 & 0x40) != 0 || (*(_DWORD *)(v7 + 496) & 1) == 0) && (v5 & 0x1000) == 0 )
    {
      SessionId = PsGetSessionId(v7);
      if ( SessionId != ServerSiloServiceSessionId )
        PspShutdownCsrProcess(a1, SessionId, v8);
    }
  }
  ServerSiloGlobals = PsGetServerSiloGlobals((__int64)a1);
  v11 = (struct _KPROCESS *)*((_QWORD *)ServerSiloGlobals + 106);
  if ( v11 )
    LODWORD(ServerSiloGlobals) = PspShutdownCsrProcess(v10, **((_DWORD **)ServerSiloGlobals + 161), v11);
  return (int)ServerSiloGlobals;
}
