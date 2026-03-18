/*
 * XREFs of DxgkEvict @ 0x14035E300
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEBD@Z @ 0x14035E31C (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEBD@Z.c)
 */

int __fastcall DxgkEvict(struct _D3DKMT_EVICT *a1)
{
  return DxgkEvictInternal(a1, 1, 0LL);
}
