/*
 * XREFs of ?OnSourceConstantAlphaUpdated@CTopLevelWindow@@QEAAXXZ @ 0x1800344DC
 * Callers:
 *     ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800342D0 (-AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180106BD0 (-OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 * Callees:
 *     ?Hide@CVisual@@QEAAXXZ @ 0x18001FE8C (-Hide@CVisual@@QEAAXXZ.c)
 *     ?Unhide@CVisual@@QEAAXXZ @ 0x180020664 (-Unhide@CVisual@@QEAAXXZ.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180041E40 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CTopLevelWindow::OnSourceConstantAlphaUpdated(CTopLevelWindow *this)
{
  __int64 v1; // rdx
  double v3; // xmm6_8
  float v4; // xmm0_4
  __int64 v5; // rax

  v1 = *((_QWORD *)this + 94);
  v3 = (double)*(unsigned __int8 *)(v1 + 408) / 255.0;
  if ( (*(_BYTE *)(v1 + 676) & 2) != 0 )
  {
    if ( v3 <= 0.0 )
    {
      CVisual::SetOpacity(this, 1.0);
      CVisual::Hide(this);
      *((_BYTE *)this + 249) |= 0x40u;
    }
    else
    {
      if ( (*((_BYTE *)this + 249) & 0x40) != 0 )
      {
        CVisual::Unhide(this);
        *((_BYTE *)this + 249) &= ~0x40u;
      }
      CVisual::SetOpacity(this, v3);
    }
  }
  else
  {
    v4 = v3;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((double *)this + 24) - v4) & _xmm) > 0.0000011920929 )
    {
      v5 = *(_QWORD *)this;
      *((double *)this + 24) = v3;
      (*(void (__fastcall **)(CTopLevelWindow *, __int64))(v5 + 24))(this, 32LL);
    }
  }
}
