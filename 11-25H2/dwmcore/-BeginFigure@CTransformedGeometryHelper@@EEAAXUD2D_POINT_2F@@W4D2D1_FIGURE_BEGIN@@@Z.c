/*
 * XREFs of ?BeginFigure@CTransformedGeometryHelper@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x180170090
 * Callers:
 *     <none>
 * Callees:
 *     ?Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAU2@I@Z @ 0x18017070C (-Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAU2@I@Z.c)
 */

void __fastcall CTransformedGeometryHelper::BeginFigure(CMILMatrix **this, struct D2D_POINT_2F a2, unsigned int a3)
{
  struct D2D_POINT_2F v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = a2;
  CMILMatrix::Transform(this[2], v5, v5, 1u);
  (*(void (__fastcall **)(CMILMatrix *, _QWORD, _QWORD))(*(_QWORD *)this[4] + 40LL))(this[4], *(_QWORD *)v5, a3);
}
