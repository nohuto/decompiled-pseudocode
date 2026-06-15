/*
 * XREFs of ??$copy@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@@std@@V?$back_insert_iterator@V?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@@2@@std@@YA?AV?$back_insert_iterator@V?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@@0@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@@0@0V10@@Z @ 0x18012F8E0
 * Callers:
 *     ?GetEffectPacks@CEndpointCharacteristics@@QEAAJAEAV?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@@Z @ 0x18003F5A0 (-GetEffectPacks@CEndpointCharacteristics@@QEAAJAEAV-$vector@V-$shared_ptr@VEffectPack@@@std@@V-$.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VEffectPack@@@std@@@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@VEffectPack@@@1@QEAV21@AEBV21@@Z @ 0x18003E66C (--$_Emplace_reallocate@AEBV-$shared_ptr@VEffectPack@@@std@@@-$vector@V-$shared_ptr@VEffectPack@@.c)
 *     ??$_Construct_in_place@V?$shared_ptr@VEffectPack@@@std@@AEAV12@@std@@YAXAEAV?$shared_ptr@VEffectPack@@@0@0@Z @ 0x1800FB688 (--$_Construct_in_place@V-$shared_ptr@VEffectPack@@@std@@AEAV12@@std@@YAXAEAV-$shared_ptr@VEffect.c)
 */

__int64 **__fastcall std::copy<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::shared_ptr<EffectPack>>>>,std::back_insert_iterator<std::vector<std::shared_ptr<EffectPack>>>>(
        __int64 **a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 *a4)
{
  _QWORD *i; // rsi
  _QWORD *v8; // rcx
  __int64 **result; // rax

  for ( i = a2; i != a3; i += 2 )
  {
    v8 = (_QWORD *)a4[1];
    if ( v8 == (_QWORD *)a4[2] )
    {
      std::vector<std::shared_ptr<EffectPack>>::_Emplace_reallocate<std::shared_ptr<EffectPack> const &>(
        a4,
        a4[1],
        (__int64)i);
    }
    else
    {
      std::_Construct_in_place<std::shared_ptr<EffectPack>,std::shared_ptr<EffectPack> &>(v8, i);
      a4[1] += 16LL;
    }
  }
  result = a1;
  *a1 = a4;
  return result;
}
