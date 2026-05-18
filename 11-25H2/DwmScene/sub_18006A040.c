/*
 * XREFs of sub_18006A040 @ 0x18006A040
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001773C @ 0x18001773C (sub_18001773C.c)
 */

bool __fastcall sub_18006A040(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax

  if ( a1 == a2 )
    return 1;
  v3 = ((__int64 (*)(void))_RTtypeid)();
  v4 = _RTtypeid(a2);
  return !sub_18001773C(v3, v4);
}
