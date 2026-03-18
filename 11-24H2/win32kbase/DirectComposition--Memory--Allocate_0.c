/*
 * XREFs of DirectComposition::Memory::Allocate_0 @ 0x14007C31C
 * Callers:
 *     DCompositionNotifyPendingPresent @ 0x140075320 (DCompositionNotifyPendingPresent.c)
 * Callees:
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x14007C364 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 */

void *__fastcall DirectComposition::Memory::Allocate_0(unsigned __int64 a1)
{
  return Win32AllocPoolImpl(0x100uLL, a1, 0x65734344u);
}
