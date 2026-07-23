/*
 * XREFs of ResFwFindMessage @ 0x140BA197C
 * Callers:
 *     BcpFindMessage @ 0x140C5F7A4 (BcpFindMessage.c)
 * Callees:
 *     RtlFindMessage @ 0x1409AE2A0 (RtlFindMessage.c)
 */

BYTE *__fastcall ResFwFindMessage(ULONG MessageId)
{
  PMESSAGE_RESOURCE_ENTRY MessageEntry; // [rsp+48h] [rbp+10h] BYREF

  MessageEntry = 0LL;
  if ( qword_140EEFE48
    && *(_QWORD *)qword_140EEFE48
    && RtlFindMessage(*(PVOID *)qword_140EEFE48, 0xBu, 0, MessageId, &MessageEntry) >= 0
    && (MessageEntry->Flags & 1) != 0 )
  {
    return MessageEntry->Text;
  }
  else
  {
    return 0LL;
  }
}
