/*
 * XREFs of wil::details::lambda_call__lambda_77309ab01da84830c424755745c6078a___::_lambda_call__lambda_77309ab01da84830c424755745c6078a___ @ 0x1800B6804
 * Callers:
 *     _CAudioResourceManager::CreateStream_::_1_::dtor$21 @ 0x18016D7EA (_CAudioResourceManager--CreateStream_--_1_--dtor$21.c)
 * Callees:
 *     <none>
 */

_BYTE *__fastcall wil::details::lambda_call__lambda_77309ab01da84830c424755745c6078a___::_lambda_call__lambda_77309ab01da84830c424755745c6078a___(
        __int64 a1)
{
  _BYTE *result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    result = *(_BYTE **)a1;
    if ( **(_BYTE **)a1 )
      return (_BYTE *)AudioPolicyManagerExtension_OnPreMatchFormatStateChange(*(_QWORD *)(***(_QWORD ***)(a1 + 8) + 48LL));
  }
  return result;
}
