/*
 * XREFs of ??$move@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@0@0V12@@Z @ 0x180249F68
 * Callers:
 *     ?pop_back@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180077080 (-pop_back@-$vector_facade@UCpuClipStackState@CScopedClipStack@@V-$buffer_impl@UCpuClipStackState.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x180077230 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z @ 0x180077F10 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@_J@Z @ 0x1801B4658 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext.c)
 *     ??4CpuClipStackState@CScopedClipStack@@QEAAAEAU01@$$QEAU01@@Z @ 0x180263FB8 (--4CpuClipStackState@CScopedClipStack@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

__int64 __fastcall std::move<std::move_iterator<CScopedClipStack::CpuClipStackState *>,stdext::checked_array_iterator<CScopedClipStack::CpuClipStackState *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v4 = a2;
  v8 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CScopedClipStack::CpuClipStackState *> &,__int64>(
         a4,
         0xCCCCCCCCCCCCCCCDuLL * ((a3 - a2) >> 3));
  while ( v4 != a3 )
  {
    CScopedClipStack::CpuClipStackState::operator=(v8, v4);
    v8 += 40LL;
    v4 += 40LL;
  }
  result = a1;
  a4[2] = 0xCCCCCCCCCCCCCCCDuLL * ((v8 - *a4) >> 3);
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
