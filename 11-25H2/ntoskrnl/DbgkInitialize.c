/*
 * XREFs of DbgkInitialize @ 0x140C04FD4
 * Callers:
 *     InitBootProcessor @ 0x140BF9C88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     DbgkpInitializePhase1SiloState @ 0x1406FB194 (DbgkpInitializePhase1SiloState.c)
 *     DbgkpGetServerSiloState @ 0x140A7B92C (DbgkpGetServerSiloState.c)
 *     DbgkpInitializePhase0 @ 0x140C05058 (DbgkpInitializePhase0.c)
 */

__int64 DbgkInitialize()
{
  char *ServerSiloState; // rax
  __int64 result; // rax

  if ( !(_DWORD)InitializationPhase )
    return DbgkpInitializePhase0();
  if ( (_DWORD)InitializationPhase != 1 )
    KeBugCheckEx(0x33u, 3uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
  ServerSiloState = DbgkpGetServerSiloState(0LL);
  result = DbgkpInitializePhase1SiloState((__int64)ServerSiloState);
  if ( (int)result >= 0 && !DbgkpWerInitialized )
  {
    DbgkpBusy = 0;
    DbgkpWerDefaultPolicy = 2;
    DbgkpWerDeferredWriteTimeoutSeconds = 600;
    DbgkpWerInitialized = 1;
  }
  return result;
}
