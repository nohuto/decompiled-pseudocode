/*
 * XREFs of GreCreateFastMutex @ 0x1C007E708
 * Callers:
 *     HmgCreate @ 0x1C007C9D4 (HmgCreate.c)
 *     EngCreateFastMutex @ 0x1C0169DD0 (EngCreateFastMutex.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0029EC8 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 */

struct _FAST_MUTEX *GreCreateFastMutex()
{
  struct _FAST_MUTEX *v0; // rax
  struct _FAST_MUTEX *v1; // rbx

  v0 = (struct _FAST_MUTEX *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                               gpLeakTrackingAllocator,
                               68LL,
                               0x38uLL,
                               0x6D736647u);
  v1 = v0;
  if ( v0 )
    KeInitializeGuardedMutex(v0);
  return v1;
}
