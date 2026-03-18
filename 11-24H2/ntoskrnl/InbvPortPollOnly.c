/*
 * XREFs of InbvPortPollOnly @ 0x1406A1570
 * Callers:
 *     HdlspDispatch @ 0x140BAD320 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x140BADAA4 (HdlspGetLine.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall InbvPortPollOnly(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  _QWORD *v5; // rcx
  char result; // al

  if ( a1 >= 4 )
    return 0;
  v4 = 5LL * a1;
  v5 = (_QWORD *)((char *)&Ports + 40 * a1);
  if ( !*v5 )
    return 0;
  result = *((_BYTE *)&Ports + 8 * v4 + 33);
  if ( !result )
  {
    result = (unsigned int)guard_dispatch_icall_no_overrides(v5, (char *)&Ports + 8 * v4 + 32, a3, a4) == 0;
    *((_BYTE *)&Ports + 8 * v4 + 33) = result;
  }
  return result;
}
