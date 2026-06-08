/*
 * XREFs of sub_1400461B0 @ 0x1400461B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1400461B0(__int64 a1, int a2)
{
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019158, 0LL);
  if ( *(_DWORD *)(a1 + 736) != a2 )
  {
    *(_DWORD *)(a1 + 736) = a2;
    ((void (__fastcall *)(__int64))qword_140019698)(a1);
  }
  return (*(__int64 (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019158);
}
