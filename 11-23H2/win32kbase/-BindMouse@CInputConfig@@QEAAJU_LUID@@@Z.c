/*
 * XREFs of ?BindMouse@CInputConfig@@QEAAJU_LUID@@@Z @ 0x1C01E3A50
 * Callers:
 *     NtSetCursorInputSpace @ 0x1C01427D0 (NtSetCursorInputSpace.c)
 * Callees:
 *     ?FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ @ 0x1C0063B5C (-FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z @ 0x1C00642EC (-OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z.c)
 */

__int64 __fastcall CInputConfig::BindMouse(CInputConfig *this, struct _LUID a2)
{
  CInputConfig *v2; // rdi
  __int64 v4; // rcx

  v2 = gpInputConfig;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(CInputConfig::slock, 1u);
  *((struct _LUID *)v2 + 2) = a2;
  CInputConfig::CMouseConfig::FindInputSpace((CInputConfig *)((char *)v2 + 16));
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  CCursorClip::OnDisplayStateChange(v4, *((_BYTE *)v2 + 1505) != 0);
  return 0LL;
}
