/*
 * XREFs of ?DrawSolidRectangle@CRenderDataBuilder@@UEAAJAEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@@Z @ 0x180218350
 * Callers:
 *     <none>
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800B2860 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CRenderDataBuilder::DrawSolidRectangle(
        CRenderDataBuilder *this,
        const struct D2D_RECT_F *a2,
        const struct _D3DCOLORVALUE *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx

  v6 = DynArrayImpl<0>::Grow((__int64)this + 16, 1u, 40, 0, 0LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x12Bu, 0LL);
  }
  else
  {
    v8 = *((unsigned int *)this + 10);
    v9 = *((_QWORD *)this + 2);
    *(_DWORD *)(v8 + v9) = 40;
    *(_QWORD *)(v8 + v9 + 8) = 0LL;
    *(_QWORD *)(v8 + v9 + 16) = 0LL;
    *(_QWORD *)(v8 + v9 + 24) = 0LL;
    *(_QWORD *)(v8 + v9 + 32) = 0LL;
    *(_DWORD *)(v8 + v9 + 4) = 425;
    *(struct D2D_RECT_F *)(v8 + v9 + 8) = *a2;
    *(struct _D3DCOLORVALUE *)(v8 + v9 + 24) = *(const struct _D3DCOLORVALUE *)&a3->r;
    *((_DWORD *)this + 10) += 40;
  }
  return v7;
}
