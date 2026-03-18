/*
 * XREFs of ?MilWerUnregisterMemoryBlock@@YAXPEBX@Z @ 0x1801D8A2C
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800817A0 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall MilWerUnregisterMemoryBlock(const void *a1)
{
  HMODULE ModuleHandleW; // rax
  FARPROC ProcAddress; // rax

  ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
  if ( ModuleHandleW )
  {
    ProcAddress = GetProcAddress(ModuleHandleW, "WerUnregisterMemoryBlock");
    if ( ProcAddress )
      ((void (__fastcall *)(const void *))ProcAddress)(a1);
  }
}
