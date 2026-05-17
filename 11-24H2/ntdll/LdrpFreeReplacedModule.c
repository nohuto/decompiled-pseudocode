/*
 * XREFs of LdrpFreeReplacedModule @ 0x1800D91A8
 * Callers:
 *     LdrpLoadDllInternal @ 0x18000B460 (LdrpLoadDllInternal.c)
 *     LdrpLoadDependentModuleInternal @ 0x18000D2E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpSnapModule @ 0x180056F30 (LdrpSnapModule.c)
 *     LdrpFreeLoadContext @ 0x1800D90C0 (LdrpFreeLoadContext.c)
 *     LdrpHandlePendingModuleReplaced @ 0x1800D916C (LdrpHandlePendingModuleReplaced.c)
 * Callees:
 *     LdrpFreeLoadContext @ 0x1800D90C0 (LdrpFreeLoadContext.c)
 */

__int64 __fastcall LdrpFreeReplacedModule(__int64 a1)
{
  LdrpFreeLoadContext(*(_QWORD *)(a1 + 176));
  *(_DWORD *)(a1 + 104) &= ~0x20u;
  *(_DWORD *)(a1 + 276) = 1;
  return LdrpDereferenceModule(a1);
}
