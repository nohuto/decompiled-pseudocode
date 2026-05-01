/*
 * XREFs of ?CalculateSnapRegion@RowSnapLayout@@UEAA?AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnapRegionCalculationMonitorData@@AEBUSnapRegionCalculationArgs@@@Z @ 0x1805B5090
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetRectForRow@SnapLayoutHelpers@@YA?AUtagRECT@@JAEBUCRect@Geometry@@IK@Z @ 0x1805ABA7C (-GetRectForRow@SnapLayoutHelpers@@YA-AUtagRECT@@JAEBUCRect@Geometry@@IK@Z.c)
 *     ?GetSmartFillRect@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAJJ_NPEAUIImmersiveMonitor@@KKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@3@Z @ 0x1805ABADC (-GetSmartFillRect@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAJJ_NPEAUIImmersiveMonitor@@.c)
 */

__int64 __fastcall RowSnapLayout::CalculateSnapRegion(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void **a5)
{
  void **v5; // rsi
  __int64 v6; // rdi
  bool v8; // zf
  struct tagRECT *v9; // rdx
  int SmartFillRect; // eax
  struct tagRECT *RectForRow; // rax
  unsigned __int64 v12; // xmm0_8
  LONG v13; // eax
  LONG v14; // eax
  __int64 result; // rax
  __int64 v16; // [rsp+20h] [rbp-48h]
  int v17; // [rsp+20h] [rbp-48h]
  __int64 v18; // [rsp+28h] [rbp-40h]
  struct tagRECT v19; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v5 = a5;
  v6 = a2 + 4;
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 16) = 0;
  *(_DWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 28) = 0;
  *(_DWORD *)(a2 + 32) = 0;
  *(_BYTE *)a2 = 0;
  v8 = *((_BYTE *)v5 + 36) == 0;
  v9 = (struct tagRECT *)*((unsigned int *)v5 + 5);
  v19 = 0LL;
  if ( v8 )
  {
    RectForRow = SnapLayoutHelpers::GetRectForRow(
                   &v19,
                   v9,
                   (const struct Geometry::CRect *)(a4 + 8),
                   (const struct Geometry::CRect *)*(unsigned int *)(a4 + 40));
    v12 = _mm_srli_si128(*(__m128i *)RectForRow, 8).m128i_u64[0];
    *(_QWORD *)v6 = *(_QWORD *)&RectForRow->left;
    *(_QWORD *)(v6 + 8) = v12;
    v19 = *(struct tagRECT *)v6;
  }
  else
  {
    a5 = &SnapLayoutHelpers::RowSmartFillSolver::`vftable';
    SmartFillRect = SnapLayoutHelpers::SpanningSmartFillSolverBase::GetSmartFillRect(
                      (void (__fastcall ***)(_QWORD, unsigned int *, __int64))&a5,
                      (signed int)v9,
                      a3,
                      *(void **)a4,
                      v16,
                      v18,
                      a4 + 48,
                      (int *)v6,
                      &v19);
    if ( SmartFillRect < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x11F,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
        (const char *)(unsigned int)SmartFillRect,
        v17);
  }
  v13 = *((_DWORD *)v5 + 11);
  if ( v19.top - 1 >= v13 )
    v13 = v19.top - 1;
  v19.top = v13;
  v14 = *((_DWORD *)v5 + 13);
  if ( v14 >= v19.bottom + 1 )
    v14 = v19.bottom + 1;
  v19.bottom = v14;
  result = a2;
  *(struct tagRECT *)(a2 + 20) = v19;
  return result;
}
