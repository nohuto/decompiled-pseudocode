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

__int64 __fastcall LdrpFreeReplacedModule(__int64 a1)
{
  LdrpFreeLoadContext(*(_QWORD *)(a1 + 176));
  *(_DWORD *)(a1 + 104) &= ~0x20u;
  *(_DWORD *)(a1 + 276) = 1;
  return LdrpDereferenceModule(a1);
}
