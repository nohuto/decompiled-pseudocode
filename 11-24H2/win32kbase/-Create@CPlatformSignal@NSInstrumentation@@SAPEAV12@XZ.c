/*
 * XREFs of ?Create@CPlatformSignal@NSInstrumentation@@SAPEAV12@XZ @ 0x1401CF5A4
 * Callers:
 *     ?BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1401D0D14 (-BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

struct _KEVENT *NSInstrumentation::CPlatformSignal::Create(void)
{
  struct _KEVENT *Pool2; // rax
  struct _KEVENT *v1; // rbx

  Pool2 = (struct _KEVENT *)ExAllocatePool2(66LL, 24LL, 894006101LL);
  v1 = Pool2;
  if ( Pool2 )
    KeInitializeEvent(Pool2, SynchronizationEvent, 0);
  return v1;
}
