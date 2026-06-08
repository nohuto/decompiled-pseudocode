/*
 * XREFs of sub_14000FB00 @ 0x14000FB00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14000FB00(__int64 a1, __int64 (*a2)(void))
{
  __int64 i; // r8
  __int64 v4; // rdx
  __int64 result; // rax

  (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2528))(qword_140019128, qword_1400197B8);
  for ( i = qword_1400191D8; (__int64 *)i != &qword_1400191D8; i = *(_QWORD *)i )
  {
    **(_BYTE **)(i + 24) = 1;
    *(_BYTE *)(*(_QWORD *)(i + 24) + 1LL) = *(_BYTE *)(i + 16);
  }
  (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2536))(qword_140019128, qword_1400197B8);
  LOBYTE(v4) = 1;
  result = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))qword_140019768)(qword_140019730, v4, 0LL, 0LL);
  if ( a2 )
    return a2();
  return result;
}
