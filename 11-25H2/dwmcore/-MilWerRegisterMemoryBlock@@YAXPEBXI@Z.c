/*
 * XREFs of ?MilWerRegisterMemoryBlock@@YAXPEBXI@Z @ 0x18025AC84
 * Callers:
 *     ?CaptureDxgkRingBuffer@CFailFastInScope@@AEAAXXZ @ 0x1801E35C8 (-CaptureDxgkRingBuffer@CFailFastInScope@@AEAAXXZ.c)
 *     ?EnsureStackCaptureRegisteredWithWER@@YAXXZ @ 0x1801FDE10 (-EnsureStackCaptureRegisteredWithWER@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall MilWerRegisterMemoryBlock(const void *a1, unsigned int a2)
{
  HMODULE ModuleHandleW; // rax
  FARPROC ProcAddress; // rax

  ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
  if ( ModuleHandleW )
  {
    ProcAddress = GetProcAddress(ModuleHandleW, "WerRegisterMemoryBlock");
    if ( ProcAddress )
      ((void (__fastcall *)(const void *, _QWORD))ProcAddress)(a1, a2);
  }
}
