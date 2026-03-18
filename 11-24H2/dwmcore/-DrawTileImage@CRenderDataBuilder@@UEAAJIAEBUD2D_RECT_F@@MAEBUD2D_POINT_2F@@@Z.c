/*
 * XREFs of ?DrawTileImage@CRenderDataBuilder@@UEAAJIAEBUD2D_RECT_F@@MAEBUD2D_POINT_2F@@@Z @ 0x1802050B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001D7A0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CRenderDataBuilder::DrawTileImage(
        CRenderDataBuilder *this,
        int a2,
        const struct D2D_RECT_F *a3,
        float a4,
        const struct D2D_POINT_2F *a5)
{
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int128 v12; // xmm0

  v8 = DynArrayImpl<0>::Grow((__int64)this + 16, 1u, 40, 0, 0LL);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0xD3u, 0LL);
  }
  else
  {
    v10 = *((unsigned int *)this + 10);
    v11 = *((_QWORD *)this + 2);
    *(_DWORD *)(v10 + v11) = 40;
    *(_QWORD *)(v10 + v11 + 8) = 0LL;
    *(_QWORD *)(v10 + v11 + 16) = 0LL;
    *(_QWORD *)(v10 + v11 + 24) = 0LL;
    *(_QWORD *)(v10 + v11 + 32) = 0LL;
    *(_DWORD *)(v10 + v11 + 4) = 435;
    *(_DWORD *)(v10 + v11 + 8) = a2;
    v12 = (__int128)*a3;
    *(float *)(v10 + v11 + 28) = a4;
    *(_OWORD *)(v10 + v11 + 12) = v12;
    *(struct D2D_POINT_2F *)(v10 + v11 + 32) = *a5;
    *((_DWORD *)this + 10) += 40;
  }
  return v9;
}
