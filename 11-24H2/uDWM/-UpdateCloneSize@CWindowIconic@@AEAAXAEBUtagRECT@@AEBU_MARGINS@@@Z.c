/*
 * XREFs of ?UpdateCloneSize@CWindowIconic@@AEAAXAEBUtagRECT@@AEBU_MARGINS@@@Z @ 0x180006200
 * Callers:
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180005D7C (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowIconic::UpdateCloneSize(
        CWindowIconic *this,
        const struct tagRECT *a2,
        const struct _MARGINS *a3)
{
  *(struct _MARGINS *)(*((_QWORD *)this + 10) + 64LL) = *a3;
  *(_OWORD *)(*((_QWORD *)this + 10) + 268LL) = *(_OWORD *)(*((_QWORD *)this + 10) + 64LL);
  *(struct tagRECT *)(*((_QWORD *)this + 10) + 48LL) = *a2;
  *(_OWORD *)(*((_QWORD *)this + 10) + 220LL) = *(_OWORD *)(*((_QWORD *)this + 10) + 48LL);
  *(_DWORD *)(*((_QWORD *)this + 10) + 332LL) = 1065353216;
  *(_DWORD *)(*((_QWORD *)this + 10) + 212LL) = 1065353216;
  *(_DWORD *)(*((_QWORD *)this + 10) + 216LL) = 1065353216;
  *(_QWORD *)(*((_QWORD *)this + 10) + 336LL) = 0x3FF0000000000000LL;
}
