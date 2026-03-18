/*
 * XREFs of ?CalculateAnimationElapsedTimeInSeconds@CNaturalAnimation@@AEAAMXZ @ 0x1801CCA74
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801CC5C0 (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x1800320D0 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 */

float __fastcall CNaturalAnimation::CalculateAnimationElapsedTimeInSeconds(CComposition **this)
{
  unsigned __int64 v1; // rcx

  v1 = CComposition::GetFrameTargetTime(this[3])
     - 1000 * Time::s_luFreq.QuadPart * *((int *)this + 100) / 1000000
     - (_QWORD)this[48]
     - Time::s_luBegin.QuadPart;
  if ( v1 == 0x7FFFFFFFFFFFFFFFLL )
    return FLOAT_3_4028235e38;
  else
    return (float)(int)((__int64)(1000000 * v1) / Time::s_luFreq.QuadPart) / 1000000.0;
}
