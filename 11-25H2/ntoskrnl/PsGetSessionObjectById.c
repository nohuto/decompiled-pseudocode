/*
 * XREFs of PsGetSessionObjectById @ 0x1403D6D20
 * Callers:
 *     IoGetContainerInformation @ 0x1407091B0 (IoGetContainerInformation.c)
 *     IoRegisterContainerNotification @ 0x140709230 (IoRegisterContainerNotification.c)
 *     SeExchangePrimaryToken @ 0x14078384C (SeExchangePrimaryToken.c)
 *     SepDuplicateToken @ 0x1408A2910 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140997EFC (SepFilterToken.c)
 *     NtSetInformationObject @ 0x1409FE700 (NtSetInformationObject.c)
 *     SepSetTokenSessionById @ 0x140A00ACC (SepSetTokenSessionById.c)
 *     SeSubProcessToken @ 0x140A0C9E8 (SeSubProcessToken.c)
 *     SeSetSessionIdToken @ 0x140A4CF28 (SeSetSessionIdToken.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     PsGetSessionById @ 0x1403D6DB0 (PsGetSessionById.c)
 *     PspUnlockProcessListExclusive @ 0x1403D6E4C (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x1403D744C (PspLockProcessListExclusive.c)
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
