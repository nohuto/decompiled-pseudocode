/*
 * XREFs of ?GetDefaultSnapRegionExtents@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAA?AU?$pair@JJ@std@@JIKAEBUCRect@Geometry@@@Z @ 0x1805AAA40
 * Callers:
 *     ?GetDefaultRect@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAA?AUtagRECT@@JIKAEBUCRect@Geometry@@@Z @ 0x1805AA9A4 (-GetDefaultRect@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAA-AUtagRECT@@JIKAEBUCRect@Geom.c)
 *     ?GetSmartFillRect@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAJJ_NPEAUIImmersiveMonitor@@KKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@3@Z @ 0x1805ABADC (-GetSmartFillRect@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAJJ_NPEAUIImmersiveMonitor@@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned int *__fastcall SnapLayoutHelpers::SpanningSmartFillSolverBase::GetDefaultSnapRegionExtents(
        void (__fastcall ***a1)(_QWORD, unsigned int *, __int64),
        unsigned int *a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v9; // ebx
  unsigned int v10; // ecx
  unsigned int v11; // eax
  int v12; // edx
  unsigned int v13; // ecx
  signed int v14; // r8d
  unsigned int *result; // rax
  unsigned int v16; // [rsp+30h] [rbp+8h] BYREF
  int v17; // [rsp+34h] [rbp+Ch]

  (**a1)(a1, &v16, a6);
  v9 = v17 - v16;
  v10 = 3 - ((unsigned int)MulDiv(v17 - v16, 96, a4) < 0x738);
  v12 = v9 % v10;
  v11 = v9 / v10;
  v13 = v16;
  v14 = v11 + v12 + v16;
  if ( a3 > v14 )
  {
    v13 = v11 * ((a3 - v14) / v11) + v14;
    v14 = v13 + v11;
  }
  result = a2;
  *a2 = v13;
  a2[1] = v14;
  return result;
}
