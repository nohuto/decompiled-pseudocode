/*
 * XREFs of ??3SC_ENV_ALLOCATOR@@SAXPEAX@Z @ 0x140691EA8
 * Callers:
 *     ??_ENT_DISK@@UEAAPEAXI@Z @ 0x140701DE0 (--_ENT_DISK@@UEAAPEAXI@Z.c)
 * Callees:
 *     PspUserApcKernelRoutine @ 0x1408E08C0 (PspUserApcKernelRoutine.c)
 */

void __fastcall SC_ENV_ALLOCATOR::operator delete(void *a1)
{
  PspUserApcKernelRoutine(a1);
}
