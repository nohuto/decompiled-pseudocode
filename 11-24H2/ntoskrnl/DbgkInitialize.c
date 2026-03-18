/*
 * XREFs of DbgkInitialize @ 0x140C16074
 * Callers:
 *     InitBootProcessor @ 0x140C0AC88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     DbgkpInitializePhase1SiloState @ 0x140707074 (DbgkpInitializePhase1SiloState.c)
 *     DbgkpGetServerSiloState @ 0x140A7EBE8 (DbgkpGetServerSiloState.c)
 *     DbgkpInitializePhase0 @ 0x140C160F8 (DbgkpInitializePhase0.c)
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
