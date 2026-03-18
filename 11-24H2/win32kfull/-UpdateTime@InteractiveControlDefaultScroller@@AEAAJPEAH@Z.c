/*
 * XREFs of ?UpdateTime@InteractiveControlDefaultScroller@@AEAAJPEAH@Z @ 0x14012AB84
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x14012A9E8 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTE.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14012B408 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 */

__int64 __fastcall InteractiveControlDefaultScroller::UpdateTime(LARGE_INTEGER *this, int *a2)
{
  LARGE_INTEGER PerformanceCounter; // rax
  LONGLONG v5; // r9
  unsigned __int64 v6; // rbx
  BOOL v7; // edx
  __int64 result; // rax

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v5 = PerformanceCounter.QuadPart - this[1].QuadPart;
  this[1] = PerformanceCounter;
  v6 = (unsigned __int64)(1000 * v5) / this->QuadPart;
  v7 = v6 > *((int *)InteractiveControlManager::Instance() + 49);
  result = 0LL;
  *a2 = v7;
  return result;
}
