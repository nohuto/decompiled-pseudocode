/*
 * XREFs of EtwGetTraceEnableLevel @ 0x1800EC880
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetLastWin32Error @ 0x180048FD0 (RtlSetLastWin32Error.c)
 *     EtwpGetMaxLogger @ 0x1800EC918 (EtwpGetMaxLogger.c)
 */

char __fastcall EtwGetTraceEnableLevel(__int64 a1)
{
  char v3; // [rsp+32h] [rbp+Ah]

  v3 = BYTE2(a1);
  if ( ((unsigned __int16)a1 < (unsigned int)EtwpGetMaxLogger() || (_WORD)a1 == 0xFFFF) && a1 )
    return v3;
  RtlSetLastWin32Error(6);
  return 0;
}
