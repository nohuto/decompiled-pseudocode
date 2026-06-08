/*
 * XREFs of sub_14000FBB0 @ 0x14000FBB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14000FBB0(__int64 a1, __int64 (*a2)(void))
{
  __int64 i; // rcx
  __int64 result; // rax

  (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2528))(qword_140019128, qword_1400197B8);
  for ( i = qword_1400191D8; (__int64 *)i != &qword_1400191D8; i = *(_QWORD *)i )
    **(_BYTE **)(i + 24) = 1;
  (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2536))(qword_140019128, qword_1400197B8);
  result = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 (__fastcall *)(), __int64 (*)(void)))qword_140019768)(
             qword_140019730,
             0LL,
             sub_14000FC60,
             a2);
  if ( (int)result < 0 )
  {
    if ( a2 )
      return a2();
  }
  return result;
}
