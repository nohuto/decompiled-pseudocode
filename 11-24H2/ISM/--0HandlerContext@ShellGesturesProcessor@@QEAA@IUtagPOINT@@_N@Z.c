/*
 * XREFs of ??0HandlerContext@ShellGesturesProcessor@@QEAA@IUtagPOINT@@_N@Z @ 0x1801590D4
 * Callers:
 *     ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800886F0 (-OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180089560 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 *     ?StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z @ 0x18015A0D4 (-StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 *     ??0GestureTracker@@QEAA@IUtagPOINT@@_N1@Z @ 0x1801A4294 (--0GestureTracker@@QEAA@IUtagPOINT@@_N1@Z.c)
 */

ShellGesturesProcessor::HandlerContext *__fastcall ShellGesturesProcessor::HandlerContext::HandlerContext(
        ShellGesturesProcessor::HandlerContext *this,
        unsigned int a2,
        struct tagPOINT a3,
        bool a4)
{
  _QWORD *v4; // rdi
  ShellGesturesProcessor::HandlerContext *result; // rax
  GestureTracker *v10; // [rsp+50h] [rbp+8h]

  v4 = (_QWORD *)((char *)this + 8);
  *(_DWORD *)this = a2;
  *((_DWORD *)this + 1) = 1;
  v10 = (GestureTracker *)operator new(0x38uLL);
  *v4 = GestureTracker::GestureTracker(v10, a2, a3, 1, a4);
  result = this;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  return result;
}
