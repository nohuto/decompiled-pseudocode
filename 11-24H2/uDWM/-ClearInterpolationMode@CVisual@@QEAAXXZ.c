/*
 * XREFs of ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x18007AF10
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x18001F970 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x180029224 (-UpdateWindowScale@CTopLevelWindow@@AEAAXXZ.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x1800792A8 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z @ 0x18007AD78 (-UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z.c)
 *     ?OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z @ 0x180088460 (-OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::ClearInterpolationMode(CVisual *this)
{
  __int64 v1; // rax

  if ( *((_DWORD *)this + 33) != -1 )
  {
    v1 = *(_QWORD *)this;
    *((_DWORD *)this + 33) = -1;
    (*(void (__fastcall **)(CVisual *, __int64))(v1 + 24))(this, 64LL);
  }
}
