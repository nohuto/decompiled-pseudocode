/*
 * XREFs of LdrpHandleReplacedModule @ 0x1800D4550
 * Callers:
 *     LdrpLoadDllInternal @ 0x180037E60 (LdrpLoadDllInternal.c)
 *     LdrpHandlePendingModuleReplaced @ 0x1800D44DC (LdrpHandlePendingModuleReplaced.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpHandleReplacedModule(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rdx

  if ( !a1 )
    return a1;
  v1 = *(_QWORD *)(a1 + 176);
  if ( !v1 )
    return a1;
  if ( (*(_DWORD *)(v1 + 32) & 0x80000) != 0 )
    return a1;
  v3 = *(_QWORD *)(v1 + 56);
  if ( v3 == a1 )
    return a1;
  *(_QWORD *)(v1 + 56) = a1;
  return v3;
}
