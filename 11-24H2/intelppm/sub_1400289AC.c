/*
 * XREFs of sub_1400289AC @ 0x1400289AC
 * Callers:
 *     sub_1400287E4 @ 0x1400287E4 (sub_1400287E4.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1400289AC(int a1)
{
  __int64 v2; // rbx
  __int64 i; // rax

  v2 = 0LL;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019798, 0LL);
  for ( i = qword_1400197A0; (__int64 *)i != &qword_1400197A0; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 48) == a1 )
    {
      v2 = i;
      break;
    }
  }
  (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019798);
  return v2;
}
