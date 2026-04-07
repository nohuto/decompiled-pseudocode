/*
 * XREFs of ?Cleanup@CAnimationEngine@@QEAAXXZ @ 0x1800A7474
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18008DE70 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ @ 0x18006CF70 (-StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ.c)
 *     ?StopAnimations@CAnimationEngine@@AEAAJXZ @ 0x180072534 (-StopAnimations@CAnimationEngine@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAnimationEngine::Cleanup(CAnimationEngine *this)
{
  __int64 i; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 16); i = (unsigned int)(i + 1) )
    CAnimationEngine::CTransitionVisualSet::StopStoryboard(*(CAnimationEngine::CTransitionVisualSet **)(*((_QWORD *)this + 5) + 8 * i));
  CAnimationEngine::StopAnimations(this);
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 1) = 0LL;
  }
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 2) = 0LL;
  }
  v5 = *((_QWORD *)this + 3);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *((_QWORD *)this + 3) = 0LL;
  }
  *((_BYTE *)this + 120) = 0;
}
