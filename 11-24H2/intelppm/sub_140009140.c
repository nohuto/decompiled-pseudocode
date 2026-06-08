/*
 * XREFs of sub_140009140 @ 0x140009140
 * Callers:
 *     <none>
 * Callees:
 *     sub_140004D4C @ 0x140004D4C (sub_140004D4C.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140009140(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(__int64, __int64), __int64))(a2 + 128))(
             *(_QWORD *)(a2 + 72),
             0LL,
             sub_140004D30,
             a2);
  if ( (int)result < 0 )
    return sub_140004D4C(*(_QWORD *)(a2 + 176));
  return result;
}
