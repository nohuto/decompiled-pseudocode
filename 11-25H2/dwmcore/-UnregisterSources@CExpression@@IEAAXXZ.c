/*
 * XREFs of ?UnregisterSources@CExpression@@IEAAXXZ @ 0x1801B82B8
 * Callers:
 *     ?SetOwner@CExpression@@UEAAXPEAVCBaseExpression@@@Z @ 0x1801B8280 (-SetOwner@CExpression@@UEAAXPEAVCBaseExpression@@@Z.c)
 *     ??1CExpression@@MEAA@XZ @ 0x1801FD7DC (--1CExpression@@MEAA@XZ.c)
 * Callees:
 *     ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x180060BE0 (-GetTargetResource@-$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ.c)
 *     ?RemoveSourceAnimation@CResource@@QEAAXPEAVCBaseExpression@@I@Z @ 0x1801D72A0 (-RemoveSourceAnimation@CResource@@QEAAXPEAVCBaseExpression@@I@Z.c)
 */

void __fastcall CExpression::UnregisterSources(struct CBaseExpression **this)
{
  struct CBaseExpression *v2; // rsi
  unsigned int i; // edi
  __int64 v4; // rcx
  __int64 v5; // rcx
  CResource *TargetResource; // rax

  if ( ((_BYTE)this[47] & 1) != 0 )
  {
    v2 = (struct CBaseExpression *)this;
    if ( this[40] )
      v2 = this[40];
    for ( i = 0; i < *((_DWORD *)this + 93); ++i )
    {
      v4 = *((unsigned int *)this[44] + 7 * i + 4);
      if ( (unsigned int)v4 < *((_DWORD *)this + 92) )
      {
        v5 = *((_QWORD *)this[43] + v4);
        if ( v5 )
        {
          TargetResource = (CResource *)CWeakReference<CGdiSpriteBitmap>::GetTargetResource(v5);
          if ( TargetResource )
            CResource::RemoveSourceAnimation(TargetResource, v2, *((_DWORD *)this[44] + 7 * i));
        }
      }
    }
    *((_BYTE *)this + 376) &= ~1u;
  }
}
