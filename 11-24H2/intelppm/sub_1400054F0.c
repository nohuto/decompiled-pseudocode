/*
 * XREFs of sub_1400054F0 @ 0x1400054F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140004D4C @ 0x140004D4C (sub_140004D4C.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1400054F0(_QWORD *a1, __int64 a2)
{
  __int64 (__fastcall *v2)(_QWORD, __int64, __int64 (__fastcall *)(__int64, __int64), _QWORD *); // rax
  __int64 result; // rax

  v2 = (__int64 (__fastcall *)(_QWORD, __int64, __int64 (__fastcall *)(__int64, __int64), _QWORD *))a1[16];
  a1[22] = a2;
  LOBYTE(a2) = 1;
  result = v2(a1[9], a2, sub_140004D30, a1);
  if ( (int)result < 0 )
    return sub_140004D4C(a1[22]);
  return result;
}
