/*
 * XREFs of PopAdaptiveGetSessionStateUnsafe @ 0x1409A1AAC
 * Callers:
 *     PopSessionConnectedV2 @ 0x14075E7E4 (PopSessionConnectedV2.c)
 *     PopAdaptiveGetSessionState @ 0x1409A18F4 (PopAdaptiveGetSessionState.c)
 *     PopSessionConnected @ 0x140AC8C44 (PopSessionConnected.c)
 * Callees:
 *     PopDiagTraceAdaptiveSessionState @ 0x1409A1B58 (PopDiagTraceAdaptiveSessionState.c)
 *     PopAdaptiveGetConsoleSessionState @ 0x1409A2014 (PopAdaptiveGetConsoleSessionState.c)
 *     PopAdaptiveGetRemoteSessionState @ 0x1409A39B8 (PopAdaptiveGetRemoteSessionState.c)
 */

__int64 __fastcall PopAdaptiveGetSessionStateUnsafe(int a1, __int64 a2, __int64 a3)
{
  int v7; // [rsp+60h] [rbp+8h] BYREF
  int v8; // [rsp+68h] [rbp+10h] BYREF

  v7 = 0;
  v8 = 0;
  if ( dword_140F07678 != a1 || a1 == -1 )
    PopAdaptiveGetRemoteSessionState(a1, a2, a3, (unsigned int)&v8, (__int64)&v7);
  else
    PopAdaptiveGetConsoleSessionState(a1, a2, a3, (unsigned int)&v8, (__int64)&v7);
  return PopDiagTraceAdaptiveSessionState(
           a1,
           *(_QWORD *)a2,
           *(_QWORD *)(a2 + 16),
           *(_DWORD *)(a2 + 24),
           *(_DWORD *)a3,
           *(_DWORD *)(a3 + 8),
           *(_BYTE *)(a3 + 12),
           v8,
           *(_DWORD *)(a3 + 4),
           v7);
}
