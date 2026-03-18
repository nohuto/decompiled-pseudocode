/*
 * XREFs of ?SetBlurRadius@CProjectedShadow@@QEAAXM@Z @ 0x180226FDC
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x18011B580 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CProjectedShadow::SetBlurRadius(CProjectedShadow *this, float a2)
{
  __int64 v2; // rax

  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a2 - *((float *)this + 24)) & _xmm) > 0.5 )
  {
    v2 = *(_QWORD *)this;
    *((float *)this + 24) = a2;
    (*(void (__fastcall **)(CProjectedShadow *, _QWORD, CProjectedShadow *))(v2 + 80))(this, 0LL, this);
  }
}
