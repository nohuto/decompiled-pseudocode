/*
 * XREFs of ?GetOtherColumns@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805AB120
 * Callers:
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1802338D0 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 * Callees:
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x180050D8C (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     Mirror_IsThreadRTL @ 0x180097AB4 (Mirror_IsThreadRTL.c)
 *     ??$_Emplace_reallocate@URect@Foundation@Windows@@@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@AEAAPEAURect@Foundation@Windows@@QEAU234@$$QEAU234@@Z @ 0x180469BDC (--$_Emplace_reallocate@URect@Foundation@Windows@@@-$vector@URect@Foundation@Windows@@V-$allocato.c)
 *     ?GetOtherRects@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805AB614 (-GetOtherRects@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAXPEAUIApplicationView@@PEAUIIm.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SnapLayoutHelpers::GetOtherColumns(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rdi
  _OWORD *v8; // r8
  _BYTE *v9; // rdx
  const char *v10; // r9
  __int64 result; // rax
  void **v12; // [rsp+30h] [rbp-28h] BYREF
  __int128 v13; // [rsp+38h] [rbp-20h] BYREF
  __int64 v14; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  try
  {
    v12 = &SnapLayoutHelpers::ColumnSmartFillSolver::`vftable';
    if ( (unsigned int)Mirror_IsThreadRTL() )
    {
      v13 = 0LL;
      v14 = 0LL;
      SnapLayoutHelpers::SpanningSmartFillSolverBase::GetOtherRects(&v12, a1, a2);
      for ( i = *((_QWORD *)&v13 + 1); i != (_QWORD)v13; i -= 16LL )
      {
        v8 = (_OWORD *)(i - 16);
        v9 = *(_BYTE **)(a4 + 8);
        if ( v9 == *(_BYTE **)(a4 + 16) )
        {
          std::vector<Windows::Foundation::Rect>::_Emplace_reallocate<Windows::Foundation::Rect>(
            (const void **)a4,
            v9,
            v8);
        }
        else
        {
          *(_OWORD *)v9 = *v8;
          *(_QWORD *)(a4 + 8) += 16LL;
        }
      }
      std::vector<Geometry::CRect>::_Tidy((__int64)&v13);
    }
    else
    {
      SnapLayoutHelpers::SpanningSmartFillSolverBase::GetOtherRects(&v12, a1, a2);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA10,
                           (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
                           v10);
  }
  return result;
}
