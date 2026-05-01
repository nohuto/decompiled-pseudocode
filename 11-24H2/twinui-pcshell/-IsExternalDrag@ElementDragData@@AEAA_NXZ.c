/*
 * XREFs of ?IsExternalDrag@ElementDragData@@AEAA_NXZ @ 0x1804DD0FC
 * Callers:
 *     ?DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804DCABC (-DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x180231DA0 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?ApplyMargins@RelativeMargins@@QEAA?AUCRect@Geometry@@AEBU23@@Z @ 0x1804CA32C (-ApplyMargins@RelativeMargins@@QEAA-AUCRect@Geometry@@AEBU23@@Z.c)
 *     ?GetExternalDragProgress@ElementDragData@@AEAAMXZ @ 0x1804DD07C (-GetExternalDragProgress@ElementDragData@@AEAAMXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall ElementDragData::IsExternalDrag(ElementDragData *this)
{
  __int64 v2; // rcx
  _DWORD *v3; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-38h] BYREF
  struct tagPOINT v6; // [rsp+30h] [rbp-28h] BYREF

  if ( ElementDragData::GetExternalDragProgress(this) > 1.0 )
    return 1;
  v3 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, struct tagPOINT *))(**(_QWORD **)(v2 + 40) + 88LL))(
                   *(_QWORD *)(v2 + 40),
                   &v6);
  RelativeMargins::ApplyMargins((double *)this + 16, (__int64)v5, v3);
  v6 = *(struct tagPOINT *)((char *)this + 92);
  return !Geometry::CRect::Contains((Geometry::CRect *)v5, &v6);
}
