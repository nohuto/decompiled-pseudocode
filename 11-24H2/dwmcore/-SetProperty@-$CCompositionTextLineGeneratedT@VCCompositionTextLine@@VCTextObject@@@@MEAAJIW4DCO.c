/*
 * XREFs of ?SetProperty@?$CCompositionTextLineGeneratedT@VCCompositionTextLine@@VCTextObject@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802796A0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180027994 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CCompositionTextLineGeneratedT<CCompositionTextLine,CTextObject>::SetProperty(
        CResource *a1,
        int a2,
        int a3,
        _DWORD *a4)
{
  int v4; // edx
  int v5; // edx
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+20h] [rbp-18h]

  if ( a3 == 18 )
  {
    v4 = a2 - 3;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 != 1 )
        {
          v8 = 5975;
          goto LABEL_7;
        }
        if ( *(float *)a4 != *((float *)a1 + 26) )
        {
          *((_DWORD *)a1 + 26) = *a4;
LABEL_14:
          CResource::OnPropertyChanged(a1);
        }
      }
      else if ( *(float *)a4 != *((float *)a1 + 25) )
      {
        *((_DWORD *)a1 + 25) = *a4;
        goto LABEL_14;
      }
    }
    else if ( *(float *)a4 != *((float *)a1 + 24) )
    {
      *((_DWORD *)a1 + 24) = *a4;
      goto LABEL_14;
    }
    return 0;
  }
  v8 = 5980;
LABEL_7:
  v6 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, v8, 0LL);
  return v6;
}
