/*
 * XREFs of rimObsReadMaxQueueSize @ 0x1401F0CB8
 * Callers:
 *     RawInputManagerInputObserverObjectCreate @ 0x14019B5B4 (RawInputManagerInputObserverObjectCreate.c)
 * Callees:
 *     RIMRegQueryDWord @ 0x140136A40 (RIMRegQueryDWord.c)
 */

__int64 rimObsReadMaxQueueSize()
{
  __int64 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows");
  RIMRegQueryDWord((__int64)&DestinationString, L"RimObserverQueueSize", 256, (int *)&v2);
  result = v2;
  if ( v2 > 0xFA00 )
    return 64000LL;
  return result;
}
