/*
 * XREFs of ResFwFindMessage @ 0x140BB397C
 * Callers:
 *     BcpFindMessage @ 0x140C72CE4 (BcpFindMessage.c)
 * Callees:
 *     RtlFindMessage @ 0x1409B98E0 (RtlFindMessage.c)
 */

BYTE *__fastcall ResFwFindMessage(ULONG MessageId)
{
  PMESSAGE_RESOURCE_ENTRY MessageEntry; // [rsp+48h] [rbp+10h] BYREF

  MessageEntry = 0LL;
  if ( qword_140EF0328
    && *(_QWORD *)qword_140EF0328
    && RtlFindMessage(*(PVOID *)qword_140EF0328, 0xBu, 0, MessageId, &MessageEntry) >= 0
    && (MessageEntry->Flags & 1) != 0 )
  {
    return MessageEntry->Text;
  }
  else
  {
    return 0LL;
  }
}
