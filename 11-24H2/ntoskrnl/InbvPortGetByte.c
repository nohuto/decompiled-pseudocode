/*
 * XREFs of InbvPortGetByte @ 0x1406A13BC
 * Callers:
 *     HdlspDispatch @ 0x140BAD320 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x140BADAA4 (HdlspGetLine.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall InbvPortGetByte(unsigned int a1, _BYTE *a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // r8

  if ( a1 < 4 )
  {
    v2 = 5LL * a1;
    v3 = (_QWORD *)((char *)&Ports + 8 * v2);
    if ( *v3 )
    {
      if ( *((_BYTE *)&Ports + 8 * v2 + 33) )
      {
        *a2 = *((_BYTE *)&Ports + 8 * v2 + 32);
        *((_BYTE *)&Ports + 8 * v2 + 33) = 0;
        return 1;
      }
      if ( !(unsigned int)guard_dispatch_icall_no_overrides((char *)&Ports + 8 * v2, a2, v3, &Ports) )
        return 1;
    }
  }
  return 0;
}
