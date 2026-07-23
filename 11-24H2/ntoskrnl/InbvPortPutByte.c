/*
 * XREFs of InbvPortPutByte @ 0x1406A2630
 * Callers:
 *     HdlspDispatch @ 0x140BAF320 (HdlspDispatch.c)
 *     HdlspSendStringAtBaud @ 0x140BB05CC (HdlspSendStringAtBaud.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140319510 (KeStallExecutionProcessor.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall InbvPortPutByte(unsigned int a1, __int64 a2)
{
  char v2; // si
  _QWORD *v3; // rdi
  unsigned int i; // ebx

  if ( a1 < 4 )
  {
    v2 = a2;
    v3 = (_QWORD *)((char *)&Ports + 40 * a1);
    if ( *v3 )
    {
      for ( i = 0; i < 0x80; ++i )
      {
        LOBYTE(a2) = v2;
        if ( !(unsigned int)guard_dispatch_icall_no_overrides(v3, a2) )
          break;
        KeStallExecutionProcessor(0xAu);
      }
    }
  }
}
