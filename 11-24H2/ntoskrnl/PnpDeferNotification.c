/*
 * XREFs of PnpDeferNotification @ 0x1408B3660
 * Callers:
 *     PiRegisterKernelSoftRestartNotification @ 0x140734038 (PiRegisterKernelSoftRestartNotification.c)
 *     IoRegisterPlugPlayNotification @ 0x1409ED860 (IoRegisterPlugPlayNotification.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     PnpInsertNoopEvent @ 0x1408B3754 (PnpInsertNoopEvent.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
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
    Pool2 = ExAllocatePool2(0x100uLL);
    v5 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 16) = a1;
      ++*(_WORD *)(a1 + 56);
      *(_BYTE *)(a1 + 58) = 1;
      ExAcquireFastMutex(&PnpDeferredRegistrationLock);
      v6 = (_QWORD *)qword_140FD8F90;
      if ( *(PVOID **)qword_140FD8F90 != &PnpDeferredRegistrationList )
        __fastfail(3u);
      *v5 = &PnpDeferredRegistrationList;
      v5[1] = v6;
      *v6 = v5;
      qword_140FD8F90 = (__int64)v5;
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
