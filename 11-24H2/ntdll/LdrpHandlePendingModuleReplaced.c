/*
 * XREFs of LdrpHandlePendingModuleReplaced @ 0x1800D916C
 * Callers:
 *     LdrpSnapModule @ 0x180056F30 (LdrpSnapModule.c)
 *     LdrpFreeLoadContext @ 0x1800D90C0 (LdrpFreeLoadContext.c)
 * Callees:
 *     LdrpFreeReplacedModule @ 0x1800D91A8 (LdrpFreeReplacedModule.c)
 *     LdrpHandleReplacedModule @ 0x1800D91E0 (LdrpHandleReplacedModule.c)
 */

void __fastcall LdrpHandlePendingModuleReplaced(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
  {
    if ( LdrpHandleReplacedModule(v2) != *(_QWORD *)(a1 + 80) )
      LdrpFreeReplacedModule();
    *(_QWORD *)(a1 + 80) = 0LL;
  }
}
