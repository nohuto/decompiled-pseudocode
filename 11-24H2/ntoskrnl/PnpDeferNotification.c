/*
 * XREFs of PnpDeferNotification @ 0x1408B0F50
 * Callers:
 *     PiRegisterKernelSoftRestartNotification @ 0x140731F6C (PiRegisterKernelSoftRestartNotification.c)
 *     IoRegisterPlugPlayNotification @ 0x1409EB2A0 (IoRegisterPlugPlayNotification.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     PnpInsertNoopEvent @ 0x1408B1044 (PnpInsertNoopEvent.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpDeferNotification(__int64 a1)
{
  char v2; // bp
  unsigned int v3; // ebx
  __int64 Pool2; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // rax

  v2 = 0;
  v3 = 0;
  ExAcquireFastMutex(&PnpNotificationInProgressLock);
  if ( BYTE3(NlsMbOemCodePageTag) || *(_DWORD *)(a1 + 16) == 3 )
  {
    Pool2 = ExAllocatePool2(0x100uLL, 0x18uLL, 0x37706E50u);
    v5 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 16) = a1;
      ++*(_WORD *)(a1 + 56);
      *(_BYTE *)(a1 + 58) = 1;
      ExAcquireFastMutex(&PnpDeferredRegistrationLock);
      v6 = (_QWORD *)qword_140FD9FA0;
      if ( *(PVOID **)qword_140FD9FA0 != &PnpDeferredRegistrationList )
        __fastfail(3u);
      *v5 = &PnpDeferredRegistrationList;
      v5[1] = v6;
      *v6 = v5;
      qword_140FD9FA0 = (__int64)v5;
      KeReleaseGuardedMutex(&PnpDeferredRegistrationLock);
      if ( !BYTE3(NlsMbOemCodePageTag) )
        v2 = 1;
    }
    else
    {
      v3 = -1073741670;
    }
  }
  KeReleaseGuardedMutex(&PnpNotificationInProgressLock);
  if ( v2 )
  {
    PnpInsertNoopEvent(0LL, 0LL);
    return 0;
  }
  return v3;
}
