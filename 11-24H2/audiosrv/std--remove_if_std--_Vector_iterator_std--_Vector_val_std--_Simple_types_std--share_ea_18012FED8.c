/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_EffectPack_________lambda_5633c08dc3eb87d401f8469e9bff1b6c___ @ 0x18012FED8
 * Callers:
 *     ?RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x180136580 (-RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z.c)
 * Callees:
 *     ??4?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18005009C (--4-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

__int64 **__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_EffectPack_________lambda_5633c08dc3eb87d401f8469e9bff1b6c___(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 *i; // rsi
  __m128i *v8; // rcx
  unsigned __int64 v9; // rax
  __int64 *j; // r14
  __m128i *v11; // rcx
  unsigned __int64 v12; // rax

  for ( i = a2; i != a3; i += 2 )
  {
    v8 = *(__m128i **)(*i + 1568);
    v9 = v8->m128i_i64[0] - *a4;
    if ( !v9 )
      v9 = _mm_srli_si128(*v8, 8).m128i_u64[0] - a4[1];
    if ( !v9 )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 2; j != a3; j += 2 )
    {
      v11 = *(__m128i **)(*j + 1568);
      v12 = v11->m128i_i64[0] - *a4;
      if ( !v12 )
        v12 = _mm_srli_si128(*v11, 8).m128i_u64[0] - a4[1];
      if ( v12 )
      {
        std::shared_ptr<std::function<void (void)>>::operator=(i, j);
        i += 2;
      }
    }
  }
  *a1 = i;
  return a1;
}
