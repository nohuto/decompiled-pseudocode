/*
 * XREFs of GreSetLCDOrientation @ 0x1402197F0
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 *     xxxUpdatePerUserSystemParameters @ 0x14020C860 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreSetLCDOrientation(int a1, __int64 a2)
{
  char v2; // bl
  __int64 SessionState; // rax
  void *v4; // rcx
  __int64 result; // rax

  v2 = a1;
  SessionState = W32GetSessionState(a1, a2);
  v4 = &unk_140357250;
  if ( (v2 & 1) == 0 )
    v4 = &unk_140357080;
  result = *(_QWORD *)(SessionState + 96);
  *(_QWORD *)(result + 13464) = v4;
  return result;
}
