/*
 * XREFs of ?PassedCurtainMoveThresholds@CPTPEngine@@AEAAH_K0PEAUCContactState@@@Z @ 0x14014CD6C
 * Callers:
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@@Z @ 0x140190C3C (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CPTPEngine::PassedCurtainMoveThresholds(
        CPTPEngine *this,
        __int64 a2,
        __int64 a3,
        struct CContactState *a4)
{
  return a3 - a2 <= *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 799) / 0x3E8
      && (int)((HIDWORD(*(_QWORD *)((char *)this + 2844)) - HIDWORD(*((_QWORD *)a4 + 1)))
             * (HIDWORD(*(_QWORD *)((char *)this + 2844)) - HIDWORD(*((_QWORD *)a4 + 1)))
             + (*(_QWORD *)((char *)this + 2844) - *((_QWORD *)a4 + 1))
             * (*(_QWORD *)((char *)this + 2844) - *((_QWORD *)a4 + 1))) > (unsigned __int64)*((unsigned int *)this + 800);
}
