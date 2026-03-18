/*
 * XREFs of ReadCursorSuppressionConfig @ 0x1C001DB50
 * Callers:
 *     TransitionCursorSuppressionState @ 0x1C001DAA0 (TransitionCursorSuppressionState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ReadCursorSuppressionConfig(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v3 = 0;
  if ( *(_DWORD *)SGDGetUserSessionState(a1) != gServiceSessionId && !gProtocolType )
    FastGetProfileDword(0LL, 49LL, L"EnableCursorSuppression", 0LL, &v3);
  LOBYTE(v1) = v3 != 0;
  return v1;
}
