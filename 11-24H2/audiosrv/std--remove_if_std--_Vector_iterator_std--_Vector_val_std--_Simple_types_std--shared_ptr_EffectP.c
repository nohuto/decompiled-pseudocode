/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_EffectPackConfiguration_const__________lambda_e88da4b83d171c6f9230c1d6aaf0e7ce___ @ 0x1800FB7E8
 * Callers:
 *     ?RemoveEffectPackConfigurationFromList@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z @ 0x1800FC080 (-RemoveEffectPackConfigurationFromList@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     ??4?$shared_ptr@VCXvmPowerReference@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180071BB8 (--4-$shared_ptr@VCXvmPowerReference@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 **__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_EffectPackConfiguration_const__________lambda_e88da4b83d171c6f9230c1d6aaf0e7ce___(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 *i; // rsi
  __int64 v8; // rax
  __int64 *j; // r14
  __int64 v10; // rax
  __int64 **result; // rax

  for ( i = a2; i != a3; i += 2 )
  {
    v8 = *(_QWORD *)*i - *a4;
    if ( !v8 )
      v8 = *(_QWORD *)(*i + 8) - a4[1];
    if ( !v8 )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 2; j != a3; j += 2 )
    {
      v10 = *(_QWORD *)*j - *a4;
      if ( !v10 )
        v10 = *(_QWORD *)(*j + 8) - a4[1];
      if ( v10 )
      {
        std::shared_ptr<CXvmPowerReference>::operator=(i, j);
        i += 2;
      }
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
