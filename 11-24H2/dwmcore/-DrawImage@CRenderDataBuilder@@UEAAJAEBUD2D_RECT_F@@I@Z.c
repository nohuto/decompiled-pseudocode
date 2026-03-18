/*
 * XREFs of ?DrawImage@CRenderDataBuilder@@UEAAJAEBUD2D_RECT_F@@I@Z @ 0x1802146D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001D7A0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CRenderDataBuilder::DrawImage(CRenderDataBuilder *this, const struct D2D_RECT_F *a2, int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int128 v9; // xmm0

  v6 = DynArrayImpl<0>::Grow((__int64)this + 16, 1u, 28, 0, 0LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x8Fu, 0LL);
  }
  else
  {
    v8 = *((_QWORD *)this + 2) + *((unsigned int *)this + 10);
    *(_DWORD *)v8 = 28;
    *(_OWORD *)(v8 + 4) = 0LL;
    *(_QWORD *)(v8 + 20) = 0LL;
    *(_DWORD *)(v8 + 4) = 431;
    v9 = (__int128)*a2;
    *(_DWORD *)(v8 + 8) = a3;
    *(_OWORD *)(v8 + 12) = v9;
    *((_DWORD *)this + 10) += 28;
  }
  return v7;
}
