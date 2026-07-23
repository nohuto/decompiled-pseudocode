/*
 * XREFs of PopShutdownListenerInsertCallback @ 0x1404C8BE4
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopShutdownListenerInsertCallback(_QWORD *a1)
{
  _QWORD *Pool2; // rax
  unsigned int v3; // edi
  _QWORD *v4; // rbx
  KIRQL v5; // al
  _QWORD *v6; // rcx

  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL, 0x28uLL, 0x206D654Du);
  v3 = 0;
  v4 = Pool2;
  if ( Pool2 )
  {
    Pool2[2] = *a1;
    Pool2[3] = a1[1];
    Pool2[4] = a1[2];
    v5 = KeAcquireSpinLockRaiseToDpc(&PopShutdownNotificationCallbackLock);
    v6 = (_QWORD *)qword_140F087D8;
    if ( *(PVOID **)qword_140F087D8 != &PopShutdownNotificationCallbackList )
      __fastfail(3u);
    *v4 = &PopShutdownNotificationCallbackList;
    v4[1] = v6;
    *v6 = v4;
    qword_140F087D8 = (__int64)v4;
    KeReleaseSpinLock(&PopShutdownNotificationCallbackLock, v5);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
