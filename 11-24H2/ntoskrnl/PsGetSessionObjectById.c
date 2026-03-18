/*
 * XREFs of PsGetSessionObjectById @ 0x1403493A0
 * Callers:
 *     IoGetContainerInformation @ 0x1407152B0 (IoGetContainerInformation.c)
 *     IoRegisterContainerNotification @ 0x140715330 (IoRegisterContainerNotification.c)
 *     SeExchangePrimaryToken @ 0x140792C9C (SeExchangePrimaryToken.c)
 *     SepDuplicateToken @ 0x140856520 (SepDuplicateToken.c)
 *     NtSetInformationObject @ 0x1409FB980 (NtSetInformationObject.c)
 *     SepSetTokenSessionById @ 0x1409FD934 (SepSetTokenSessionById.c)
 *     SeSetSessionIdToken @ 0x140A50448 (SeSetSessionIdToken.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     PsGetSessionById @ 0x140349430 (PsGetSessionById.c)
 *     PspUnlockProcessListExclusive @ 0x1403494CC (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x140349ACC (PspLockProcessListExclusive.c)
 */

void *PsGetSessionObjectById()
{
  void *v0; // rdi
  __int64 SessionById; // rax
  void *v2; // rsi
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rbp

  v0 = 0LL;
  SessionById = PsGetSessionById();
  v2 = (void *)SessionById;
  if ( SessionById )
  {
    v3 = *(_QWORD *)(SessionById + 744);
    CurrentThread = KeGetCurrentThread();
    v0 = *(void **)(v3 + 32);
    PspLockProcessListExclusive(CurrentThread);
    if ( (*(_DWORD *)(v3 + 4) & 2) != 0 )
      v0 = 0LL;
    else
      ObfReferenceObjectWithTag(v0, 0x79517350u);
    PspUnlockProcessListExclusive(CurrentThread);
    ObfDereferenceObjectWithTag(v2, 0x79517350u);
  }
  return v0;
}
