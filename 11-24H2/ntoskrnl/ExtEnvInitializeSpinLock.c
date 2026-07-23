/*
 * XREFs of ExtEnvInitializeSpinLock @ 0x14055D9E4
 * Callers:
 *     HalpVpptTimerRegister @ 0x1405465BC (HalpVpptTimerRegister.c)
 *     IvtAllocateDomain @ 0x14056A9C0 (IvtAllocateDomain.c)
 *     HsaInitializeInterruptRemapping @ 0x140B54BB8 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall ExtEnvInitializeSpinLock(_QWORD *a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&ExtEnvAllocationLock);
  v3 = (_QWORD *)qword_140F8F058;
  if ( *(__int64 **)qword_140F8F058 != &ExtEnvLockList )
    __fastfail(3u);
  *a1 = &ExtEnvLockList;
  a1[1] = v3;
  *v3 = a1;
  qword_140F8F058 = (__int64)a1;
  KeReleaseSpinLock(&ExtEnvAllocationLock, v2);
  a1[2] = 0LL;
}
