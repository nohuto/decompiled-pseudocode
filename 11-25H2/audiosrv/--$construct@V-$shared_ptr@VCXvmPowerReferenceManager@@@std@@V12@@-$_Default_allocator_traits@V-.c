/*
 * XREFs of ??$construct@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@V12@@?$_Default_allocator_traits@V?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@std@@@std@@SAXAEAV?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@1@QEAV?$shared_ptr@VCXvmPowerReferenceManager@@@1@$$QEAV31@@Z @ 0x1800A6D28
 * Callers:
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@YAPEAV?$shared_ptr@VEffectPack@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@VEffectPack@@@std@@@0@@Z @ 0x180041A78 (--$_Uninitialized_move@PEAV-$shared_ptr@VEffectPack@@@std@@V-$allocator@V-$shared_ptr@VEffectPac.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<std::shared_ptr<CXvmPowerReferenceManager>>>::construct<std::shared_ptr<CXvmPowerReferenceManager>,std::shared_ptr<CXvmPowerReferenceManager>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  *a2 = *a3;
  result = a3[1];
  a2[1] = result;
  *a3 = 0LL;
  a3[1] = 0LL;
  return result;
}
