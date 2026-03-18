/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAUEffectInput@@@std@@V?$checked_array_iterator@PEAUEffectInput@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUEffectInput@@@stdext@@V?$move_iterator@PEAUEffectInput@@@0@0V12@@Z @ 0x1802E8610
 * Callers:
 *     ??$emplace_back@UEffectInput@@@?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXUEffectInput@@@Z @ 0x18007F7BC (--$emplace_back@UEffectInput@@@-$vector_facade@UEffectInput@@V-$buffer_impl@UEffectInput@@$03$00.c)
 * Callees:
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x18007D7F8 (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUEffectInput@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUEffectInput@@@stdext@@_J@Z @ 0x180255E94 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUEffectInput@@@stdext@@_J@std@@YA-A_TAEAV-$c.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<EffectInput *>,stdext::checked_array_iterator<EffectInput *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v7 = a3;
  v8 = std::_Get_unwrapped_n<stdext::checked_array_iterator<EffectInput *> &,__int64>(
         a4,
         0x9249249249249249uLL * ((a3 - a2) >> 4));
  while ( a2 != v7 )
  {
    v8 -= 112LL;
    v7 -= 112LL;
    EffectInput::operator=(v8, v7);
  }
  result = a1;
  a4[2] = 0x6DB6DB6DB6DB6DB7LL * ((v8 - *a4) >> 4);
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
