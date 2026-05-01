/*
 * XREFs of ?GetDefaultRect@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAA?AUtagRECT@@JIKAEBUCRect@Geometry@@@Z @ 0x1805AA9A4
 * Callers:
 *     ?GetRectForColumn@SnapLayoutHelpers@@YA?AUtagRECT@@JAEBUCRect@Geometry@@IK@Z @ 0x1805AB95C (-GetRectForColumn@SnapLayoutHelpers@@YA-AUtagRECT@@JAEBUCRect@Geometry@@IK@Z.c)
 *     ?GetRectForRow@SnapLayoutHelpers@@YA?AUtagRECT@@JAEBUCRect@Geometry@@IK@Z @ 0x1805ABA7C (-GetRectForRow@SnapLayoutHelpers@@YA-AUtagRECT@@JAEBUCRect@Geometry@@IK@Z.c)
 * Callees:
 *     ?GetDefaultSnapRegionExtents@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAA?AU?$pair@JJ@std@@JIKAEBUCRect@Geometry@@@Z @ 0x1805AAA40 (-GetDefaultSnapRegionExtents@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAA-AU-$pair@JJ@std.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct tagRECT *__fastcall SnapLayoutHelpers::SpanningSmartFillSolverBase::GetDefaultRect(
        SnapLayoutHelpers::SpanningSmartFillSolverBase *this,
        struct tagRECT *__return_ptr retstr,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        const struct Geometry::CRect *a6)
{
  unsigned int v7; // rbx^4
  int v12; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+64h] [rbp+Ch]
  unsigned int v14; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v15; // [rsp+6Ch] [rbp+14h]

  v7 = HIDWORD(a6);
  (*(void (__fastcall **)(SnapLayoutHelpers::SpanningSmartFillSolverBase *, int *, const struct Geometry::CRect *))(*(_QWORD *)this + 8LL))(
    this,
    &v12,
    a6);
  SnapLayoutHelpers::SpanningSmartFillSolverBase::GetDefaultSnapRegionExtents(this, &v14, a3, a4);
  (*(void (__fastcall **)(SnapLayoutHelpers::SpanningSmartFillSolverBase *, struct tagRECT *, _QWORD, _QWORD, int, unsigned __int64))(*(_QWORD *)this + 16LL))(
    this,
    retstr,
    v14,
    v15,
    v12,
    __PAIR64__(v7, v13));
  return retstr;
}
