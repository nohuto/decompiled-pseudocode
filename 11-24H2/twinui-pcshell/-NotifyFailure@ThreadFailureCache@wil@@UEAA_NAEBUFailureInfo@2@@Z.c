/*
 * XREFs of ?NotifyFailure@ThreadFailureCache@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180639E30
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x18017FA60 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 */

bool __fastcall wil::ThreadFailureCache::NotifyFailure(
        wil::ThreadFailureCache *this,
        const struct wil::FailureInfo *a2)
{
  if ( *((_DWORD *)a2 + 2) != *((_DWORD *)this + 4) )
    wil::StoredFailureInfo::SetFailureInfo((wil::ThreadFailureCache *)((char *)this + 8), a2);
  return 0;
}
