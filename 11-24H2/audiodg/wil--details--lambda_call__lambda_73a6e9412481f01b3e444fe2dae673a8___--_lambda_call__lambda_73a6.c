/*
 * XREFs of wil::details::lambda_call__lambda_73a6e9412481f01b3e444fe2dae673a8___::_lambda_call__lambda_73a6e9412481f01b3e444fe2dae673a8___ @ 0x140043DE4
 * Callers:
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$3 @ 0x140093801 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$3.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$5 @ 0x140093813 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall wil::details::lambda_call__lambda_73a6e9412481f01b3e444fe2dae673a8___::_lambda_call__lambda_73a6e9412481f01b3e444fe2dae673a8___(
        __int64 a1)
{
  HRESULT result; // eax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return PropVariantClear(*(PROPVARIANT **)a1);
  }
  return result;
}
