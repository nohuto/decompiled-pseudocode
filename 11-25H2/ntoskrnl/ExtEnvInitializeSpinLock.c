/*
 * XREFs of ExtEnvInitializeSpinLock @ 0x14055D4B4
 * Callers:
 *     HalpVpptTimerRegister @ 0x14054640C (HalpVpptTimerRegister.c)
 *     IvtAllocateDomain @ 0x14056A230 (IvtAllocateDomain.c)
 *     HsaInitializeInterruptRemapping @ 0x140B42B68 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 */

void __fastcall ExtEnvInitializeSpinLock(_QWORD *a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&ExtEnvAllocationLock);
  v3 = (_QWORD *)qword_140F8E6B8;
  if ( *(__int64 **)qword_140F8E6B8 != &ExtEnvLockList )
    __fastfail(3u);
  *a1 = &ExtEnvLockList;
  a1[1] = v3;
  *v3 = a1;
  qword_140F8E6B8 = (__int64)a1;
  KeReleaseSpinLock(&ExtEnvAllocationLock, v2);
  a1[2] = 0LL;
}
