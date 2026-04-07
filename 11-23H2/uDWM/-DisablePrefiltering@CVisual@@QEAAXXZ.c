/*
 * XREFs of ?DisablePrefiltering@CVisual@@QEAAXXZ @ 0x180055A68
 * Callers:
 *     ?Initialize@CAnimatedTransitionVisual@@MEAAJXZ @ 0x180055A30 (-Initialize@CAnimatedTransitionVisual@@MEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVisual::DisablePrefiltering(CVisual *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 51);
  if ( (v1 & 1) == 0 )
  {
    *((_DWORD *)this + 55) = 1;
    *((_DWORD *)this + 51) = v1 | 1;
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 64LL);
  }
}
