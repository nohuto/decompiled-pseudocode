/*
 * XREFs of ?Pop@CRenderDataBuilder@@UEAAJXZ @ 0x180207A90
 * Callers:
 *     <none>
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001D7A0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CRenderDataBuilder::Pop(CRenderDataBuilder *this)
{
  int v2; // eax
  unsigned int v3; // edi
  _DWORD *v4; // rcx

  v2 = DynArrayImpl<0>::Grow((__int64)this + 16, 1u, 8, 0, 0LL);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v2, 0xFDu, 0LL);
  }
  else
  {
    v4 = (_DWORD *)(*((_QWORD *)this + 2) + *((unsigned int *)this + 10));
    *v4 = 8;
    v4[1] = 437;
    *((_DWORD *)this + 10) += 8;
    --*((_DWORD *)this + 2);
  }
  return v3;
}
