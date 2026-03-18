/*
 * XREFs of PspDeleteExternalServerSiloState @ 0x140762F68
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x140762C40 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspInitializeServerSiloDeferred @ 0x1407632B0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1403D6D00 (PsGetServerSiloGlobals.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     PsAttachSiloToCurrentThread @ 0x14043C9E0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140443110 (PsDetachSiloFromCurrentThread.c)
 *     ExpNlsDeleteSiloState @ 0x140649FD4 (ExpNlsDeleteSiloState.c)
 *     ObCleanupSiloState @ 0x140736E78 (ObCleanupSiloState.c)
 *     RtlNlsDeleteState @ 0x14076F550 (RtlNlsDeleteState.c)
 *     SeShutdownServerSilo @ 0x14077FB7C (SeShutdownServerSilo.c)
 *     EtwShutdown @ 0x140797400 (EtwShutdown.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1407A74EC (ExpTimeZoneCleanupSiloState.c)
 *     CmpGetContextForSiloNoRef @ 0x1409E32A0 (CmpGetContextForSiloNoRef.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A82CB8 (CmpStopSiloKeyLockTracker.c)
 */

__int64 __fastcall PspDeleteExternalServerSiloState(__int64 a1)
{
  struct _LIST_ENTRY *v2; // rcx
  volatile __int64 *ServerSiloGlobals; // rdi
  struct _LIST_ENTRY *v4; // rbx
  ULONG_PTR ContextForSiloNoRef; // rax
  _QWORD *v6; // rcx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  ServerSiloGlobals = (volatile __int64 *)PsGetServerSiloGlobals(a1);
  if ( *((_QWORD *)ServerSiloGlobals + 104) )
  {
    v4 = PsAttachSiloToCurrentThread(v2);
    EtwShutdown(0LL);
    PsDetachSiloFromCurrentThread(v4);
  }
  SeShutdownServerSilo(a1, ServerSiloGlobals + 92);
  v8 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v8);
  ContextForSiloNoRef = CmpGetContextForSiloNoRef(a1);
  if ( ContextForSiloNoRef )
    CmpStopSiloKeyLockTracker(ContextForSiloNoRef);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v8);
  ObCleanupSiloState(ServerSiloGlobals);
  v6 = (_QWORD *)*((_QWORD *)ServerSiloGlobals + 128);
  if ( v6 )
  {
    ExpNlsDeleteSiloState(v6);
    *((_QWORD *)ServerSiloGlobals + 128) = 0LL;
  }
  RtlNlsDeleteState(ServerSiloGlobals);
  return ExpTimeZoneCleanupSiloState(a1);
}
