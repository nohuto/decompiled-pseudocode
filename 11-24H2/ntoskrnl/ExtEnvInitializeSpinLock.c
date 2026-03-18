/*
 * XREFs of ExtEnvInitializeSpinLock @ 0x14055FDB4
 * Callers:
 *     HalpVpptTimerRegister @ 0x140548CFC (HalpVpptTimerRegister.c)
 *     IvtAllocateDomain @ 0x14056D530 (IvtAllocateDomain.c)
 *     HsaInitializeInterruptRemapping @ 0x140B52B68 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall ExtEnvInitializeSpinLock(_QWORD *a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&ExtEnvAllocationLock);
  v3 = (_QWORD *)qword_140F8EE58;
  if ( *(__int64 **)qword_140F8EE58 != &ExtEnvLockList )
    __fastfail(3u);
  *a1 = &ExtEnvLockList;
  a1[1] = v3;
  *v3 = a1;
  qword_140F8EE58 = (__int64)a1;
  KeReleaseSpinLock(&ExtEnvAllocationLock, v2);
  a1[2] = 0LL;
}
