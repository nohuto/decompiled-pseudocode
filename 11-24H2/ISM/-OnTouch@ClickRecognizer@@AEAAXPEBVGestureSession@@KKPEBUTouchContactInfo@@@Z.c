/*
 * XREFs of ?OnTouch@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z @ 0x1801B4AC4
 * Callers:
 *     ?Add@ClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801B4660 (-Add@ClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     ?CancelTapAndHold@ClickRecognizer@@AEAAXXZ @ 0x1801B4784 (-CancelTapAndHold@ClickRecognizer@@AEAAXXZ.c)
 *     ?ChangeTapAndHoldState@ClickRecognizer@@AEAAJPEAK@Z @ 0x1801B47C8 (-ChangeTapAndHoldState@ClickRecognizer@@AEAAJPEAK@Z.c)
 *     ?PointsWithinThreshold@ClickRecognizer@@AEAA_NPEBUtagPOINT@@0K@Z @ 0x1801B4C3C (-PointsWithinThreshold@ClickRecognizer@@AEAA_NPEBUtagPOINT@@0K@Z.c)
 */

void __fastcall ClickRecognizer::OnTouch(
        ClickRecognizer *this,
        const struct GestureSession *a2,
        unsigned int a3,
        int a4,
        const struct TouchContactInfo *a5)
{
  __int16 *v6; // rbx
  __int16 v7; // di
  unsigned int v8; // r9d
  ClickRecognizer *v9; // r11
  __int64 v10; // r11
  int v11; // ecx
  struct tagPOINT v12; // [rsp+30h] [rbp+8h] BYREF
  ClickRecognizer *v13; // [rsp+40h] [rbp+18h] BYREF

  *((_DWORD *)this + 32) = a3;
  v6 = (__int16 *)((char *)this + 16);
  if ( a4 != 1 || (v7 = *v6, (*v6 & 2) != 0) )
  {
    ClickRecognizer::CancelTapAndHold(this);
    *v6 |= 2u;
  }
  else if ( (unsigned int)(((int)(*((_DWORD *)this + 5) << 28) >> 28) - 1) <= 3 )
  {
    v8 = *((unsigned __int16 *)this + 18);
    v12 = (struct tagPOINT)*((_QWORD *)a2 + 149);
    if ( ClickRecognizer::PointsWithinThreshold(this, &v12, (const struct tagPOINT *)((char *)a5 + 4), v8) )
    {
      if ( a3 >= *((_DWORD *)v9 + 33) )
      {
        LODWORD(v13) = 0;
        *v6 = v7 & 0xFDFF;
        if ( (int)ClickRecognizer::ChangeTapAndHoldState(v9, (unsigned int *)&v13) >= 0 )
        {
          v11 = (int)v13;
          if ( (_DWORD)v13 )
          {
            *v6 |= 0x200u;
            *(_DWORD *)(v10 + 132) += v11;
          }
        }
      }
    }
    else
    {
      ClickRecognizer::CancelTapAndHold(v9);
    }
  }
}
