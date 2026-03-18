/*
 * XREFs of ?xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1400D32E0
 * Callers:
 *     NtUserDownlevelTouchpad @ 0x140121600 (NtUserDownlevelTouchpad.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1400D33A8 (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 *     ?UnreferenceFrameExternal@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1400D3710 (-UnreferenceFrameExternal@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?ReferenceFrameFromId@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@G@Z @ 0x1400D3D08 (-ReferenceFrameFromId@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@G@Z.c)
 */

__int64 __fastcall CPTPProcessor::xxxDownlevelInput(__int64 a1, const struct tagPTP_DOWNLEVELED_INPUT *a2)
{
  unsigned __int16 v3; // si
  struct tagTHREADINFO *v4; // rbx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  const struct CPointerInputFrame *v7; // rax
  const struct CPointerInputFrame *v8; // rdi
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rax

  v3 = a1;
  v4 = PtiCurrent(a1);
  UserSessionState = W32GetUserSessionState(v5);
  v7 = CTouchProcessor::ReferenceFrameFromId(*(CTouchProcessor **)(UserSessionState + 3264), v3);
  v8 = v7;
  if ( v7 )
  {
    v9 = *((unsigned int *)v7 + 57);
    if ( (v9 & 0x80u) == 0LL )
    {
      v10 = -1073741811;
      goto LABEL_4;
    }
    *((_WORD *)v4 + 624) = v3;
    *((_QWORD *)v4 + 157) = *((_QWORD *)v7 + 8);
  }
  else if ( v3 != *((_WORD *)v4 + 624) )
  {
    return (unsigned int)-1073741790;
  }
  v10 = CPTPProcessor::xxxDownlevelInput(v7, a2);
  if ( v8 )
  {
LABEL_4:
    v11 = W32GetUserSessionState(v9);
    CTouchProcessor::UnreferenceFrameExternal(*(CTouchProcessor **)(v11 + 3264), v8);
  }
  return v10;
}
