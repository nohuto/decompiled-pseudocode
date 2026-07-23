/*
 * XREFs of LdrpHandlePendingModuleReplaced @ 0x1800D44DC
 * Callers:
 *     LdrpSnapModule @ 0x18006CB10 (LdrpSnapModule.c)
 *     LdrpFreeLoadContext @ 0x1800D4430 (LdrpFreeLoadContext.c)
 * Callees:
 *     LdrpFreeReplacedModule @ 0x1800D4518 (LdrpFreeReplacedModule.c)
 *     LdrpHandleReplacedModule @ 0x1800D4550 (LdrpHandleReplacedModule.c)
 */

void __fastcall LdrpHandlePendingModuleReplaced(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  void *v4; // rcx

  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
  {
    v3 = LdrpHandleReplacedModule(v2);
    v4 = *(void **)(a1 + 80);
    if ( (void *)v3 != v4 )
      LdrpFreeReplacedModule(v4);
    *(_QWORD *)(a1 + 80) = 0LL;
  }
}
