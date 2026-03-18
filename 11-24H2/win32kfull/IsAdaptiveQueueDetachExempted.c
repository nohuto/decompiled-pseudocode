/*
 * XREFs of IsAdaptiveQueueDetachExempted @ 0x1401565F8
 * Callers:
 *     PostInputMessage @ 0x14012ED84 (PostInputMessage.c)
 *     EditionMouseMoveShellResilience @ 0x1401561C0 (EditionMouseMoveShellResilience.c)
 *     IsShellFrameHangResilient @ 0x140156564 (IsShellFrameHangResilient.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14024AF80 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     IsIAMThread @ 0x140156680 (IsIAMThread.c)
 *     IsDebuggerAttached @ 0x1401566A4 (IsDebuggerAttached.c)
 */

__int64 __fastcall IsAdaptiveQueueDetachExempted(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v6; // rcx
  __int64 v8; // rcx

  v3 = *(_QWORD *)(a1 + 1584);
  v4 = 0;
  if ( !v3 )
    return 1LL;
  v6 = *(_QWORD *)(v3 + 112);
  if ( v6 )
  {
    if ( (unsigned __int8)IsIAMThread(*(_QWORD *)(v6 + 16), a2, a3) )
      return 1LL;
  }
  if ( (unsigned int)IsDebuggerAttached(*(_QWORD *)(a1 + 464)) )
    return 1LL;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 1584) + 112LL);
  if ( !v8 )
    return 0LL;
  LOBYTE(v4) = (unsigned int)IsDebuggerAttached(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 464LL)) != 0;
  return v4;
}
