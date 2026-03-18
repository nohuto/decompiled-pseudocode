/*
 * XREFs of ?DrawMesh2D@CRenderDataBuilder@@UEAAJII@Z @ 0x18021E310
 * Callers:
 *     <none>
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800B2860 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CRenderDataBuilder::DrawMesh2D(CRenderDataBuilder *this, int a2, int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx

  v6 = DynArrayImpl<0>::Grow((__int64)this + 16, 1u, 16, 0, 0LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0xA5u, 0LL);
  }
  else
  {
    v8 = *((unsigned int *)this + 10);
    v9 = *((_QWORD *)this + 2);
    *(_DWORD *)(v8 + v9) = 16;
    *(_QWORD *)(v8 + v9 + 8) = 0LL;
    *(_DWORD *)(v8 + v9 + 4) = 423;
    *(_DWORD *)(v8 + v9 + 8) = a2;
    *(_DWORD *)(v8 + v9 + 12) = a3;
    *((_DWORD *)this + 10) += 16;
  }
  return v7;
}
