/*
 * XREFs of PiUEventFreeClientRegistrationContext @ 0x140967C20
 * Callers:
 *     PiUEventDispatch @ 0x140966C40 (PiUEventDispatch.c)
 *     PiUEventHandleRegistration @ 0x14096747C (PiUEventHandleRegistration.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     ZwDeleteWnfStateName @ 0x14069CD60 (ZwDeleteWnfStateName.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     PiDmObjectRelease @ 0x1408CE5E0 (PiDmObjectRelease.c)
 *     PiUEventDequeuePendingEventWorker @ 0x140966B30 (PiUEventDequeuePendingEventWorker.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiUEventFreeClientRegistrationContext(char *P, char a2)
{
  PKGUARDED_MUTEX v3; // rcx
  PVOID *v4; // rax
  int v5; // ecx
  int v6; // ecx
  char *v7; // rdi
  char *v8; // rdi
  int v9; // ecx
  char *v10; // rdx
  char *v11; // rdx
  unsigned int *v12; // rcx

  if ( a2 )
  {
    ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
    ExAcquireFastMutex(*((PKGUARDED_MUTEX *)P + 2));
    v3 = *(PKGUARDED_MUTEX *)P;
    if ( *(char **)(*(_QWORD *)P + 8LL) != P || (v4 = (PVOID *)*((_QWORD *)P + 1), *v4 != P) )
      __fastfail(3u);
    *v4 = v3;
    v3->Owner = v4;
    v5 = *((_DWORD *)P + 33);
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v9 = v6 - 1;
        if ( v9 )
        {
          if ( v9 == 1 )
            --PiUEventDevInstancePropertyClientCount;
        }
        else
        {
          --PiUEventDevInstanceClientCount;
        }
      }
      else
      {
        --PiUEventDevHandleClientCount;
      }
    }
    else
    {
      --PiUEventDevInterfaceClientCount;
    }
    v7 = (char *)*((_QWORD *)P + 14);
    while ( v7 != P + 112 )
    {
      v10 = v7;
      v7 = *(char **)v7;
      PiUEventDequeuePendingEventWorker((__int64)P, v10, 0, 1);
    }
    v8 = (char *)*((_QWORD *)P + 12);
    while ( v8 != P + 96 )
    {
      v11 = v8;
      v8 = *(char **)v8;
      PiUEventDequeuePendingEventWorker((__int64)P, v11, 1, 1);
    }
    KeReleaseGuardedMutex(*((PKGUARDED_MUTEX *)P + 2));
    KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
  }
  if ( *((_DWORD *)P + 33) == 1 || (unsigned int)(*((_DWORD *)P + 33) - 2) < 2 )
  {
    v12 = (unsigned int *)*((_QWORD *)P + 3);
    if ( v12 )
      PiDmObjectRelease(v12);
  }
  ZwDeleteWnfStateName((PCWNF_STATE_NAME)P + 11);
  SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(P + 56));
  ExFreePoolWithTag(*((PVOID *)P + 2), 0x59706E50u);
  memset_0(P, 0, 0x90uLL);
  ExFreePoolWithTag(P, 0x59706E50u);
}
