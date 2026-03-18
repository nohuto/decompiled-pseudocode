/*
 * XREFs of InbvPortPutByte @ 0x1406963A4
 * Callers:
 *     HdlspDispatch @ 0x140B9D320 (HdlspDispatch.c)
 *     HdlspSendStringAtBaud @ 0x140B9E5CC (HdlspSendStringAtBaud.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140278EE0 (KeStallExecutionProcessor.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall InbvPortPutByte(unsigned int a1)
{
  _QWORD *v1; // rdi
  unsigned int i; // ebx

  if ( a1 < 4 )
  {
    v1 = (_QWORD *)((char *)&Ports + 40 * a1);
    if ( *v1 )
    {
      for ( i = 0; i < 0x80; ++i )
      {
        if ( !(unsigned int)guard_dispatch_icall_no_overrides(v1) )
          break;
        KeStallExecutionProcessor(0xAu);
      }
    }
  }
}
