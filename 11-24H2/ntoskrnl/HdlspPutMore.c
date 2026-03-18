/*
 * XREFs of HdlspPutMore @ 0x140BAE214
 * Callers:
 *     HdlspProcessDumpCommand @ 0x140BADFDC (HdlspProcessDumpCommand.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     HdlspGetLine @ 0x140BADAA4 (HdlspGetLine.c)
 *     HdlspPutString @ 0x140BAE2F0 (HdlspPutString.c)
 */

char __fastcall HdlspPutMore(bool *a1)
{
  int v2; // ebx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // r9
  char result; // al
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v9[16]; // [rsp+28h] [rbp-20h] BYREF

  Interval.QuadPart = -100000LL;
  v2 = 0;
  HdlspPutString("----Press <Enter> for more----");
  if ( HdlspGetLine(v9, 0xAuLL, v3, v4) )
  {
LABEL_7:
    *a1 = v9[0] == 3;
    do
      result = HdlspGetLine(v9, 0xAuLL, v5, v6);
    while ( result );
  }
  else
  {
    while ( 1 )
    {
      if ( (HeadlessGlobals[6] & 2) == 0 )
      {
        KeDelayExecutionThread(0, 0, &Interval);
        if ( (unsigned int)++v2 > 0x1770 )
          break;
      }
      if ( HdlspGetLine(v9, 0xAuLL, v5, v6) )
        goto LABEL_7;
    }
    result = HdlspPutString("\r\n No input was detected: auto-scrolling was engaged...\r\n");
    *a1 = 0;
  }
  return result;
}
