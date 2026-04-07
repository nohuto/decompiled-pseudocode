/*
 * XREFs of ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18003423C
 * Callers:
 *     ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800342D0 (-AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180036300 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180035620 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z @ 0x18004D118 (-SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::OnSourceConstantAlphaUpdated(CSecondaryWindowRepresentation *this)
{
  __int64 v2; // rbx
  float v3; // xmm0_4
  double v4; // xmm2_8
  __int64 v6; // rax

  v2 = *((_QWORD *)this + 8);
  if ( *((_DWORD *)this + 18) != 1 )
  {
    if ( *((_DWORD *)this + 18) == 2 )
    {
      v6 = *(_QWORD *)(v2 + 480);
      if ( v6 )
        v2 = *(_QWORD *)(v6 + 32);
    }
    else
    {
      if ( *((_DWORD *)this + 18) != 3 )
        return 0LL;
      if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)this + 8)) )
        v2 = *(_QWORD *)(*(_QWORD *)(v2 + 488) + 80LL);
    }
  }
  if ( v2 )
  {
    v3 = *((double *)this + 45);
    v4 = (double)*(unsigned __int8 *)(v2 + 408) / 255.0;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)v4 - v3) & _xmm) > 0.0000011920929 )
    {
      *((double *)this + 45) = v4;
      CSecondaryWindowRepresentation::SetDirtyFlags(this, 0x10u);
    }
  }
  return 0LL;
}
