/*
 * XREFs of ??$_Uninitialized_move@PEAUEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@YAPEAUEffectInput@@QEAU1@0PEAU1@AEAV?$allocator@UEffectInput@@@0@@Z @ 0x1801372A0
 * Callers:
 *     ??$_Emplace_reallocate@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAPEAUEffectInput@@QEAU2@$$QEA$$T@Z @ 0x1801E43CC (--$_Emplace_reallocate@$$T@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAPEA.c)
 * Callees:
 *     ??$construct@UEffectInput@@U1@@detail@@YAPEAUEffectInput@@PEAU1@$$QEAU1@@Z @ 0x1801371EC (--$construct@UEffectInput@@U1@@detail@@YAPEAUEffectInput@@PEAU1@$$QEAU1@@Z.c)
 */

__int64 __fastcall std::_Uninitialized_move<EffectInput *>(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 112LL )
  {
    detail::construct<EffectInput,EffectInput>(a3, i);
    a3 += 112LL;
  }
  return a3;
}
