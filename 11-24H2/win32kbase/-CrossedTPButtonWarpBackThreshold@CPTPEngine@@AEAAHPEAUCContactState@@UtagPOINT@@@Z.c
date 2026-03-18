/*
 * XREFs of ?CrossedTPButtonWarpBackThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z @ 0x140221850
 * Callers:
 *     ?DoTPButtonWarpBack@CPTPEngine@@AEAA?AUtagPOINT@@PEAUPTPInput@@@Z @ 0x140155D90 (-DoTPButtonWarpBack@CPTPEngine@@AEAA-AUtagPOINT@@PEAUPTPInput@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CPTPEngine::CrossedTPButtonWarpBackThreshold(
        CPTPEngine *this,
        struct CContactState *a2,
        struct tagPOINT a3)
{
  return (*((_DWORD *)this + 821) & 0x200) == 0
      || *((unsigned int *)this + 779)
       * (__int64)(int)((HIDWORD(*((_QWORD *)a2 + 6)) - a3.y) * (HIDWORD(*((_QWORD *)a2 + 6)) - a3.y))
       + (unsigned __int64)*((unsigned int *)this + 780)
       * (int)((*((_QWORD *)a2 + 6) - a3.x) * (*((_QWORD *)a2 + 6) - a3.x)) >= *((unsigned int *)this + 780)
                                                                             * (unsigned __int64)*((unsigned int *)this
                                                                                                 + 779);
}
