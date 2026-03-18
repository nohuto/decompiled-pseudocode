/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@0@0V12@@Z @ 0x18024A174
 * Callers:
 *     ??$emplace_back@$$V@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180078A10 (--$emplace_back@$$V@-$vector_facade@UCpuClipStackState@CScopedClipStack@@V-$buffer_impl@UCpuClip.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@_J@Z @ 0x1801B4658 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext.c)
 *     ??4CpuClipStackState@CScopedClipStack@@QEAAAEAU01@$$QEAU01@@Z @ 0x180263FB8 (--4CpuClipStackState@CScopedClipStack@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<CScopedClipStack::CpuClipStackState *>,stdext::checked_array_iterator<CScopedClipStack::CpuClipStackState *>>(
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
  v8 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CScopedClipStack::CpuClipStackState *> &,__int64>(
         a4,
         0x3333333333333333LL * ((a3 - a2) >> 3));
  while ( a2 != v7 )
  {
    v8 -= 40LL;
    v7 -= 40LL;
    CScopedClipStack::CpuClipStackState::operator=(v8, v7);
  }
  result = a1;
  a4[2] = 0xCCCCCCCCCCCCCCCDuLL * ((v8 - *a4) >> 3);
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
