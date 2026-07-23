/*
 * XREFs of LdrpFreeReplacedModule @ 0x1800D9148
 * Callers:
 *     LdrpSnapModule @ 0x180012B70 (LdrpSnapModule.c)
 *     LdrpLoadDllInternal @ 0x18004A300 (LdrpLoadDllInternal.c)
 *     LdrpLoadDependentModuleInternal @ 0x18004C180 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFreeLoadContext @ 0x1800D9060 (LdrpFreeLoadContext.c)
 *     LdrpHandlePendingModuleReplaced @ 0x1800D910C (LdrpHandlePendingModuleReplaced.c)
 * Callees:
 *     LdrpFreeLoadContext @ 0x1800D9060 (LdrpFreeLoadContext.c)
 */

int __fastcall LdrpFreeReplacedModule(PVOID *BaseAddress)
{
  LdrpFreeLoadContext(BaseAddress[22]);
  *((_DWORD *)BaseAddress + 26) &= ~0x20u;
  *((_DWORD *)BaseAddress + 69) = 1;
  return LdrpDereferenceModule((char *)BaseAddress);
}
