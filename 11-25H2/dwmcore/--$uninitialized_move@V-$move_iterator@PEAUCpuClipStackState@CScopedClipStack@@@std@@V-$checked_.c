/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@0@0V12@@Z @ 0x1801C4204
 * Callers:
 *     ??$emplace_back@$$V@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800AA830 (--$emplace_back@$$V@-$vector_facade@UCpuClipStackState@CScopedClipStack@@V-$buffer_impl@UCpuClip.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@_J@Z @ 0x1801C42D8 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<CScopedClipStack::CpuClipStackState *>,stdext::checked_array_iterator<CScopedClipStack::CpuClipStackState *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v8; // rdx
  __int64 i; // rbx
  _QWORD *v10; // r8
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v8 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CScopedClipStack::CpuClipStackState *> &,__int64>(
         a4,
         0xCCCCCCCCCCCCCCCDuLL * ((a3 - a2) >> 3));
  for ( i = a2 + 8; ; i += 40LL )
  {
    v10 = (_QWORD *)(i - 8);
    if ( i - 8 == a3 )
      break;
    *(_QWORD *)v8 = *v10;
    *(_BYTE *)(v8 + 8) = *(_BYTE *)i;
    *v10 = 0LL;
    *(_BYTE *)i = 0;
    *(_QWORD *)(v8 + 16) = *(_QWORD *)(i + 8);
    *(_QWORD *)(v8 + 24) = *(_QWORD *)(i + 16);
    *(_DWORD *)(v8 + 32) = *(_DWORD *)(i + 24);
    *(_BYTE *)(v8 + 36) = *(_BYTE *)(i + 28);
    v8 += 40LL;
  }
  result = a1;
  a4[2] = 0xCCCCCCCCCCCCCCCDuLL * ((v8 - *a4) >> 3);
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
