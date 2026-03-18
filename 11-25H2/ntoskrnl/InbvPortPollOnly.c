/*
 * XREFs of InbvPortPollOnly @ 0x14069633C
 * Callers:
 *     HdlspDispatch @ 0x140B9D320 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x140B9DAA4 (HdlspGetLine.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall InbvPortPollOnly(unsigned int a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rcx
  char result; // al

  if ( a1 >= 4 )
    return 0;
  v1 = 5LL * a1;
  v2 = (_QWORD *)((char *)&Ports + 40 * a1);
  if ( !*v2 )
    return 0;
  result = *((_BYTE *)&Ports + 8 * v1 + 33);
  if ( !result )
  {
    result = (unsigned int)guard_dispatch_icall_no_overrides(v2) == 0;
    *((_BYTE *)&Ports + 8 * v1 + 33) = result;
  }
  return result;
}
