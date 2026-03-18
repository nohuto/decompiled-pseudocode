/*
 * XREFs of ?SetShadowOpacity@CProjectedShadow@@QEAAXM@Z @ 0x18022639C
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x18011B580 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CProjectedShadow::SetShadowOpacity(CProjectedShadow *this, float a2)
{
  __int64 v2; // rax

  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 25) - a2) & _xmm) > 0.0000011920929 )
  {
    v2 = *(_QWORD *)this;
    *((float *)this + 25) = a2;
    (*(void (__fastcall **)(CProjectedShadow *, __int64, CProjectedShadow *))(v2 + 80))(this, 5LL, this);
  }
}
