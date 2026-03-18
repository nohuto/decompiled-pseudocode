/*
 * XREFs of SfmSignalTokenEvent @ 0x140108F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SfmSignalTokenEvent(__int64 a1)
{
  __int64 SessionState; // rax
  LONG PreviousState; // [rsp+30h] [rbp+8h] BYREF

  PreviousState = 0;
  SessionState = W32GetSessionState(a1);
  ZwSetEvent(*(HANDLE *)(*(_QWORD *)(*(_QWORD *)(SessionState + 88) + 4232LL) + 24LL), &PreviousState);
  return (unsigned int)PreviousState;
}
