/*
 * XREFs of ?PushTransform@CRenderDataBuilder@@UEAAJI@Z @ 0x180205370
 * Callers:
 *     <none>
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001D7A0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CRenderDataBuilder::PushTransform(CRenderDataBuilder *this, int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx

  v4 = DynArrayImpl<0>::Grow((__int64)this + 16, 1u, 12, 0, 0LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x113u, 0LL);
  }
  else
  {
    v6 = *((_QWORD *)this + 2) + *((unsigned int *)this + 10);
    *(_DWORD *)v6 = 12;
    *(_QWORD *)(v6 + 4) = 0LL;
    *(_DWORD *)(v6 + 4) = 438;
    *(_DWORD *)(v6 + 8) = a2;
    *((_DWORD *)this + 10) += 12;
    ++*((_DWORD *)this + 2);
  }
  return v5;
}
