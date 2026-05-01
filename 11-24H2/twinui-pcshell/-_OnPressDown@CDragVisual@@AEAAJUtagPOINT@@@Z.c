/*
 * XREFs of ?_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z @ 0x18054521C
 * Callers:
 *     ?_OnLButtonDown@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x180544A9C (-_OnLButtonDown@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_OnMouseMove@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x180544D10 (-_OnMouseMove@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_OnPointerDown@CDragVisual@@AEAAXIUtagPOINT@@@Z @ 0x180544F50 (-_OnPointerDown@CDragVisual@@AEAAXIUtagPOINT@@@Z.c)
 *     ?_OnPointerUpdate@CDragVisual@@AEAAXIUtagPOINT@@@Z @ 0x180545080 (-_OnPointerUpdate@CDragVisual@@AEAAXIUtagPOINT@@@Z.c)
 * Callees:
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x180231DA0 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ?ClientToScreen@CPoint@Geometry@@SA?AU12@PEAUHWND__@@AEBUtagPOINT@@@Z @ 0x180541FD0 (-ClientToScreen@CPoint@Geometry@@SA-AU12@PEAUHWND__@@AEBUtagPOINT@@@Z.c)
 *     ?_CancelPlacement@CDragVisual@@AEAAXXZ @ 0x180543FB8 (-_CancelPlacement@CDragVisual@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDragVisual::_OnPressDown(CDragVisual *this, struct tagPOINT a2)
{
  HWND v2; // rdx
  unsigned int v3; // edi
  __int64 v5; // r9
  struct tagPOINT v7; // [rsp+40h] [rbp+8h] BYREF
  struct tagPOINT v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v2 = (HWND)*((_QWORD *)this + 19);
  v3 = 0;
  if ( *((_BYTE *)this + 326) )
  {
    Geometry::CPoint::ClientToScreen(&v7, v2, (LONG *)&v8);
    if ( !Geometry::CRect::Contains((CDragVisual *)((char *)this + 240), &v7) )
      CDragVisual::_CancelPlacement(this);
  }
  else
  {
    Geometry::CPoint::ClientToScreen(&v7, v2, (LONG *)&v8);
    LOBYTE(v5) = 1;
    return (*(unsigned int (__fastcall **)(_QWORD, __int64, struct tagPOINT *, __int64))(**((_QWORD **)this + 17) + 64LL))(
             *((_QWORD *)this + 17),
             2LL,
             &v7,
             v5);
  }
  return v3;
}
