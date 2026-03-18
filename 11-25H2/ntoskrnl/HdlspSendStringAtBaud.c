/*
 * XREFs of HdlspSendStringAtBaud @ 0x140B9E5CC
 * Callers:
 *     HdlspBugCheckProcessing @ 0x140B9D1F8 (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x140B9D320 (HdlspDispatch.c)
 *     HdlspEnableTerminal @ 0x140B9D9D4 (HdlspEnableTerminal.c)
 *     HdlspGetLine @ 0x140B9DAA4 (HdlspGetLine.c)
 *     HdlspPutString @ 0x140B9E2F0 (HdlspPutString.c)
 *     HdlspPutWideString @ 0x140B9E468 (HdlspPutWideString.c)
 *     HdlspSendBlueScreenInfo @ 0x140B9E528 (HdlspSendBlueScreenInfo.c)
 * Callees:
 *     InbvPortPutByte @ 0x1406963A4 (InbvPortPutByte.c)
 */

char __fastcall HdlspSendStringAtBaud(_BYTE *a1)
{
  char result; // al
  _BYTE *v2; // rbx

  result = *a1;
  v2 = a1;
  while ( result )
  {
    InbvPortPutByte(*((_DWORD *)HeadlessGlobals + 14));
    result = *++v2;
  }
  return result;
}
