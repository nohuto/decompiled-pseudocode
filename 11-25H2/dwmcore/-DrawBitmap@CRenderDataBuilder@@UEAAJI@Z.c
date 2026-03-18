/*
 * XREFs of ?DrawBitmap@CRenderDataBuilder@@UEAAJI@Z @ 0x180225CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800B2860 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CRenderDataBuilder::DrawBitmap(CRenderDataBuilder *this, int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx

  v4 = DynArrayImpl<0>::Grow((__int64)this + 16, 1u, 16, 0, 0LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x64u, 0LL);
  }
  else
  {
    v6 = *((unsigned int *)this + 10);
    v7 = *((_QWORD *)this + 2);
    *(_DWORD *)(v6 + v7) = 16;
    *(_QWORD *)(v6 + v7 + 8) = 0LL;
    *(_DWORD *)(v6 + v7 + 4) = 419;
    *(_DWORD *)(v6 + v7 + 8) = a2;
    *((_DWORD *)this + 10) += 16;
  }
  return v5;
}
