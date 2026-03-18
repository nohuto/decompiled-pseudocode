/*
 * XREFs of ??3SC_ENV_ALLOCATOR@@SAXPEAX@Z @ 0x14069D248
 * Callers:
 *     ??_ENT_DISK@@UEAAPEAXI@Z @ 0x14070DCC0 (--_ENT_DISK@@UEAAPEAXI@Z.c)
 * Callees:
 *     PspUserApcKernelRoutine @ 0x1408A8FB0 (PspUserApcKernelRoutine.c)
 */

void __fastcall SC_ENV_ALLOCATOR::operator delete(void *a1)
{
  PspUserApcKernelRoutine(a1);
}
