/*
 * XREFs of ??3SC_ENV_ALLOCATOR@@SAXPEAX@Z @ 0x14069E2D8
 * Callers:
 *     ??_ENT_DISK@@UEAAPEAXI@Z @ 0x14070B860 (--_ENT_DISK@@UEAAPEAXI@Z.c)
 * Callees:
 *     PspUserApcKernelRoutine @ 0x1408FF210 (PspUserApcKernelRoutine.c)
 */

void __fastcall SC_ENV_ALLOCATOR::operator delete(void *a1)
{
  PspUserApcKernelRoutine(a1);
}
