/*
 * XREFs of ResFwFindMessage @ 0x140BB197C
 * Callers:
 *     BcpFindMessage @ 0x140C70B84 (BcpFindMessage.c)
 * Callees:
 *     RtlFindMessage @ 0x140A02480 (RtlFindMessage.c)
 */

unsigned __int16 *__fastcall ResFwFindMessage(unsigned int a1)
{
  unsigned __int16 *v2; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( qword_140EF0108
    && *(_QWORD *)qword_140EF0108
    && (int)RtlFindMessage(*(_QWORD *)qword_140EF0108, 0xBu, 0, a1, &v2) >= 0
    && (v2[1] & 1) != 0 )
  {
    return v2 + 2;
  }
  else
  {
    return 0LL;
  }
}
