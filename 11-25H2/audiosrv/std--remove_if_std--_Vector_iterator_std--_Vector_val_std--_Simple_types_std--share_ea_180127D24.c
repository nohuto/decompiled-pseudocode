/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_EffectPack_________lambda_4e7757eacc48e777df79214de0431eb5___ @ 0x180127D24
 * Callers:
 *     ?ReconcileEffectPacksOnEndpoint@CEndpointCharacteristics@@QEAAXXZ @ 0x18012DBF0 (-ReconcileEffectPacksOnEndpoint@CEndpointCharacteristics@@QEAAXXZ.c)
 * Callees:
 *     ??4?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18005DEC4 (--4-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 */

__int64 **__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_EffectPack_________lambda_4e7757eacc48e777df79214de0431eb5___(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v5; // rdx
  __int64 v7; // r8
  __int64 *i; // rsi
  __m128i v9; // xmm0

  v5 = *(_QWORD *)CLSID_VOCAAudioEffectPackID.Data4;
  v7 = *(_QWORD *)&CLSID_VOCAAudioEffectPackID.Data1;
  while ( a2 != a3
       && __PAIR128__(_mm_srli_si128(*(__m128i *)*(_QWORD *)(*a2 + 1568), 8).m128i_u64[0], **(_QWORD **)(*a2 + 1568)) != *(_OWORD *)&CLSID_VOCAAudioEffectPackID )
    a2 += 2;
  if ( a2 != a3 )
  {
    for ( i = a2 + 2; i != a3; i += 2 )
    {
      v9 = *(__m128i *)*(_QWORD *)(*i + 1568);
      if ( v9.m128i_i64[0] != v7 || _mm_srli_si128(v9, 8).m128i_u64[0] != v5 )
      {
        std::shared_ptr<std::function<void (void)>>::operator=(a2, i);
        v5 = *(_QWORD *)CLSID_VOCAAudioEffectPackID.Data4;
        a2 += 2;
        v7 = *(_QWORD *)&CLSID_VOCAAudioEffectPackID.Data1;
      }
    }
  }
  *a1 = a2;
  return a1;
}
