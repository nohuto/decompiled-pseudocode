/*
 * XREFs of ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1402711D0
 * Callers:
 *     NtUserGetCursorFrameInfo @ 0x140076D90 (NtUserGetCursorFrameInfo.c)
 *     NtUserDrawIconEx @ 0x140076F70 (NtUserDrawIconEx.c)
 *     _DrawIconEx @ 0x140078A10 (_DrawIconEx.c)
 *     NtUserGetIconSize @ 0x1400798F0 (NtUserGetIconSize.c)
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x140131D7C (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct tagCURSOR *__fastcall GetAnimatedCursorFrame(struct tagACON *const a1, int a2)
{
  int v2; // r8d
  __int64 v4; // r9

  if ( (*((_DWORD *)a1 + 20) & 0x40) != 0 )
  {
    v2 = 52;
LABEL_3:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v2);
    return 0LL;
  }
  if ( !*((_QWORD *)a1 + 13) )
    return 0LL;
  if ( !*((_QWORD *)a1 + 12) )
    return 0LL;
  if ( a2 < 0 )
    return 0LL;
  if ( a2 >= *((_DWORD *)a1 + 23) )
    return 0LL;
  _mm_lfence();
  v4 = *(int *)(*((_QWORD *)a1 + 13) + 4LL * a2);
  if ( (int)v4 < 0 || (int)v4 >= *((_DWORD *)a1 + 22) )
    return 0LL;
  _mm_lfence();
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 8 * v4) + 80LL) & 8) != 0 )
  {
    v2 = 76;
    goto LABEL_3;
  }
  return *(struct tagCURSOR **)(*((_QWORD *)a1 + 12) + 8 * v4);
}
