/*
 * XREFs of ?EnableTreatment@CWindowBackgroundTreatmentVisual@@QEAAXXZ @ 0x180077248
 * Callers:
 *     ?UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ @ 0x18002CD2C (-UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18002D1FC (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?InitializeVisualTreeClone@CWindowBackgroundTreatmentVisual@@QEAAJPEAV1@W4CloneOptions@@@Z @ 0x180030374 (-InitializeVisualTreeClone@CWindowBackgroundTreatmentVisual@@QEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CWindowBackgroundTreatmentVisual::EnableTreatment(CWindowBackgroundTreatmentVisual *this)
{
  __int64 v1; // rax

  if ( !*((_BYTE *)this + 200) )
  {
    v1 = *(_QWORD *)this;
    *((_BYTE *)this + 200) = 1;
    (*(void (__fastcall **)(CWindowBackgroundTreatmentVisual *, __int64))(v1 + 24))(this, 4096LL);
  }
}
