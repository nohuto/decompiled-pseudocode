/*
 * XREFs of LdrpRemoveAlternateModuleCacheItem @ 0x1800F9E3C
 * Callers:
 *     LdrUnloadAlternateResourceModuleEx @ 0x180061800 (LdrUnloadAlternateResourceModuleEx.c)
 * Callees:
 *     <none>
 */

void *__fastcall LdrpRemoveAlternateModuleCacheItem(unsigned int a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax

  v1 = (unsigned int)AlternateResourceModuleCount;
  v2 = AlternateResourceModules;
  if ( a1 < AlternateResourceModuleCount - 1 )
  {
    v3 = (unsigned __int64)(unsigned int)(AlternateResourceModuleCount - 1) << 6;
    v4 = (unsigned __int64)a1 << 6;
    *(_OWORD *)(v4 + AlternateResourceModules) = *(_OWORD *)(v3 + AlternateResourceModules);
    *(_OWORD *)(v4 + v2 + 16) = *(_OWORD *)(v3 + v2 + 16);
    *(_OWORD *)(v4 + v2 + 32) = *(_OWORD *)(v3 + v2 + 32);
    *(_OWORD *)(v4 + v2 + 48) = *(_OWORD *)(v3 + v2 + 48);
  }
  return memset_thunk_772440563353939046((void *)(v2 - 64 + (v1 << 6)), 0, 0x40uLL);
}
