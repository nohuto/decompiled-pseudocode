/*
 * XREFs of ?DestroyObjectCaches@CThreadContext@@SAXXZ @ 0x1802ADC70
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x180259E9C (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180018090 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ?Destroy@CObjectCache@@QEAAXXZ @ 0x1802ADC30 (-Destroy@CObjectCache@@QEAAXXZ.c)
 */

void CThreadContext::DestroyObjectCaches(void)
{
  signed int Current; // eax
  struct CThreadContext *v1; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  Current = CThreadContext::GetCurrent(&v3);
  if ( Current < 0 )
    ModuleFailFastForHRESULT(Current, retaddr);
  v1 = v3;
  CObjectCache::Destroy((struct CThreadContext *)((char *)v3 + 48));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 64));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 80));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 112));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 128));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 144));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 160));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 176));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 192));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 208));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 224));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 240));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 256));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 272));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 288));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 304));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 320));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 336));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 352));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 368));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 384));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 400));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 416));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 432));
}
