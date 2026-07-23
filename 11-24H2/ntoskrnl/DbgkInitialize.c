/*
 * XREFs of DbgkInitialize @ 0x140C18074
 * Callers:
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     DbgkpInitializePhase1SiloState @ 0x140704C34 (DbgkpInitializePhase1SiloState.c)
 *     DbgkpGetServerSiloState @ 0x140A78398 (DbgkpGetServerSiloState.c)
 *     DbgkpInitializePhase0 @ 0x140C180F8 (DbgkpInitializePhase0.c)
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
