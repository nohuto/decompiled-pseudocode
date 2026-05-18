/*
 * XREFs of sub_18006A1A0 @ 0x18006A1A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800177FC @ 0x1800177FC (sub_1800177FC.c)
 */

bool __fastcall sub_18006A1A0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax

  if ( a1 == a2 )
    return 1;
  v3 = ((__int64 (*)(void))_RTtypeid)();
  v4 = _RTtypeid(a2);
  return !sub_1800177FC(v3, v4);
}
