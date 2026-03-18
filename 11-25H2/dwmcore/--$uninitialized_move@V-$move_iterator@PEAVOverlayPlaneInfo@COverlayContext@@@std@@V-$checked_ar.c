/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x1802555C4
 * Callers:
 *     ?reserve_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVOverlayPlaneInfo@COverlayContext@@_K0@Z @ 0x18002F1D0 (-reserve_region@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneI.c)
 * Callees:
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z @ 0x18002EFD0 (--0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@_J@Z @ 0x1802142C0 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<COverlayContext::OverlayPlaneInfo *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v4 = a2;
  v8 = std::_Get_unwrapped_n<stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo *> &,__int64>(
         a4,
         0x8F5C28F5C28F5C29uLL * ((a3 - a2) >> 4));
  while ( v4 != a3 )
  {
    COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(v8, v4);
    v8 = v10 + v9;
    v4 += v10;
  }
  result = a1;
  a4[2] = 0x8F5C28F5C28F5C29uLL * ((v8 - *a4) >> 4);
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
