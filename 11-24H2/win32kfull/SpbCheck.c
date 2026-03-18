/*
 * XREFs of SpbCheck @ 0x14002D9F4
 * Callers:
 *     zzzLockWindowUpdate2 @ 0x140097CA0 (zzzLockWindowUpdate2.c)
 *     CreateSpb @ 0x1400980B0 (CreateSpb.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14022C6A8 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     SpbCheckDce @ 0x14002F820 (SpbCheckDce.c)
 */

__int64 SpbCheck()
{
  __int64 result; // rax
  __int64 UserSessionState; // rax
  __int64 *i; // rbx
  __int64 v3; // rax

  result = W32GetUserSessionState();
  if ( *(_QWORD *)(*(_QWORD *)(result + 57008) + 40LL) )
  {
    UserSessionState = W32GetUserSessionState();
    GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 48LL));
    for ( i = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState() + 57008) + 24LL);
          i != (__int64 *)(*(_QWORD *)(W32GetUserSessionState() + 57008) + 24LL);
          i = (__int64 *)*i )
    {
      if ( (i[6] & 0x400800) == 0 )
        SpbCheckDce(i);
    }
    v3 = W32GetUserSessionState();
    return GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v3 + 57008) + 48LL));
  }
  return result;
}
