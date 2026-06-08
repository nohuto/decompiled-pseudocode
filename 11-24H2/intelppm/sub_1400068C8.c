/*
 * XREFs of sub_1400068C8 @ 0x1400068C8
 * Callers:
 *     sub_1400318EC @ 0x1400318EC (sub_1400318EC.c)
 *     sub_140040530 @ 0x140040530 (sub_140040530.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x140004D20 (_guard_check_icall_nop.c)
 *     sub_140010380 @ 0x140010380 (sub_140010380.c)
 *     sub_140010680 @ 0x140010680 (sub_140010680.c)
 */

__int64 __fastcall sub_1400068C8(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  if ( !a4 )
    return 0LL;
  if ( !a1 )
    return 22;
  if ( a3 && a2 >= a4 )
  {
    sub_140010380(a1, a3, a4);
    return 0LL;
  }
  sub_140010680(a1, 0LL, a2);
  if ( a3 )
  {
    if ( a2 >= a4 )
      return 22LL;
    return 34;
  }
  else
  {
    return 22;
  }
}
