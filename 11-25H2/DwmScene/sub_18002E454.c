/*
 * XREFs of sub_18002E454 @ 0x18002E454
 * Callers:
 *     sub_18002E264 @ 0x18002E264 (sub_18002E264.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002E454(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( a3[1] )
  {
    *a2 = *a3;
    result = a3[1];
    a2[1] = result;
    _InterlockedIncrement((volatile signed __int32 *)(result + 12));
  }
  return result;
}
