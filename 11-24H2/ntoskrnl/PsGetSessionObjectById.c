/*
 * XREFs of PsGetSessionObjectById @ 0x1403C2DE0
 * Callers:
 *     IoGetContainerInformation @ 0x140712E40 (IoGetContainerInformation.c)
 *     IoRegisterContainerNotification @ 0x140712EC0 (IoRegisterContainerNotification.c)
 *     SeExchangePrimaryToken @ 0x140792C70 (SeExchangePrimaryToken.c)
 *     SepDuplicateToken @ 0x1408527E0 (SepDuplicateToken.c)
 *     NtSetInformationObject @ 0x1409F46C0 (NtSetInformationObject.c)
 *     SepSetTokenSessionById @ 0x1409F6674 (SepSetTokenSessionById.c)
 *     SeSetSessionIdToken @ 0x140A471F8 (SeSetSessionIdToken.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     PsGetSessionById @ 0x1403C2E70 (PsGetSessionById.c)
 *     PspUnlockProcessListExclusive @ 0x1403C2F0C (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x1403C350C (PspLockProcessListExclusive.c)
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
