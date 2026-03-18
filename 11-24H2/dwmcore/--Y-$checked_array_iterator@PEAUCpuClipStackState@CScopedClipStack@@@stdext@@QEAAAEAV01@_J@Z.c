/*
 * XREFs of ??Y?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@QEAAAEAV01@_J@Z @ 0x1801CB1B0
 * Callers:
 *     ?pop_back@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180077080 (-pop_back@-$vector_facade@UCpuClipStackState@CScopedClipStack@@V-$buffer_impl@UCpuClipStackState.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x180077230 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z @ 0x180077F10 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z.c)
 *     ??$emplace_back@$$V@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180078A10 (--$emplace_back@$$V@-$vector_facade@UCpuClipStackState@CScopedClipStack@@V-$buffer_impl@UCpuClip.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall stdext::checked_array_iterator<CScopedClipStack::CpuClipStackState *>::operator+=(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // r8

  if ( !a2 )
    goto LABEL_4;
  if ( !*a1 )
    goto LABEL_6;
  if ( a2 < 0 )
  {
    if ( a1[2] < (unsigned __int64)-a2 )
      goto LABEL_6;
    a1[2] += a2;
    return a1;
  }
  else
  {
LABEL_4:
    v2 = a1 + 2;
    if ( a2 > 0 && a1[1] - *v2 < (unsigned __int64)a2 )
LABEL_6:
      _invalid_parameter_noinfo_noreturn();
    *v2 += a2;
    return a1;
  }
}
