/*
 * XREFs of ?EnableTreatment@CWindowBackgroundTreatmentVisual@@QEAAXXZ @ 0x180006B58
 * Callers:
 *     ?CloneVisualTree@CWindowBackgroundTreatmentVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180006AD0 (-CloneVisualTree@CWindowBackgroundTreatmentVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x180018FB4 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ @ 0x18003B464 (-UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CWindowBackgroundTreatmentVisual::EnableTreatment(CWindowBackgroundTreatmentVisual *this)
{
  __int64 v1; // rax

  if ( !*((_BYTE *)this + 280) )
  {
    v1 = *(_QWORD *)this;
    *((_BYTE *)this + 280) = 1;
    (*(void (__fastcall **)(CWindowBackgroundTreatmentVisual *, __int64))(v1 + 24))(this, 4096LL);
  }
}
