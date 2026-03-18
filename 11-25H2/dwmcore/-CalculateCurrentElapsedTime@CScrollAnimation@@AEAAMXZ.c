/*
 * XREFs of ?CalculateCurrentElapsedTime@CScrollAnimation@@AEAAMXZ @ 0x1800F4210
 * Callers:
 *     ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1800F2D70 (-CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x1800320D0 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 */

float __fastcall CScrollAnimation::CalculateCurrentElapsedTime(CScrollAnimation *this)
{
  LONGLONG v1; // rbx
  unsigned __int64 v2; // rax

  v1 = *((_QWORD *)this + 43) - Time::s_luBegin.QuadPart;
  v2 = CComposition::GetFrameTargetTime(*((CComposition **)this + 3)) - Time::s_luBegin.QuadPart - v1;
  if ( v2 == 0x7FFFFFFFFFFFFFFFLL )
    return FLOAT_3_4028235e38;
  else
    return (float)(int)((__int64)(1000000 * v2) / Time::s_luFreq.QuadPart) / 1000000.0;
}
