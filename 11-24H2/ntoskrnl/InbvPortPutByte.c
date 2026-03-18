/*
 * XREFs of InbvPortPutByte @ 0x1406A15D8
 * Callers:
 *     HdlspDispatch @ 0x140BAD320 (HdlspDispatch.c)
 *     HdlspSendStringAtBaud @ 0x140BAE5CC (HdlspSendStringAtBaud.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x14033A030 (KeStallExecutionProcessor.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall InbvPortPutByte(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  _QWORD *v5; // rdi
  unsigned int i; // ebx

  if ( a1 < 4 )
  {
    v4 = a2;
    v5 = (_QWORD *)((char *)&Ports + 40 * a1);
    if ( *v5 )
    {
      for ( i = 0; i < 0x80; ++i )
      {
        LOBYTE(a2) = v4;
        if ( !(unsigned int)guard_dispatch_icall_no_overrides(v5, a2, 0LL, a4) )
          break;
        KeStallExecutionProcessor(0xAu);
      }
    }
  }
}
