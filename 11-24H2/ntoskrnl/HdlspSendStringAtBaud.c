/*
 * XREFs of HdlspSendStringAtBaud @ 0x140BB05CC
 * Callers:
 *     HdlspBugCheckProcessing @ 0x140BAF1F8 (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x140BAF320 (HdlspDispatch.c)
 *     HdlspEnableTerminal @ 0x140BAF9D4 (HdlspEnableTerminal.c)
 *     HdlspGetLine @ 0x140BAFAA4 (HdlspGetLine.c)
 *     HdlspPutString @ 0x140BB02F0 (HdlspPutString.c)
 *     HdlspPutWideString @ 0x140BB0468 (HdlspPutWideString.c)
 *     HdlspSendBlueScreenInfo @ 0x140BB0528 (HdlspSendBlueScreenInfo.c)
 * Callees:
 *     InbvPortPutByte @ 0x1406A2630 (InbvPortPutByte.c)
 */

char __fastcall HdlspSendStringAtBaud(_BYTE *a1, __int64 a2)
{
  char result; // al
  _BYTE *v3; // rbx

  result = *a1;
  v3 = a1;
  while ( result )
  {
    LOBYTE(a2) = result;
    InbvPortPutByte(*((_DWORD *)HeadlessGlobals + 14), a2);
    result = *++v3;
  }
  return result;
}
