/*
 * XREFs of ?OnTouchDown@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z @ 0x1801B4BA0
 * Callers:
 *     ?Add@ClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801B4660 (-Add@ClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     ?PointsWithinThreshold@ClickRecognizer@@AEAA_NPEBUtagPOINT@@0K@Z @ 0x1801B4C3C (-PointsWithinThreshold@ClickRecognizer@@AEAA_NPEBUtagPOINT@@0K@Z.c)
 */

void __fastcall ClickRecognizer::OnTouchDown(
        ClickRecognizer *this,
        const struct GestureSession *a2,
        int a3,
        __int64 a4,
        const struct TouchContactInfo *a5)
{
  int v5; // r9d
  __int16 v6; // bx
  _QWORD *v7; // r8
  __int64 v8; // r11

  v5 = *((unsigned __int16 *)this + 14);
  v6 = *((_WORD *)this + 8) & 0xFFFD;
  *((_WORD *)this + 8) = *((_WORD *)this + 8) & 0xFDFD | 0x200;
  *((_DWORD *)this + 33) = v5 + a3;
  *((_DWORD *)this + 5) = *((_DWORD *)this + 5) & 0xFFFFFFF0 | 1;
  if ( (*((_BYTE *)a2 + 12) & 2) != 0
    && (v6 & 0x80u) != 0
    && a3 - *((_DWORD *)this + 32) <= (unsigned int)*((unsigned __int16 *)this + 13)
    && ClickRecognizer::PointsWithinThreshold(
         (ClickRecognizer *)0x200,
         (const struct tagPOINT *)this + 15,
         (const struct tagPOINT *)((char *)a5 + 4),
         *((unsigned __int16 *)this + 12)) )
  {
    *(_WORD *)(v8 + 16) = v6 | 0x209;
    *(_QWORD *)(v8 + 56) = *v7;
  }
}
