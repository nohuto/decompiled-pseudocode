/*
 * XREFs of ?SetProperty@?$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800773A0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180078FA4 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CEffectGroupGeneratedT<CEffectGroup,CEffect>::SetProperty(CResource *a1, int a2, int a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // [rsp+20h] [rbp-18h]

  if ( a3 != 18 )
  {
    v6 = 3226;
LABEL_8:
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, v6, 0LL);
    return v4;
  }
  if ( a2 != 1 )
  {
    v6 = 3221;
    goto LABEL_8;
  }
  if ( *(float *)a4 != *((float *)a1 + 20) )
  {
    *((_DWORD *)a1 + 20) = *a4;
    CResource::OnPropertyChanged(a1);
  }
  return 0;
}
