/*
 * XREFs of RIMFreeAsyncWorkItem @ 0x140197D7C
 * Callers:
 *     RIMOnAsyncWorkItemNotification @ 0x1401972C4 (RIMOnAsyncWorkItemNotification.c)
 *     RIMQueueAndSignalAsyncWorkItem @ 0x1401978F8 (RIMQueueAndSignalAsyncWorkItem.c)
 *     RIMDeleteAllAsyncWorkNotificationItems @ 0x1401EC410 (RIMDeleteAllAsyncWorkNotificationItems.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?FreeAsyncWorkItem@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMAsyncWorkItem@@@Z @ 0x140197DE8 (-FreeAsyncWorkItem@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMAsyncWorkItem@@@Z.c)
 */

void __fastcall RIMFreeAsyncWorkItem(const struct RawInputManagerObject **Buffer)
{
  char *v2; // rcx
  char *v3; // rcx
  const struct RawInputManagerObject *v4; // rcx

  InputTraceLogging::RIM::FreeAsyncWorkItem(Buffer[3], (const struct RIMAsyncWorkItem *)Buffer);
  v2 = (char *)Buffer[6];
  if ( v2 )
    GreDeleteFastMutex(v2);
  v3 = (char *)Buffer[13];
  if ( v3 )
    GreDeleteFastMutex(v3);
  v4 = Buffer[7];
  if ( v4 )
    ObfDereferenceObject(v4);
  ObfDereferenceObject(Buffer[3]);
  GreDeleteFastMutex((char *)Buffer);
}
