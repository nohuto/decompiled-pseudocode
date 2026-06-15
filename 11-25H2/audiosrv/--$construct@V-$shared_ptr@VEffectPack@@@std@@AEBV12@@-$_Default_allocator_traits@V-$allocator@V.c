/*
 * XREFs of ??$construct@V?$shared_ptr@VEffectPack@@@std@@AEBV12@@?$_Default_allocator_traits@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@SAXAEAV?$allocator@V?$shared_ptr@VEffectPack@@@std@@@1@QEAV?$shared_ptr@VEffectPack@@@1@AEBV31@@Z @ 0x1800F86F8
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VEffectPack@@@std@@@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@VEffectPack@@@1@QEAV21@AEBV21@@Z @ 0x18007DCBC (--$_Emplace_reallocate@AEBV-$shared_ptr@VEffectPack@@@std@@@-$vector@V-$shared_ptr@VEffectPack@@.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@?$vector@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@V?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@VCXvmPowerReferenceManager@@@1@QEAV21@AEBV21@@Z @ 0x1800F85B8 (--$_Emplace_reallocate@AEBV-$shared_ptr@VCXvmPowerReferenceManager@@@std@@@-$vector@V-$shared_pt.c)
 *     ??$_Emplace_reallocate@AEAV?$shared_ptr@VEffectPack@@@std@@@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@VEffectPack@@@1@QEAV21@AEAV21@@Z @ 0x180126B94 (--$_Emplace_reallocate@AEAV-$shared_ptr@VEffectPack@@@std@@@-$vector@V-$shared_ptr@VEffectPack@@.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Default_allocator_traits<std::allocator<std::shared_ptr<EffectPack>>>::construct<std::shared_ptr<EffectPack>,std::shared_ptr<EffectPack> const &>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  return std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(a2, a3);
}
