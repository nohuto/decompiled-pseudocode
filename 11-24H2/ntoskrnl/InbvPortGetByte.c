/*
 * XREFs of InbvPortGetByte @ 0x1406A2414
 * Callers:
 *     HdlspDispatch @ 0x140BAF320 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x140BAFAA4 (HdlspGetLine.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall InbvPortGetByte(unsigned int a1, _BYTE *a2)
{
  __int64 v2; // rcx

  if ( a1 < 4 )
  {
    v2 = 5LL * a1;
    if ( *((_QWORD *)&Ports + v2) )
    {
      if ( *((_BYTE *)&Ports + 8 * v2 + 33) )
      {
        *a2 = *((_BYTE *)&Ports + 8 * v2 + 32);
        *((_BYTE *)&Ports + 8 * v2 + 33) = 0;
        return 1;
      }
      if ( !(unsigned int)guard_dispatch_icall_no_overrides((char *)&Ports + 8 * v2, a2) )
        return 1;
    }
  }
  return 0;
}
