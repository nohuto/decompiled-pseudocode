/*
 * XREFs of PspDeleteExternalServerSiloState @ 0x140772B48
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x140772820 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspInitializeServerSiloDeferred @ 0x140772EA0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     PsAttachSiloToCurrentThread @ 0x14042FBB0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14043A1F0 (PsDetachSiloFromCurrentThread.c)
 *     ExpNlsDeleteSiloState @ 0x1406545D4 (ExpNlsDeleteSiloState.c)
 *     ObCleanupSiloState @ 0x140740DC8 (ObCleanupSiloState.c)
 *     RtlNlsDeleteState @ 0x14077E6D0 (RtlNlsDeleteState.c)
 *     SeShutdownServerSilo @ 0x14078EE0C (SeShutdownServerSilo.c)
 *     EtwShutdown @ 0x1407A6910 (EtwShutdown.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1407B6DDC (ExpTimeZoneCleanupSiloState.c)
 *     CmpGetContextForSiloNoRef @ 0x1409DBCA0 (CmpGetContextForSiloNoRef.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A81F60 (CmpStopSiloKeyLockTracker.c)
 */

__int64 __fastcall PspDeleteExternalServerSiloState(__int64 a1)
{
  struct _LIST_ENTRY *v2; // rcx
  volatile __int64 *ServerSiloGlobals; // rdi
  struct _LIST_ENTRY *v4; // rbx
  ULONG_PTR ContextForSiloNoRef; // rax
  _QWORD *v6; // rcx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  ServerSiloGlobals = (volatile __int64 *)PsGetServerSiloGlobals(a1);
  if ( *((_QWORD *)ServerSiloGlobals + 104) )
  {
    v4 = PsAttachSiloToCurrentThread(v2);
    EtwShutdown(0LL);
    PsDetachSiloFromCurrentThread(v4);
  }
  SeShutdownServerSilo(a1, ServerSiloGlobals + 92);
  v8 = 0LL;
  v9 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v8);
  ContextForSiloNoRef = CmpGetContextForSiloNoRef(a1);
  if ( ContextForSiloNoRef )
    CmpStopSiloKeyLockTracker(ContextForSiloNoRef);
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v8);
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
