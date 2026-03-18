/*
 * XREFs of ?IsInputProcessingActive@CInputThreadBase@@QEBA_NXZ @ 0x1400E1790
 * Callers:
 *     ?BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z @ 0x14018FFDC (-BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInputThreadBase::IsInputProcessingActive(CInputThreadBase *this)
{
  CInputThreadBase *v1; // rdi
  char *v2; // rbx

  v1 = this;
  v2 = (char *)this + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  LOBYTE(v1) = *((_DWORD *)v1 + 4) == 2;
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  return (char)v1;
}
