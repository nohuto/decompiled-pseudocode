/*
 * XREFs of ?_OnPointerUpdate@CDragVisual@@AEAAXIUtagPOINT@@@Z @ 0x180545080
 * Callers:
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x180545E58 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x180231DA0 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?_OnContinueDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z @ 0x1805448D4 (-_OnContinueDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z.c)
 *     ?_OnPointerCaptureChanged@CDragVisual@@AEAAXI@Z @ 0x180544F08 (-_OnPointerCaptureChanged@CDragVisual@@AEAAXI@Z.c)
 *     ?_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z @ 0x18054521C (-_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z.c)
 *     ?_OnStartDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z @ 0x1805452A8 (-_OnStartDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z.c)
 */

void __fastcall CDragVisual::_OnPointerUpdate(CDragVisual *this, unsigned int a2, struct tagPOINT a3)
{
  int v3; // eax
  char v7; // r14
  unsigned int v8; // r8d
  unsigned int v9; // r9d
  LONG v10; // ecx
  int started; // eax
  LONG y; // [rsp+24h] [rbp-55h]
  _BYTE v13[40]; // [rsp+30h] [rbp-49h] BYREF
  struct tagPOINT v14; // [rsp+58h] [rbp-21h] BYREF
  struct tagRECT rc; // [rsp+90h] [rbp+17h] BYREF

  v3 = *((_DWORD *)this + 82);
  y = a3.y;
  if ( v3 && v3 == a2 )
  {
    if ( *((_BYTE *)this + 325) )
    {
      v7 = 0;
    }
    else
    {
      v7 = 1;
      memset_0(v13, 0, 0x60uLL);
      if ( (unsigned int)GetPointerInfo(a2, v13)
        && (v14.x != *((_DWORD *)this + 77) || v14.y != *((_DWORD *)this + 78))
        && Geometry::CRect::Contains((CDragVisual *)((char *)this + 240), (const struct tagPOINT *)((char *)this + 300)) )
      {
        *(_QWORD *)&rc.left = __PAIR64__(v8, v9);
        *(_QWORD *)((char *)this + 308) = __PAIR64__(v8, v9);
        v10 = *((_DWORD *)this + 80);
        rc.left = *((_DWORD *)this + 79);
        rc.right = rc.left + 1;
        rc.top = v10;
        rc.bottom = v10 + 1;
        InflateRect(&rc, 270, 270);
        if ( !Geometry::CRect::Contains((Geometry::CRect *)&rc, &v14) )
          *((_BYTE *)this + 325) = 1;
      }
    }
    if ( *((_BYTE *)this + 325) )
    {
      if ( v7 || *((_DWORD *)this + 73) != a3.x || *((_DWORD *)this + 74) != y )
      {
        *(struct tagPOINT *)((char *)this + 292) = a3;
        if ( v7 )
          started = CDragVisual::_OnStartDrag(this, a2, a3);
        else
          started = CDragVisual::_OnContinueDrag(this, a2, a3);
        if ( started < 0 )
          CDragVisual::_OnPointerCaptureChanged(this, a2);
      }
    }
    else
    {
      CDragVisual::_OnPressDown(this, a3);
    }
  }
}
