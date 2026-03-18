/*
 * XREFs of ?CreateGestureCache@CPTPProcessor@@AEAAPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x1C01DEA08
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01DF570 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     EtwTraceCopyPointerInputFrameStart @ 0x1C0138DB0 (EtwTraceCopyPointerInputFrameStart.c)
 *     EtwTraceCopyPointerInputFrameStop @ 0x1C0138DE0 (EtwTraceCopyPointerInputFrameStop.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C01BF35C (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     ?CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x1C01DE900 (-CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N.c)
 */

struct CPointerInputFrame *__fastcall CPTPProcessor::CreateGestureCache(
        CPTPProcessor *this,
        __int64 a2,
        const struct PTPEnginePointerNode *a3,
        unsigned __int8 a4)
{
  int v4; // edi
  struct CPointerInputFrame *v7; // rbx
  __int64 v8; // rcx
  CPTPProcessor *v9; // rcx
  __int64 v10; // r8
  struct CPointerInputFrame *result; // rax

  v4 = a4;
  EtwTraceCopyPointerInputFrameStart((__int64)this);
  v7 = CTouchProcessor::CopyPTPPointerInputFrame(
         (struct _KTHREAD **)this,
         *((struct CPointerInputFrame **)this + 68),
         *((void **)this + 67));
  EtwTraceCopyPointerInputFrameStop(v8);
  if ( !v7 )
    return 0LL;
  CPTPProcessor::CopyPointersIntoFrame(v9, v7, v10, a3, 1);
  result = v7;
  *((_DWORD *)v7 + 57) = *((_DWORD *)v7 + 57) & 0xFFFFFEFF | (v4 << 8);
  return result;
}
