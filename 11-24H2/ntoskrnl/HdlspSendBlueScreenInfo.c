/*
 * XREFs of HdlspSendBlueScreenInfo @ 0x140BB0528
 * Callers:
 *     HdlspDispatch @ 0x140BAF320 (HdlspDispatch.c)
 * Callees:
 *     sprintf_s @ 0x140501A30 (sprintf_s.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     HdlspSendStringAtBaud @ 0x140BB05CC (HdlspSendStringAtBaud.c)
 */

__int64 __fastcall HdlspSendBlueScreenInfo(int a1)
{
  KSPIN_LOCK i; // rbx
  char DstBuf[160]; // [rsp+20h] [rbp-B8h] BYREF

  HdlspSendStringAtBaud("\a\a\a<?xml>\a<BP>");
  HdlspSendStringAtBaud("\r\n<INSTANCE CLASSNAME=\"BLUESCREEN\">");
  sprintf_s(DstBuf, 0xA0uLL, "\r\n<PROPERTY NAME=\"STOPCODE\" TYPE=\"string\"><VALUE>\"0x%0X\"</VALUE></PROPERTY>", a1);
  HdlspSendStringAtBaud(DstBuf);
  for ( i = HeadlessGlobals[5]; i; i = *(_QWORD *)(i + 16) )
    HdlspSendStringAtBaud(*(_QWORD *)(i + 8));
  return HdlspSendStringAtBaud("\r\n</INSTANCE>\r\n</BP>\a");
}
