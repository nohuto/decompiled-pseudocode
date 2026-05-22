/*
 * XREFs of ?Add@ClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801B4660
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelTapAndHold@ClickRecognizer@@AEAAXXZ @ 0x1801B4784 (-CancelTapAndHold@ClickRecognizer@@AEAAXXZ.c)
 *     ?OnTouch@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z @ 0x1801B4AC4 (-OnTouch@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z.c)
 *     ?OnTouchDown@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z @ 0x1801B4BA0 (-OnTouchDown@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z.c)
 *     ?PointsWithinThreshold@ClickRecognizer@@AEAA_NPEBUtagPOINT@@0K@Z @ 0x1801B4C3C (-PointsWithinThreshold@ClickRecognizer@@AEAA_NPEBUtagPOINT@@0K@Z.c)
 */

__int64 __fastcall ClickRecognizer::Add(ClickRecognizer *this, struct tagPOINT *a2, __int16 a3, unsigned int a4)
{
  char v5; // bp
  unsigned int y; // esi
  char *v9; // r14
  ClickRecognizer *v10; // rcx
  __int16 v11; // r11
  __int16 v12; // r11
  struct tagPOINT v14; // [rsp+70h] [rbp+18h] BYREF

  v5 = a3;
  if ( (a3 & 0x100) == 0 )
  {
    y = 1;
    if ( (a2[1].y & 0x7880) != 0 )
      y = a2[93].y;
    v9 = (char *)&a2[144] + (-(__int64)((a2[1].y & 0x7880) != 0) & 0xFFFFFFFFFFFFFE70uLL);
    *((_QWORD *)this + 14) = *(_QWORD *)(v9 + 4);
    if ( (a3 & 1) != 0 )
      ClickRecognizer::OnTouchDown(this, (const struct GestureSession *)a2, a4, a4, (const struct TouchContactInfo *)v9);
    ClickRecognizer::OnTouch(this, (const struct GestureSession *)a2, a4, y, (const struct TouchContactInfo *)v9);
    if ( (v5 & 4) != 0 )
    {
      v11 = *((_WORD *)this + 8);
      v14 = a2[149];
      if ( (v11 & 2) != 0
        || !ClickRecognizer::PointsWithinThreshold(
              v10,
              &v14,
              (const struct tagPOINT *)(v9 + 4),
              *((unsigned __int16 *)this + 18))
        || (unsigned int)(((int)(*((_DWORD *)this + 5) << 28) >> 28) - 1) > 2
        || (v11 & 1) != 0 )
      {
        v12 = v11 & 0xFF7F;
      }
      else
      {
        *(_QWORD *)((char *)this + 44) = *((_QWORD *)this + 14);
        v12 = v11 | 0x84;
      }
      *((_WORD *)this + 8) = v12;
      *((_QWORD *)this + 15) = *((_QWORD *)this + 14);
      ClickRecognizer::CancelTapAndHold(this);
    }
  }
  return 0LL;
}
