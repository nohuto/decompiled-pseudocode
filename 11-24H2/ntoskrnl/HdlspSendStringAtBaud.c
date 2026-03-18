/*
 * XREFs of HdlspSendStringAtBaud @ 0x140BAE5CC
 * Callers:
 *     HdlspBugCheckProcessing @ 0x140BAD1F8 (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x140BAD320 (HdlspDispatch.c)
 *     HdlspEnableTerminal @ 0x140BAD9D4 (HdlspEnableTerminal.c)
 *     HdlspGetLine @ 0x140BADAA4 (HdlspGetLine.c)
 *     HdlspPutString @ 0x140BAE2F0 (HdlspPutString.c)
 *     HdlspPutWideString @ 0x140BAE468 (HdlspPutWideString.c)
 *     HdlspSendBlueScreenInfo @ 0x140BAE528 (HdlspSendBlueScreenInfo.c)
 * Callees:
 *     InbvPortPutByte @ 0x1406A15D8 (InbvPortPutByte.c)
 */

char __fastcall HdlspSendStringAtBaud(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char result; // al
  _BYTE *v5; // rbx

  result = *a1;
  v5 = a1;
  while ( result )
  {
    LOBYTE(a2) = result;
    InbvPortPutByte(*((_DWORD *)HeadlessGlobals + 14), a2, a3, a4);
    result = *++v5;
  }
  return result;
}
